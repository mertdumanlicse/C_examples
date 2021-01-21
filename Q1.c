#include <stdio.h>
#include <stdlib.h>

int sumIteratively(int,int);
int sumRecursively(int,int);

int main()
{
	int number1,number2,result1,result2;
	
	printf("Please enter a nongenative number : \n");
    scanf("%d", &number1);
    while(number1<1)
{
	scanf("%d", &number1);
}
    
	printf("Please enter a nongenative number : \n");
    scanf("%d", &number2);
    while(number2<1)
{
	scanf("%d", &number2);
}
    
    result1 = sumIteratively(number1,number2);
    printf("The sums of the digits of(%d,%d) is: %d (iterative) \n",number1,number2,result1);
    
    result2 = sumRecursively(number1,number2);
    printf("The sums of the digits of(%d,%d) is: %d (recursive) \n",number1,number2,result2);
    
	return 0;
}
int sumIteratively(int m,int n)
{
    int sum=0;
    while(n!=0)
	{	
    sum = m*(m+1)/2;
 	m = sum;
	n--;
	}
	return sum;
}
int sumRecursively(int m,int n)
{
	int sum = m;
	
	if(m==1)
	return 1;
			
    else if(n==1)
    return m*(m+1)/2;
    
    else
{
	sum = m*(m+1)/2;
 	m = sum;
	n--;
}
    return sumRecursively(m,n);
}
