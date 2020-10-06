#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class marksheet
{
    public:
    int rolln,cpp,java,n1,total;
    float per;
    char name[50];
    void pn()
    {
        cout<<"\n Enter the roll number: ";
        cin>>rolln;
        cout<<"\n Enter the name of student: ";
        cin>>name;
        cout<<"\n Enter the marks of c plus plus: ";
        cin>>cpp;
        cout<<"\n Enter the marks of java: ";
        cin>>java;
        cout<<"\n Enter the marks of n1: ";
        cin>>n1;
    }
    void pro()
    {
        total=cpp+java+n1;
        per=total/3;
    }
    void gd()
    {
        if(per>=80)
        {
            cout<<"\n Grade=Distinction";
        }
        else if(per>=60 && per<80)
        {
            cout<<"\n Grade=A";
        }
        else if( per>=50 && per<60)
        {
            cout<<"\n Grade=B";
        }
        else if(per>=35 && per<50)
        {
            cout<<"\n Grade=C";
        }
        else if(per<35)
        {
            cout<<"\n Grade=Fail";
        }
    }
    void gn()
    {
        cout<<"\n Roll Number== "<<setw(13)<<rolln;
        cout<<"\n Name== "<<setw(20)<<name;
        cout<<"\n Marks of CPlusPlus== "<<setw(6)<<cpp;
        cout<<"\n Marks of Java== "<<setw(11)<<java;
        cout<<"\n Marks of N1== "<<setw(13)<<n1;
        cout<<"\n Total Marks== "<<setw(13)<<total;
        cout<<"\n Percentage== "<<setw(14)<<per;
    }
};
void main()
{
    clrscr();
    marksheet m;
    m.pn();
    m.pro();
    m.gn();
    m.gd();
    getch();
}
