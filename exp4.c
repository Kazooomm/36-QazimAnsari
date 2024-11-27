/*
    Expt 4
    WAP to find all the prime numbers between two numbers using functions

    Name: Mohd Qazim Ansari
    UIN: 241P105
    Div: FE-D
*/

#include<stdio.h>
int prime();
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Prime numbers between %d and %d are:\n", num1, num2);
    for (int num = num1; num <= num2; num++) {
        if (prime(num)) {
            printf("%d ", num);
        }
    }

    return 0;
}
int prime(int num)
{
     if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;

}

/*OUTPUT-

Enter first number: 1
Enter second number: 30
Prime numbers between 1 and 30 are:
2 3 5 7 11 13 17 19 23 29

*/
