	#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
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
  char rid()
  {return id;}


};

void main()
{
  clrscr();
  person A;
  int i=0,ans;
  char nm[20],a, file[20],password[5];
  cout<<"_____________________FILE_SHARE_ARMOUR_1.0_____________________\n";

  cout<<"              enter choice: 1.Encrypt 2.Decrypt	  ";
  cin>>ans;
  if(ans==1)
 {
   cout<<"enter name :";
   gets(nm);
   cout<<"filename:";
   gets(file);
       ifstream f2;
	 f2.open("people.txt"	,ios::binary);

	 while(!f2.eof())
	 {
	   f2.read((char *)&A,sizeof(A));
	   if(f2.eof())
	   break;
	  if(strcmp(A.rn(),nm)==0)
	  {  int id=A.rid();
	    ifstream f3;
	    ofstream f4;
	    f3.open(file);
	    f4.open("temp.txt");
	    switch(id)
	    {
	     case 1:  while(!f3.eof())
		    {
		      f3.get(a);
		      if(i%2==0)
		    {
		      a=a+id*i;
		    }
		    else
		     a=a-id*i;
		     i++;
		      if(i>2)
			 i=0;
		     f4.put(a);
		   }
		  break;
       case 2:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a+id*i;}
		  else
		 a=a-id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		break;
	case 3:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a+id*i;}
		  else
		 a=a-id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		break;
	  case 4:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a+id*i;}
		  else
		 a=a-id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		break;
	  case 5:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a+id*i;}
		  else
		 a=a-id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		break;
   default  : cout<<"Error.";
	      break;
     }
     f4.close();
     f3.close();
  }
  }
  f2.close();
 }
/////////////////////////////////////////////////////////////////////////
else if(ans==2)
{
  cout<<"enter your name :";
  gets(nm);
  cout<<"enter password :";
  gets(password);
  cout<<"enter filename :";
  gets(file);
  int q=0;

  ifstream f2;
 f2.open("people.txt",ios::binary);
 while(!f2.eof())
 {
   f2.read((char *)&A,sizeof(A));
   if(f2.eof())
   break;
  if(strcmp(A.rn(),nm)==0)
  {
   int id=A.rid();
   if(strcmp(A.returnpassword(),password)!=0)         /*Password check for brute force attack*/
   {id=id+1;}
    ifstream f3;
    ofstream f4;
    f3.open(file);
    f4.open("decrypted.txt",ios::binary);
    switch(id)
    {
     case 1:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a-id*i;}
		  else
		 a=a+id*i;
		 i++;
		 if(i>2)
		 i=0;
		 f4.put(a);
		}
		cout<<"Thanks! Filename would be decrypte.";
		break;
       case 2:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a-id*i;}
		  else
		 a=a+id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		cout<<"Thanks! Filename would be decrypte.";
		break;
	case 3:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a-id*i;}
		  else
		 a=a+id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		cout<<"Thanks! Filename would be decrypte.";
		break;
	  case 4:  while(!f3.eof())
		{
		 f3.get(a);
		if(i%2==0)
		 {a=a-id*i;}
		  else
		 a=a+id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		cout<<"Thanks! Filename would be decrypte.";
		break;
	  case 5:
		 cout<<"NNN";
		 while(!f3.eof())
		{
		 f3.get(a);
		 if(f3.eof())
		   break;
		if(i%2==0)
		 {a=a-id*i;}
		  else
		 a=a+id*i;
		 i++;
		  if(i>2)
		 i=0;
		 f4.put(a);
		}
		q++;
		cout<<" choy Thanks! Filename would be decrypte."<<q;
		break;
   default  : cout<<"Error.";
	      break;
     }
     f4.close();
     f3.close();
  }
  }
  f2.close();
 }
 else
 cout<<"enter valid choice !";
 getch();
 }