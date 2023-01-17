#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    

};
int main()
{
    student arr[3];
    cout<<"print your information"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"name:";
        cin>>arr[i].name;
        cout<<"age:";
        cin>>arr[i].age;
        cout<<"gender:";
        cin>>arr[i].gender;

    }
    // student a;
    // a.age=45;
    // a.gender=0;
    // a.name="aksha";
    // cout<<a.name;
    return 0;
}
