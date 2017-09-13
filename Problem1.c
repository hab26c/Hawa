/*
 ============================================================================
 Name        : Problem 1
 Author      : Hawa Benshatwan
 Version     :
 Copyright   : Your copyright notice
 Description : calculate the area of a circle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14  //PI value is defined as 3.14

 int main ()

{
    float r ;  //r = radius
    float A ;
    printf("Enter the radius value:") ;
    scanf("%f", &r) ;  //save the entered value to r
    A= PI*r*r ;  //do the calculation for the area

    printf("The area of the circle = %f", A) ;

}

