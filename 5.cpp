//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
#include <iostream>
using namespace std;
//for adding odd or even we have to add the number and the next number untill it reaches the input nubber n
int sumeven(int a, int b)
	{
	if (b==a+1)//recursion will stop when the number stop at the given number n+1
		return 0;
	else
		{
		b++;
		int sumevenn=b++;
		if(b%2==0)
		return	sumevenn+sumeven(a,b);//recursion for  adding the even numbers
	}
}
int sumodd(int a, int b)
	{
	if (b==a+1)//recursion will stop when the number stop at the given number n+1
		return 0;
	else
		{
		int sumoddd=b++;
		if(b%2 != 0)
		return sumoddd+sumodd(a,b);//recursion for adding all the odd number
	}
}
int main(){
	int n,A;
	cout<<"Input a natural number"<<endl;
	cin>>n;
	cout<<"chose the number of a option"<<endl;
	cout<<"1.Sum of all even numbers."<<endl;
	cout<<"2.Sum of all odd numbers."<<endl;
	cin>> A;
	sumeven(n,0);
	sumodd(n,0);
	if(A==1)
		cout<<"sum of all even  natrural number from 1 to "<<n<<" is "<<sumeven(n,0)<<endl;
	else if(A==2)
		cout<<"sum of all odd natrural number from 1 to "<<n<<" is "<<sumodd(n,0)<<endl;
	else
		cout<<"you input an invalid option"<<endl;
	return 0;
}
