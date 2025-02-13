#include <stdio.h>
#define PI 3.14159

void greeting();
double surface_area(double r, double h);

int main()
{

    greeting();
    double r, h, area;
    printf("enter the radius of the circle: ");
    scanf("%lf", &r);
    printf("enter the height of the cylinder: ");
    scanf("%lf", &h);
    // area = 2 * 22 / 7 * r(r + h);
    area = surface_area(r, h);
    printf("surface area of the cylinder is : %lf", area);

    return 0;
}

void greeting()
{
    printf("Hello, this is my first program in C\n");
}

double surface_area(double r, double h)
{
    return (2 * PI * r * (r + h));
}