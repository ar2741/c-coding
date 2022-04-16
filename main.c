/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float distance, meters,feet,inches,centimeters;
    scanf("%f",&distance);
    meters=1000*distance;
    feet=3280.84*distance;
    inches=39370.1*distance;
    centimeters=100000*distance;
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm",meters,feet,inches,centimeters);
    
    return 0;
}

