#include <iostream>

using namespace std;

double GetArea(double radius)
{
    return (3.14*radius*radius);
}
double GetArea(double length,double breadth)
{
    return (length * breadth);
}

int main()
{
    cout<< "Area of Circle with radius " <<"(10.5) :" << GetArea(10.5) <<endl;
    cout<< "Area of Rectangle with len as (12.8) and bth as (6.2)  :" << GetArea(12.8,6.2);
    return 0;
}
