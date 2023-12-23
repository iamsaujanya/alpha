#include <stdio.h>

int main()
{

    float weight, height, bmi;

    printf("Welcome to the BMI Calculator!\n");
    printf("Please enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Please enter your height in cm: ");
    scanf("%f", &height);

    height = height / 100; // convert height to meters

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("You are underweight. This can be unhealthy, so please consult your doctor.\n");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("You are at a healthy weight. Keep up the good work!\n");
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("You are overweight. Try to exercise more and improve your diet.\n");
    }
    else
    {
        printf("You are obese. Your health is at risk. See a doctor for help getting to a healthy weight.\n");
    }

    printf("\nThank you for using the BMI Calculator. Stay healthy!\n");

    return 0;
}
