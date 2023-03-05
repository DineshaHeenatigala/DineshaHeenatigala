#include<iostream>
#include<fstream>
using namespace std;
#include <string>

class login
{
  public:
    void log_details()
    {

   int pw=123;

   cout<<"\t\t\t=================================\n";
   cout<<"\n\t\t\t\tLOGIN PAGE\n";
   cout<<"\n\t\t\t=================================\n\n";
   cout << "\n\t\tEnter Password: ";
   cin>>pw;
   if(pw==123)
    {
     cout<< "\n\n\n\t\t\tAccess Granted!\n\n";
}

 else
    {
    cout<< "\n\n\t\t\tAccess Aborted...\tPlease Try Again\n\n";
    log_details();
    }

    }
};

//inheritance
class School:public login
{
   private:
       string name;

    public:
    string Address,tele;

    void setName(string n)
   {
       name=n;
   }

   string getName()
   {
       return name;
   }
// parameterized constructor
    School(string a,string t)
    {
         Address=a;
        tele=t;
    }
};

class Student
{
  public:

      int grade,Register_no,Sgrade,sId;
      string First_name,Last_name,Address,Full_name,Addres,tel_No;

       void getData()
      {
        cout<<"\t\t**Student Information Data Section**\t\n\n"<<endl;
        cout<<"\t\t1.register new student\n"<<endl;
        cout<<"\t\t\t***NEW ENTRY***\n\n";
        cout<<"Enter first name of student:"<<endl;
        cin>>First_name;
        cout<<"Enter last name of student:"<<endl;
        cin>>Last_name;
        cout<<"Enter address:"<<endl;
        cin>>Address;
        cout<<"Enter grade of studied:"<<endl;
        cin>>grade;
        cout<<"enter register number of the student:"<<endl;
        cin>>Register_no;
        cout<<"============================="<<endl;
        cout<<"\n\n\n"<<First_name<<endl<<Last_name<<endl<<Address<<endl<<grade<<endl<<Register_no<<"\n\n"<<endl;
        cout<<"Data entered\n"<<endl;
        cout<<"============================="<<endl;

    }
//file handling
    void recordData(){

   ofstream o1("Student.txt");
   o1<<Full_name<<endl;
   o1<<Addres<<endl;
   o1<<tel_No<<endl;
   o1<<sId<<endl;
   o1<<Sgrade<<endl;
   o1.close();
   }

   void readData(){

     ifstream i1("Student.txt");
     i1>>Full_name;
     i1>>Addres;
     i1>>tel_No;
     i1>>sId;
     i1>>Sgrade;
      cout<<Full_name<<endl<<Addres<<endl<<tel_No<<endl<<sId<<endl<<Sgrade<<endl;
  }
};

class result
{
public:
     int check;
     float tot,avg;

     void calculation()
    {

    float p_marks,c_marks,m_marks,e_marks,cs_marks;
    cout<<"\n\n\t Enter the marks in Physics           : ";
	cin>>p_marks;
	cout<<"\n\n\t Enter the marks in Chemistry         : ";
	cin>>c_marks;
	cout<<"\n\n\t Enter the marks in Maths             : ";
	cin>>m_marks;
	cout<<"\n\n\t Enter the marks in English           : ";
	cin>>e_marks;
	cout<<"\n\n\t Enter the marks in Computer Science  : ";
	cin>>cs_marks;
	cout<<"\n\n\n\t\t\t***RESULT MENU***";
	cout<<"\n\n\t1. Total marks  :";
	cout<<"\n\n\t2. Average      :";
	cout<<"\n\n\t3. Grade        :";
	cout<<"\n\n\t4. Exit         :";
	cout<<"\n\n\n\tEnter Choice (1/2/3/4)? ";
	cin>>check;
	tot=(p_marks+c_marks+m_marks+e_marks+cs_marks);
	avg=(tot/5);

     if(check==1)
     {
     cout<<"\n\n\t Total Marks : \n\n"<<tot;
     }

     else if(check==2){

        cout<<"\n\n\t Average    :  \n\n"<<avg;
      }

     else if(check==3){
            if(avg>=75)
             {
                 cout<<"\n\n\t A pass \n\n" ;
             }
             else if(avg<75||avg>65)
             {
               cout<<"\n\n\t B pass \n\n" ;
             }
             else if(avg<65||avg>55)
             {
               cout<<"\n\n\t C pass \n\n" ;
             }
             else if(avg<55||avg>35)
             {
                cout<<"\n\n\t S pass\n\n" ;
             }
             else
             {
                 cout<<"\n\n\t Fail\n\n" ;
             }
          }

          else{

        cout<<"\n\n\t Exit \n\n" ;
              }
         }
//destructor
~result()
{
}
};

//main function

int main()
{
    int option;
    string student_name;

    School sc1("Mathara_Road_Galle","0112545632");
    sc1.setName("\n\t\t======President_girls_collage======\n");
    sc1.log_details();
    cout<<"\n\t\t\t***WELCOME*** "<<endl;

     cout<<sc1.getName();
     cout<<"\n\nAddress          :\t"<<sc1.Address<<endl;
     cout<<"\ntelephone number :\t"<<sc1.tele<<endl;
     cout<<"\n\n\t\t ****STUDENT INFORMATION***\n "<<endl;

    while(option!=4){
            cout<<"\n\n\nif you need to enter new record enter number 1"<<endl;
            cout<<"\nif you need to search any record enter number 2"<<endl;
            cout<<"\nif you need to see results any student enter number 3"<<endl;
            cout<<"\nif you want to exit please enter number 4\n\n"<<endl;
            cin>>option;
      if(option<1||option>4){

        cout<<"\n\nplease enter valied number..."<<endl;
      }
      else if(option==1){

        Student s1;
        s1.getData();
     }

     else if(option==2)
       {
            cout<<"please enter the student name\n"<<endl;
            cout<<"\nwhen you enter your name please NOT GET with space....first name and last name give together..."<<endl;
            cin>>student_name;
            if(student_name=="dineshadulakshi")
            {

        Student s2;
        cout<<"===========================\n\n"<<endl;
        s2.Full_name="dinesha_dulakshi";
        s2.Addres="Pilana_galle";
        s2.tel_No="0114545632";
        s2.sId=2001;
        s2.Sgrade=12;
        s2.recordData();

        Student s3;
        s3.readData();
        cout<<"\n\n============================="<<endl;
          }
       else{
          cout<<"\n\nno found record..... please try again.."<<endl;
            }
        }
       else if(option==3)
        {
        result r1;
        r1.calculation();
        }
       else
        {
        cout<<"\n\n\n--------------------------------Exit--------------------------------------\n\n"<<endl;
        cout<<"\t\t\t\t======THANK YOU======\n\n"<<endl;
    }
}
        return 0;
}

