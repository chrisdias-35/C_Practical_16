#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    // input
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // calculation
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // grade calculation
    if (percentage >= 75)
        grade = 'A';
    else if (percentage >= 60)
        grade = 'B';
    else if (percentage >= 40)
        grade = 'C';
    else
        grade = 'F';

    // output
    printf("\n------ STUDENT REPORT ------\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    printf("Total Marks  : %d\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if (percentage >= 40)
        printf("Result       : PASS\n");
    else
        printf("Result       : FAIL\n");

    return 0;
}