#include <stdio.h>

int main()
{
    float m1;
    float m2;
    float m3;
    float total;
    float average;
    int isPass = 1;
    int isDistinction = 0;
    char grade;
    double highestmark;


    printf("Enter the marks for math: ");
    if (scanf("%f", &m1) != 1 || m1 < 0 || m1 > 100) {
        printf("Error: Invalid marks entered.\n");
        return 1;
    }
    printf("Enter the marks for science: ");
    if (scanf("%f", &m2) != 1 || m2 < 0 || m2 > 100) {
        printf("Error: Invalid marks entered.\n");
        return 1;
    }
    printf("Enter the marks for English: ");
    if (scanf("%f", &m3) != 1 || m3 < 0 || m3 > 100) {
        printf("Error: Invalid marks entered.\n");
        return 1;
    }

    total=m1+m2+m3;
    average=total/3.0;

    if (m1 < 40 || m2 < 40 || m3 < 40) {
        isPass = 0;
    }

    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    if (average>=85 && m1>=80 && m2>=80 && m3>=80){
        isDistinction=1;
    }

    highestmark=m1;
    if (m2>highestmark){
        highestmark=m2;
    }
    if (m3>highestmark){
        highestmark=m3;
    }

    printf("======================================\n");
    printf("-------------RESULT SHEET-------------\n");
    printf("======================================\n");
    printf("          Total: %.2f\n", total);
    printf("        Average: %.2f%%\n", average);
    printf("          Grade: %c\n", grade);
    printf("======================================\n");

    if (isPass){
        if (isDistinction){
            printf("~ Passed with Distinction.~\n");
        } else {
            printf("~ Passed ~\n");
        }
    }else {
        printf("~ Failed ~\n");
    }

    printf("Highest mark: %.2f\n",highestmark);
    printf("======================================\n");

    return 0;
}
