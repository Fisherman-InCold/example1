#include <iostream>
#include <string>
#include "Abstract_Base_Class.h"

using namespace std;

enum Sex {male,female};

class Person:public Something 
{
    public:
        Person() {}
        Person(string na,int ag,Sex se,string ad,long int ph):
            name(na),age(ag),sex(se),address(ad),phone(ph) {}
        virtual ~Person() {cout<<"Person has been released."<<endl;}
        virtual void show() const;

    protected:
        string name;
        int age;
        Sex sex;
        string address;
        long int phone;

        void display() const;
};

class Teacher:virtual public Person
{
    public:
        Teacher() {}
        Teacher(string na,int ag,Sex se,string ad,long int ph,string ti):
            Person(na,ag,se,ad,ph),title(ti) {}
        virtual ~Teacher() {cout<<"Teacher has been released."<<endl;}
        virtual void show() const;
        
    protected:
        string title;

        void display() const;
};

class Cadre:virtual public Person
{
    public:
        Cadre() {}
        Cadre(string na,int ag,Sex se,string ad,long int ph,string po):
            Person(na,ag,se,ad,ph),post(po) {}
        virtual ~Cadre() {cout<<"Cadre has been released."<<endl;}
        virtual void show() const;
        
    protected:
        string post;

        void display() const;
};

class Teacher_Cadre:public Teacher,public Cadre
{
    public:
        Teacher_Cadre() {}
        Teacher_Cadre(string na,int ag,Sex se,string ad,long int ph,string ti,string po,float wa):
            Person(na,ag,se,ad,ph),Teacher(na,ag,se,ad,ph,ti),Cadre(na,ag,se,ad,ph,po),wage(wa) {}
        virtual ~Teacher_Cadre() {cout<<"Teacher_Cadre has been released."<<endl;}
        virtual void show() const;
        
    protected:
        float wage;

        void display() const;
};

//对以上类的成员函数进行声明
void Person::display() const
{
    cout<<"This is a person."<<endl;
}
void Person::show() const
{
    display();
    cout<<"The relative information is--"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    if(sex==0) cout<<"Sex:male"<<endl;
    else cout<<"Sex:female"<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Phone:"<<phone<<endl;
    cout<<'\n';
}
void Teacher::display() const
{
    cout<<"This is a teacher."<<endl;
}
void Teacher::show() const
{
    display();
    cout<<"The relative information is--"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    if(sex==0) cout<<"Sex:male"<<endl;
    else cout<<"Sex:female"<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Phone:"<<phone<<endl;
    cout<<"Title:"<<title<<endl;
    cout<<'\n';
}
void Cadre::display() const
{
    cout<<"This is a cadre."<<endl;
}
void Cadre::show() const
{
    display();
    cout<<"The relative information is--"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    if(sex==0) cout<<"Sex:male"<<endl;
    else cout<<"Sex:female"<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Phone:"<<phone<<endl;
    cout<<"Post:"<<post<<endl;
    cout<<'\n';
}
void Teacher_Cadre::display() const
{
    cout<<"This is a teacher-cadre."<<endl;
}
void Teacher_Cadre::show() const
{
    display();
    cout<<"The relative information is--"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    if(sex==0) cout<<"Sex:male"<<endl;
    else cout<<"Sex:female"<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Phone:"<<phone<<endl;
    cout<<"Title:"<<title<<endl;
    cout<<"Post:"<<post<<endl;
    cout<<"Wage:"<<wage<<endl;
    cout<<'\n';
}
