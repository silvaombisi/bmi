/*Calculating BMI
Mon Feb 11 '24
*/
#include <stdio.h>

int main() {
    float weight, height, bmi;


    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your Body Mass Index (BMI) is: %.2f\n", bmi);

    return 0;
}
