#include<stdio.h>

main() 
{
    int i,n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        sum += i;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
    
}
