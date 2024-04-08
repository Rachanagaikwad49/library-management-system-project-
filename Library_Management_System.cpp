/******************************************************************************
library management system for college without file handling.
*******************************************************************************/
#include <iostream>
#include<vector>
#include<stdio.h>
#include<fstream>
using namespace std;
class library
{
public:
long int reg;
char name[50],branch[60],BA[39],BN[30];
int rollno,incommingtime,outgoingtime;
int choice;
int ID,BI,BP,BP1, RD;
void student()
{
cout<<"\n Enter your name:";
cin>>name;
cout<<"\nEnter Roll number";
cin>>rollno;
cout<<"\nEnter branch:";
cin>>branch;
cout<<"\nEnter your incomming time:";
cin>>incommingtime;
cout<<"\nEnter your outgoing time:";
cin>>outgoingtime;
}
void new1()
{
cout<<"\nEnter issue Date:";
cin>>ID;
cout<<"\nEnter Book Id:";
cin>>BI;
cout<<"\nEnter Book Name:";
cin>>BN;
cout<<"\nEnter Book auther name:";
cin>>BA;
cout<<"\nEnter yourBook price :";
cin>>BP;
cout<<"\nEnter Book pages:";
cin>>BP1;
}
void display()
{
cout<<"\n*******Display Record*******";
cout<<"\n";
cout<<"\nName:- "<<name;
cout<<"\nRoll no:-"<<rollno;
cout<<"\nbrach:-"<<branch;
cout<<"\n incommingtime:-"<<incommingtime;
cout<<"\noutgoingtime:-"<<outgoingtime;
}
};
int main()
{
library n;
int ch,RD;
char ans;
start1:
cout<<"\n1)new entry"<<endl;
cout<<"\n2)Display new entry"<<endl;
cout<<"\n3) Issue Book"<<endl;
cout<<"\n4) Return Book"<<endl;
cout<<"\n5) Exit"<<endl;
start:
cout<<"\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:
n.student();
cout<<"*******THANKU*******";
break;
case 2:
n.display();
cout<<"*******THANKU*******";
break;
case 3 :
n.new1();
cout<<"*******THANKU*******";
break;
case 4:
n.new1();
cout<<"\nEnter book return date"<<endl;
cin>>RD;
cout<<"*******THANKU*******";
break;
case 5 :
break;
default:
cout<<"you have enterd a wrong value please try again:"<<endl;
goto start;
cout<<"thank you ";
}
return 0;
}