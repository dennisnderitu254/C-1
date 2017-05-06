//Using a loop, ask the user to enter positive integer numbers.
//The program will output the number of values entered, the minimum value, the maximum value and the average of all numbers.
// The code will exit once a negative integer is entered.

#include <stdio.h>
#include <math.h>

int main()
{
	int num,min,max,sum=0,average,N=1;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num>0)
	{
		min = num;
		max = num;
		while(num>0)
		{
			printf("Enter a number");
			scanf("%d",&num);
			if(num > 0)
			{
				if(num<min)
					min=num;
				if(num>max)
					max=num;
				sum +=num;
				N++;
			}
		}
		average = sum/N;
		printf("N=%d,min=%d,max=%d,Average=%d",N,min,max,average);

	}
	return 0;


}

