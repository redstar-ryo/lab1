/*************************
input n
print n
if n=1 then stop
if n is odd then n<-3n+1
if n is even then n<-n/2
*************************/

#include<iostream>
using namespace std;

int main()
{
int n=0;

cout << "Please enter an integer:";
cin >> n ;

if(n==1) 
cout << n << endl; //題目條件如果n=1則停止 所以印出n本身
else
{	cout << n << " ";
	while(n!=1)
	{
		if(n%2==0)
		n/=2;
		else 
		{n=3*n+1;}

	cout << n <<" ";
	}
cout << endl; //讓指令列出現在下一行
}
}

