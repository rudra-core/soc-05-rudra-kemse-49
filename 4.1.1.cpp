#include<iostream>
using namespace std;

class Calculator
{
 private:
 int num;

public:

int add(int a,int b)
{
 return a+b;
}

int add( int a,int b,int c)
{
 return a+b+c;
}
};

int main()
{
Calculator cal;
cout<<"Addition of a and b is:"<<cal.add(3,8);
cout<<"Addition of a,b and c is:"<<cal.add(1,3,5);
return 0;
}

