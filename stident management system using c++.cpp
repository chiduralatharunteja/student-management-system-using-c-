/******************************************************************************
PROJECTNAME : STUDENT MANAGEMENT SYSTEM BY DETAILS USING C++
CREATED DATE: 2-7-2021
DONE BY     : CH THARUN TEJA

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
class student{
    public:
    int rollno;
    string name;
    char gender;
    int age;
    int std;

void heading(){
    cout.setf(ios::left);
    cout<<setw(10)<<"Rollno.";
    cout<<setw(20)<<"name";
    cout<<setw(10)<<"gender";
    cout<<setw(5)<<"age";
    cout<<setw(5)<<"std";
    cout<<endl;
    
}
    
void getdata(){
     cout<<"enter student details\n";
     cout<<"rollnumber: ";
     cin>>rollno;
     cout<<"name      : ";
     cin>>name;
     cout<<"gender    : ";
     cin>>gender;
     cout<<"age       : ";
     cin>>age;
     cout<<"studying  : ";
     cin>>std;
}

 void listdata(){
     cout.setf(ios::left);
    cout<<setw(10)<<rollno;
    cout<<setw(20)<<name;
    cout<<setw(10)<<gender;
    cout<<setw(5)<<age;
    cout<<setw(5)<<std;
    cout<<endl;
     
 }
};
int main()
{
    int n;
    cout<<"number of details of students"<<endl;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
         s[i].getdata();
         
    }
    
    s[0].heading();
    
    for(int i=0;i<n;i++){
         s[i].listdata();
         
    }
    
    //s1.display();
   // s1.getdata();
    //s1.display();

    return 0;
}