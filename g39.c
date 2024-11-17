/*Imagine you're creating an age and gender categorization system where participants need to provide their age and gender during registration. 



The system should then determine whether they are a male or female adult (age 18 or older) or a male or female minor (under 18 years old). 



Write a program that takes age and gender as input and categorizes participants accordingly.

Input format :
The first line of input consists of an integer representing the age.

The second line of input consists of a character representing the gender.



Note: m/M for male; f/F for female

Output format :
If the age is 18 or above:

If the gender is M/m, the output prints "You are a male adult."
If the gender is F/f', the output prints "You are a female adult."


If the age is below 18:

If the gender is M/m, the output prints "You are a male minor."
If the gender is F/f, the output prints "You are a female minor."


For any other gender input, the output prints "Invalid gender input."*/

#include <stdio.h>

int main() {
    int age;
    char gender;
    scanf("%d", &age);
    scanf(" %c", &gender);
    if (age >= 18) {
        if (gender == 'M' || gender == 'm') {         //||means or
            printf("You are a male adult.");
        } else if (gender == 'F' || gender == 'f') {
            printf("You are a female adult.");
        } else {
            printf("Invalid gender input.");
        }
        /*For valid genders ('M/m' or 'F/f'):
Print whether the participant is a "male adult/minor" or "female adult/minor".*/
    } else {
        if (gender == 'M' || gender == 'm') {
            printf("You are a male minor.");
        } else if (gender == 'F' || gender == 'f') {
            printf("You are a female minor");
        } else {
            printf("Invalid gender input");
        }
    }
    return 0;
}

