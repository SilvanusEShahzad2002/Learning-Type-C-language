#include <stdio.h>
int main ()
{
	int a = 10;
	int b = 5;
	
    printf("a > 5 && b < 10 = %d\n", a > 5 && b < 10);
    
    printf("a > 5 && b > 10 = %d \n", a > 5 && b > 10);
	
	printf("a > 5 || b < 10 = %d \n", a < 5 || b < 10);
	
	printf("a > 5 || b < 10 = %d \n", a > 5 || b > 10);
	
	printf("!(a == b)= %d \n", !(a == b));
	
	printf("!(a != b)= %d \n", !(a !=b));
	
	
return 0;

}
