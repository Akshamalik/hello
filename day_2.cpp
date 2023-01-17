#include<iostream>
#include<string>
using namespace std;
//constructor in c++
class student 
{
    string name;
    public:
    int age;
    bool gender;
    student()
    {
        cout<<"default constructor"<<endl;
    }
    student(string s,int a,int g)
    {
        cout<<"parametrized constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    student(student &a)
    {
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    //geters--get private members
    // string getName
    // {
    //     return name;
    // }
    // setters--public functions set private data members
    // void setName()
    // {
    //     name=a;
    // }
    //function overloading
    float area(int r)
    {
        return 3.14*r*r;
    }
    int area(int l,int r)
    {
        return l*r;
    }



};