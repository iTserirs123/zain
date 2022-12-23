#include<iostream>
#include<cmath>
using namespace std;
	int addition(int a, int b)
		{int sum;
		sum=a + b;
		return sum;}	
	int sub(int a, int b)
		{int sub;
		sub=a - b;
		return sub;}
	int mul(int a, int b)
		{int mul;
		mul=a * b;
		return mul;}
	float div(float a, float b)
		{float div;
		div=a / b;
		return div;}
	int sqrt(int a, int b)
		{int sqrt;
		sqrt=a*a;
		return sqrt;}
	int rem(int a, int b)
		{int rem;
		rem=a % b;
		return rem;}
	int log(int a, int b)
		{return (a,b);}
int main()
		{	int a,b,result1,result2,result3,result5,result6;
			float result4;
			double result7;
			cout<<"Enter two number :";
			cin>>a;
			cin>>b;
			result1=addition(a,b);
			result2=sub(a,b);
			result3=mul(a,b);
			result4=div(a,b);
			result6=sqrt(a,b);
			result5=rem(a,b);
			result7=log(a);
			cout<<"Sum ="<<result1<<endl;
			cout<<"Substraction ="<<result2<<endl;
			cout<<"Multiplication ="<<result3<<endl;
    		cout<<"Division ="<<result4<<endl;
    		cout<<"Reminder ="<<result5<<endl;
    		cout<<"Square  of 1st ="<<result6<<endl;
    		cout<<"Log  of 1st Number ="<<result7<<endl;
		}
