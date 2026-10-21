#include<iostream>
using namespace std;
class Student
{
    int rollno;
    char name[30];
    public:
        void getdata()
        {
            cout<<"Enter Roll No, name="<<endl;
            cin>>rollno>>name;
        }
                void putdata(){
            cout<<"Roll no="<<rollno<<endl;
        }
};
class Print:public Student
{
        public:
        int a=10;
        void get()
        {
            cout<<"a="<<a<<endl;
        }
};
int main()
{
    Print p;
    p.getdata();
    p.putdata();
    p.get();
    return 0;
}