#include<iostream>
using namespace std;

struct complex
{
	float real;
	float imaginary;
}c1,c2,sum;

int main()
{
	cout<<"Enter real part of both number "<<endl;
	cin>>c1.real>>c2.real;
	
	cout<<"Enter imaginary part of both number "<<endl;
	cin>>c1.imaginary>>c2.imaginary;
	
	sum.real=c1.real+c2.real;
	sum.imaginary=c1.imaginary+c2.imaginary;
	
  cout<<"Your complex sum is: "<<sum.real;
    if (sum.imaginary>=0) 
	{
        cout<<"+" <<sum.imaginary <<"i"<< endl;
    }
	 else
	 {
        cout<<"-"<< -sum.imaginary<<"i"<<endl;
    }
	
}

