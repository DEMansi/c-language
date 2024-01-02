#include<stdio.h>
 int multiplyNumbers(int n);

int main() 
{
 int n;
 Printf("Enter a positive integer: ");
 Scanf("%d",&n);
 Printf("Factorial of %d = %ld", n, 
 multiplyNumbers(n));

}
int multiplyNumbers(int n) {
 If (n>=1)
return n*multiplyNumbers(n-1);
 Else
 Return 1;
}

