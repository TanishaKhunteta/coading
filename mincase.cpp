#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int coins[] = {1,2,5,10};
int v = 787;
int count=0;
int n=4;
sort(coins,coins+n);
for(int i=n-1;i>0;i--)
{
	if(v>0)
	{	
	  v=v%coins[i];
	   count+=1;
}
}
   cout<<count<<endl;
	return 0;
}

