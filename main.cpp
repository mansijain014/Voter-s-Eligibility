#include <iostream>
using namespace std;
void check(int age){
    if(age>18)
    cout<<"\nYou can vote & You should vote👆.";
    else if(age==18)
    cout<<"\nThis is your first time you can vote!!";
    else{
    cout<<"\nYou can't vote.";
    cout<<"\nWait for "<<18-age<<" years then you can vote.";
    }
}
void display(string name,int age){
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
}
int main()
{   
    string name;
    int age;
    cout<<"**Your Vote Can Make A Difference**";
    cout<<"\nEnter name: ";
    getline(cin,name);
    cout<<"\nEnter age: ";
    cin>>age;
    display(name,age);
    check(age);
    return 0;
}
