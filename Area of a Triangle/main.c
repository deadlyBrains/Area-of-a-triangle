#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main () {

    int base;
    int height;
    int area;
    float side1, side2, side3;
    float semi_perimeter;
    float herons_formula;


    printf("Please enter the base and height but if you want to calculate using herons formula eneter 0 twice: ");
    scanf("%d%d", &base, &height);

    if (base == 0 && height == 0) {
         printf("Enter the measure of each side : ");
    scanf("%f%f%f", &side1, &side2, &side3);

     semi_perimeter = (side1 + side2 + side3)/2;

    herons_formula = sqrt( semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3));
    printf("Hence, the area is %f", herons_formula);
    
    }
    
    //Area of a triangle = 1/2 * b * h
    else {

    area = 0.5 * (base * height);
    printf("the area of the triangle is %d", area);

    }

    return 0;
}