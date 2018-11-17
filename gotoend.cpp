#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	int a[5]={2,4,1,1,5},x=0,flag=0,b[5]={0};
	while(1)
	{
		x=a[x];
		if(b[x]==1)
		{
			flag=0;
			break;
		}
		if(x==5)
		{
			flag=1;
			break;
		}
		b[x]=1;
	}
	if(flag==1)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
}
