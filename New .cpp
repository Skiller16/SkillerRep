#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    double x, y, z, a, b;
    scanf_s("%lf %lf %lf", &x, &y, &z);
    a = pow(x, 3) * (pow(tan(pow(x + y, 2)), 2) + z / (sqrt(x + y) - 2 * tan(0.436)));
    b = (y * pow(x, 2) - z) / (exp(y * x) - 1) + (pow(5 - pow(y, 3), 1 / 3) / (abs(x - y) / sqrt(2 * x)));
    printf("a=%lf\n b=%lf", a, b);
}
