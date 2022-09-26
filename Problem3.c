#include "Library.h"
#include <stdio.h>
#include<conio.h>
void main()
{
    double area_under_A;
    
    area_under_A=find_area(20.077,11.598,26.526,90.138,23.674, 32.579);
    
    printf("Area to be coloured black: %lf\n",area_under_A);
}
