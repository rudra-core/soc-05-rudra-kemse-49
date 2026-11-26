#include<iostream>
using namespace std;

class Person
{
 private:
 int age;

public:
void eat()
{
 cout<<"The person is eating";
}
};
class Doctor:public Person
{
 public:
void eat()
{ 
 cout<<"Doctor is eating";
}
};
int main()
{
 Person p;
 p.eat();
 Doctor d;
 d.eat();

return 0;
}


