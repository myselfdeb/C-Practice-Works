// Write a Program to Calculate area of a Circle.

#include<stdio.h>

int main() {
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle :\n");
    scanf("%f",&radius);
    printf("The area of the Circle is : %f", radius*radius*pi);
    return 0;
}