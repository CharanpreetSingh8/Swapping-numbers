#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter a number a: \n");
    scanf("%d", &a);
    // To give an input of a and b

    printf("Enter a number b: \n");
    scanf("%d", &b);
    // suppose a=2 and b=3
    
    printf("Before swap a=%d, b=%d\n",a,b);
    
    a=a+b;   // a=2+3=5 (a=5)
    b=a-b;  // b=5-3=2 (b=2)
    a=a-b; // a=5-2=3 (a=3)
    
    // So swapping is done.

    printf("After swap a=%d, b=%d",a,b);

    return 0;
}
