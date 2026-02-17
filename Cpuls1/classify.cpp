#include <iostream> 
#include<windows.h>
using namespace std;

class student
{
    
    public:
    char name[20];
    int age;
    int studentId;
    student(char n[],int a, int sId){
           strcpy(name,n);
            age = a;
            studentId = sId;
            
    }
   void  classify(){

                cout<<"我的名字叫:"<<name<<"我的学号是："<<studentId<<endl;
                if (age>=13)
                {
                    cout<<"我是初中生"<<endl;
                    cout<<"我是大傻子"<<endl;
                }else if (age<13)
                {
                    cout<<"我是小学生"<<endl;
                }
                
                
    }

};


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
char mainname[20];
int mainage ,mainID;
cout<<"请输入名字"<<endl;
cin>>mainname;
cout<<"请输入年龄"<<endl;
cin>>mainage; 
cout<<"请输入学号"<<endl;
cin>>mainID;

student stu(mainname,mainage,mainID);

stu.classify();


system("pause");
return 0;

}


