#include<iostream>
#include<string>
using namespace std;

class Book
{
 public:
int book_id;
string book_name;

 void display()
{
 cout<<"THE BOOK ID IS:"<<book_id<<endl;
 cout<<"THE BOOK NAME IS:"<<book_name<<endl;
}
 Book(int b_id, string b_n)
{
 book_id=b_id;
 book_name=b_n;
}
 Book(Book &b)
{
 book_id=b.book_id;
 book_name=b.book_name;
}
};

 int main()
{
 Book b1(123, "ProgramingLanguage");
 Book b2(b1); 
 b1.display();
 b2.display();
return 0;
}

