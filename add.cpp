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
    double c;
    c = a + b;
    return c;
}
