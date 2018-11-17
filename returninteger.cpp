#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int a[5]={12,1,34,102},res=0;
/*	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}*/
	for(int i=0;i<5;i++)
	{
		int count=0;
		int temp=a[i];
		while(temp!=0)
		{
			count++;
			temp=temp/10;
		}
			res=res*pow(10,count)+a[i];
	}
	cout<<res;
}
