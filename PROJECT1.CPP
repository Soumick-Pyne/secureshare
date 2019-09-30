#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>

"""class for users entities of the programme"""
class person                    
{
  char name[20];
  int id;
  char password[5];
  char key;
  public:
  void read()
  { cout<<"name:";
    gets(name);
    cout<<"ID";
    cin>>id;
    cout<<"password";
    gets(password);
    cout<<"key:";
    cin>>key;
  }
  void display()
  {
   cout<<"name="<<name;
   cout<<"password="<<password;
   cout<<"key="<<key;
  }
  char * returnpassword()
  { return password;}

  char * rn()
  { return name;}
  int rid()
  {return id;}

};

"""block for writing user records in txt file imported"
void main()
{ clrscr();

  person A;
  int i;

  ofstream f1;
  f1.open("people.txt",ios::binary);
  for(i=0;i<5;i++)
  {
   A.read();
   f1.write((char *)&A,sizeof(A)); }
/*
 ifstream f2;
 f2.open("people.txt",ios::binary);
 while(!f2.eof())
 {
   f2.read((char *)&A,sizeof(A));
   A.display();
 }
*/

 getch();
 }




