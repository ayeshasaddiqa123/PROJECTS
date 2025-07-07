#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int sum1(int a);
int main ()               // main function from where execution starts
{
int sum=0;
int a , c;
char ch;

while (ch!='\n')
{

//cout<<"Enter a number to sum : ";
cin>>a;
  c=sum1(a);
ch=cin.get(); 
}
cout<<c;
	
   return 0; //return 0 to operating system
}
int sum1(int a)

{
static	int sum =0;
return sum=sum+a;	
}