// Write a program to calculate perimeter of rectangle Take sides , a & b , from the user.

# include<stdio.h>
int main(){
    float length;
    printf("Enter the length of the rectangle :\n");
    scanf("%f",&length);

    float width;
    printf("Enter the width of the rectangle :\n");
    scanf("%f",&width);

    float parameter;
    printf("The parameter of the rectangle is : %.2f",2*(length+width));

    return 0;
}
