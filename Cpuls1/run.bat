@echo off
setlocal enabledelayedexpansion

:: 检查是否有 .cpp 文件
set "cpp_file="
for %%f in (*.cpp) do (
    set "cpp_file=%%f"
    goto :found
)

:found
if not defined cpp_file (
    echo 错误：当前目录下未找到任何 .cpp 文件。
    goto :end
)

echo 找到源文件：%cpp_file%
set "exe_file=!cpp_file:.cpp=.exe!"

echo.
echo 正在编译 %cpp_file% ...
g++ -fdiagnostics-color=always -g "%cpp_file%" -o "%exe_file%"

if %errorlevel% equ 0 (
    echo.
    echo ========================================
    echo 编译成功！正在运行 %exe_file%...
    echo ========================================
    echo.
    "%exe_file%"
) else (
    echo.
    echo 编译失败，请检查代码。
)

:end
echo.
echo 按任意键退出...
pause >nul
endlocal