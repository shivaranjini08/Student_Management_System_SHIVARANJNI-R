#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    char found;

    do
    {
        cout<<"\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Search Student";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\nEnter Roll Number: ";
                cin>>s[n].roll;

                cout<<"Enter Name: ";
                cin>>s[n].name;

                cout<<"Enter Marks: ";
                cin>>s[n].marks;

                n++;
                cout<<"\nStudent Added Successfully!";
                break;

            case 2:
                if(n==0)
                {
                    cout<<"\nNo Student Records Found!";
                }
                else
                {
                    cout<<"\nStudent Records\n";
                    for(i=0;i<n;i++)
                    {
                        cout<<"\nRoll No : "<<s[i].roll;
                        cout<<"\nName    : "<<s[i].name;
                        cout<<"\nMarks   : "<<s[i].marks;
                        cout<<"\n---------------------------";
                    }
                }
                break;

            case 3:
                found='N';
                cout<<"\nEnter Roll Number to Search: ";
                cin>>roll;

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        cout<<"\nStudent Found";
                        cout<<"\nRoll No : "<<s[i].roll;
                        cout<<"\nName    : "<<s[i].name;
                        cout<<"\nMarks   : "<<s[i].marks;
                        found='Y';
                        break;
                    }
                }

                if(found=='N')
                    cout<<"\nStudent Not Found!";
                break;

            case 4:
                cout<<"\nThank You!";
                break;

            default:
                cout<<"\nInvalid Choice!";
        }

    }while(choice!=4);

    return 0;
}