#include <stdio.h>

 

// Function to convert length feet from  to meters

double convertLength(double feet) {

    return feet * 0.305;

}

 

// Function to convert weight from pounds to kilograms

double convertWeight(double pounds) {

    return pounds * 0.453592;

}

 

// Function to convert volume from fluid ounces to milliliters

double convertVolume(double fluidOunces) {

    return fluidOunces * 29.5735;

}

 

// Function to convert temperature from Fahrenheit to Celsius

double convertTemperature(double fahrenheit) {

    return (fahrenheit - 32) * 5 / 9;

}

 

int main() {

    double value;

    int choice;

 

    // Display menu

    printf("US Customary to Metric Converter Menu:\n");

    printf("1. Convert Length (feet to meters)\n");

    printf("2. Convert Weight (pounds to kilograms)\n");

    printf("3. Convert Volume (fluid ounces to milliliters)\n");

    printf("4. Convert Temperature (Fahrenheit to Celsius)\n");

    printf("5. Exit\n");

 

    // Get user choice

    printf("Enter your choice (1-5): ");

    scanf("%d", &choice);

 

    // Perform conversion based on user choice

    switch (choice) {

        case 1:

            printf("Enter length in feet: ");

            scanf("%lf", &value);

            printf("Length in meters: %.2lf m\n", convertLength(value));

            break;

        case 2:

            printf("Enter weight in pounds: ");

            scanf("%lf", &value);

            printf("Weight in kilograms: %.2lf kg\n", convertWeight(value));

            break;

        case 3:

            printf("Enter volume in fluid ounces: ");

            scanf("%lf", &value);

            printf("Volume in milliliters: %.2lf ml\n", convertVolume(value));

            break;

        case 4:

            printf("Enter temperature in Fahrenheit: ");

            scanf("%lf", &value);

            printf("Temperature in Celsius: %.2lf °C\n", convertTemperature(value));

            break;

        case 5:

            printf("Exiting the program. Goodbye!\n");

            break;

        default:

            printf("Invalid choice. Please enter a number between 1 and 5.\n");

    }

 

    return 0;

}