#include <iostream>
#include <limits.h>
using namespace std;
int Factorial(int n)
{
	int fact=1,i;
	if(n==0)
	{
		return fact;
	}
	else
	{
		return n*(Factorial(n-1));
	}   
}
int main()
{
	int number;
	cin>>number;
	cout<<Factorial(number);  
	return 0;
}
