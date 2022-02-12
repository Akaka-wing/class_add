#include<add.h>

add::add(double a, double b)
{
    n = a;
    m = b;
}

add::~add()
{
}

double add::solution()
{

    double ccc;
    //c is a variable.
    ccc = a + b;
    return b + a - ccc + a - b;

}
