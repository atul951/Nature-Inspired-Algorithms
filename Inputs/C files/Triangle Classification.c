#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Enter the sides of the triangle (between 1-100): ");
	scanf("%d %d %d",&a,&b,&c);
	if((a>0)&&(a<101)&&(b>0)&&(b<101)&&(c>0)&&(c<101))
	{
		if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {
			if((a==b)&&(b==c)) {
				puts("It is an Equilateral triangle.");
			} else
			{
				if((a==b)||(b==c)||(a==c)) {
		       	   puts("It is an Isosceles triangle.");
				} else {
				   puts("It is an Scalene triangle.");
				}
			}	
		} else {
					puts("Inalid triangle!");
		}
	}
	else {
		    printf("Inputs out of range.");
	}
	return 0;
}
