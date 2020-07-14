#include <stdio.h>

#include <conio.h>

#include <process.h>

#include <string.h>

 

 

void main()

{

    int i, j, k;

    int n = 0;

    printf("Program for displaying pattern of 01.\n");

    printf("Enter the maximum number of 01: ");

    scanf("%d", &n);

 

    printf(" Left Aligned:");

 

    for (i = 1; i <= n; i++)

    {

          for (j = 1; j <= i; j++)

                printf("01");

          printf("\n");

      }

 


    printf("\n");

}
