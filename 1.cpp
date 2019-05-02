#include<iostream>
using namespace std;

int main(){
	double i,s = 4,p = 0,j = 1,a = 1;
	
	for(i = 1; i <= 99;i+=2,j++)
	{
		p = p+s/i;
		if(a == 1)
		{
			cout << s;
			a = 2;	
		}
		else if(a == 2)
		{
			cout << s<<"/"<<i;
			a = 3;
		}
		else if(a == 3)
		{
			cout <<"+"<< s<<"/"<<i;
			a = 2;
		}
		s = s*-1;
		if(j == 10)
		{
			cout << endl;
			j = 0;
		}
	} 
	 cout <<"="<<p;
} 
