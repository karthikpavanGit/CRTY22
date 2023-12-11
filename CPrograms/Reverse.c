#include <stdio.h>
#include <stdlib.h>


int printReverse(int);

int main()
{
    int n;
    printf("\nThis program prints reverse of a given number");
    printf("\nEnter a number: ");
    scanf("%d",&n);


    if(n==0)
    {
        printf("%d",n);
        exit(0);
    }

    printReverse(n);

    return 0;
}

int  printReverse(int n)
{
    static int rev=0;
      if(n)
    {
        int rem = n % 10; 
        rev = rev*10 + rem;
	printReverse(n/10);

             }
    printf("%d\n ",rev);
}
