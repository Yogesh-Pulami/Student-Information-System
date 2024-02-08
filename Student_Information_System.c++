#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
class Student{
    private:
    string name;
    int id;
    double gpa;
    public:
void setName(){
    cout<<endl<<"Enter Your Name: ";
    cin.ignore();
    getline(cin,name);
}
void setID(){
    cout<<"Enter Your ID: ";
    cin>>id;
}
void setGPA(){
      do {
        cout << "Enter student's GPA (between 0 and 4): ";
        cin >> gpa;
    } while (gpa < 0 || gpa > 4);
}

int getName(){
    cout<<"Name: "<<name<<endl;
    return 0;
}
int getID(){
    cout<<"ID: "<<id<<endl;
    return 0;
}
int getGPA(){
   cout<<"GPA: "<<gpa<<endl;
    return 0;
}
void writetofile(){
ofstream record("st_user_data.txt", ios::app);
record<<left<<setw(20)<<name;
    record<<left<<setw(10)<<id;
    record<<left<<setw(10)<<fixed<<setprecision(2)<<gpa<<endl;
    record.close();
}
};

int main(){
    Student student;
    cout<<endl<<"Welcome to the student information system!"<<endl<<endl;
    int i= 0;
    int no_of_student;
    //Total Number of Student in a class
    cout<<"Enter the number of students in a class: ";
    cin>>no_of_student;
    //looping
    do{
    student.setName();
    student.setID();
    student.setGPA();
   //Printing student detail
    cout<<endl<<"Student Information:"<<endl;
    student.getName();
    student.getID();
    student.getGPA();
     //Student information recode in file
    student.writetofile();
    i++;//increment of i value
    }while (i<no_of_student);
    cout<<endl<<"Thank you for using the student information system..."<<endl;
    return 0;
}