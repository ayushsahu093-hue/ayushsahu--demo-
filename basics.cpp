#include<iostream>
using namespace std;
class teacher { // blueprint of class 
    public: // acess specifer 
    string name ;
    string subject;
    int age;
    string dept;
    int contact;

    void display(){ // member function & function creation 
    
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"dept:"<<dept<<endl;
        cout<<"contact:"<<contact<<endl;
    }

};
int main(){
 teacher t1; // object creation
t1.name="ayush"; // assign values to object
t1.subject="maths"; 
t1.age=24;
t1.dept="science";
t1.contact=123456789;
t1.display(); // function call
 return 0;
}
