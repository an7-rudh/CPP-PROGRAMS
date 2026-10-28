#include <iostream>
using namespace std;
class student{
    private:
        int rollNo;
        string name;
    public:
        student(int r,string n){
            rollNo = r;
            name = n;
            cout<<"Student object created"<<endl;

        }
        void display()
        {
            cout<<"Roll number: "<<rollNo<<endl;
            cout<<"Name: "<<name<<endl;

        }
        ~student()

        {
            cout<<"Student object destroyed"<<endl; 
        }
    };
    int main(){
        int rollno;
        string name;
        cout<<"enter name: "<<endl;
        cin>> name;
        cout<<"enter roll no: "<<endl;
        cin>> rollno;
        student s1(rollno,name);
        s1.display();
        return 0;
    }



