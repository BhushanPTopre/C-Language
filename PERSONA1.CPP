/* wap to print output as 1/1+1/11+1/111+1/1111+.... */
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  int i,n,sum=1;
  float s=0.0;
  clrscr();
  cout<<"\n\nEnter a limit till which we want to print output:";
  cin>>n;
  cout<<"Sum= ";
  for(i=1;i<=n;i++)
  {
    cout<<"1/"<<sum<<"+";
    s=1.0/sum;
    sum=sum+pow(10,i);
  }
  cout<<"...";
  cout<<"\n\nIts Sum="<<s;
  getch();
}