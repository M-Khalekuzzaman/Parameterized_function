#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    int id;
    double cgpa;
    void display()
    {
        cout<<  id << "   "<< cgpa <<endl;
    }
    void setValue(int x , double y)
    {
        id = x;
        cgpa = y;
    }

};
int main()
{
    Student kaochar,shakib;
    kaochar.setValue(101,3.92);
    kaochar.display();
    shakib.setValue(102,3.52);
    shakib.display();

    getch();
}
