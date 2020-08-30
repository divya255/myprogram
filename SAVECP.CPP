#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,n;
clrscr();
cout<<" Enter two numbers";
cin>>a>>b;
cout<<"enter \n 1.Add \n 2.Sub \n 3.Mul \n 4.Div \n";
cin>>n;
switch(n)
{
case 1:c=a+b;
       cout<<"sum is"<<c;
       break;
case 2:c=a-b;
       cout<<"difference is"<<c;
       break;
case 3:c=a*b;
       cout<<"product is"<<c;
       break;
case 4:c=a/b;
       cout<<"remainder is"<<c;
       break;
default:cout<<"invalid choice";
	break;
}
getch();
}