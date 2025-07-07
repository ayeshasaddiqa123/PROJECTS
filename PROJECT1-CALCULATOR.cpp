#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int sum1(int a);
int differ(int );
int div (int );
int mul (int);
int a;
int main ()               // main function from where execution starts
{

int  c;
char ch;
int b;
cin>>b;

while (ch!='\n')
{

   int z=b;
if (ch == '+')

   {
   cin>>a;
  c=z+sum1(a);
   }
   
else if ( ch == '-')

 {
   cin>>a;
   int d = differ(a);
   if ( d < 0)
   
  c=z+d;
  else
  c= z-d;
  
   }
   
else if ( ch == '/')

 {
   cin>>a;
  c=z/div(a);
   }   
   
else if ( ch == '*')

 {
   cin>>a;
  c=z*mul(a);
   }   
   
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
int differ(int a)
{
	static int diff =0;
	return diff=diff-a;
}

int div (int a)
{
		static int division =a;
	return division;
}
int mul (int)
{
static	int m=1;
return m=m*a;
}
