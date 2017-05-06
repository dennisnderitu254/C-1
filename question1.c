//  Write a program the computes squares and cubes of the first 20 integers.
// The program   should produce a printout in the following form.

#include <stdio.h>
#include <math.h>

int main()
{
	int num=1,sqr,cub;

	while(num<=20)
	{
		sqr = num*num;
		cub = num*num*num;
		printf("\n Number=%d and its square=%d and its cube=%d",num,sqr,cub);
		num +=1;
	}
	return 0;
}


// using a for loop

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//	int square,cube;
//	printf("N \t square \t cube \n");
//	for(int i = 1;1 <= 20;i++)
//	{
//		square = pow(i,2);
//		cube = pow(i,3)
//		printf("%d\t%d\t%d\n", i,square,cube);
//	}
//	return 0;
// }




// using a while loop

// int main()
// {
//	int square,cube,N=1;
//	printt("N \tsquare \t cube \n");
//	while(N<=20)
//	{
//		square = pow(N,2);
//		square = pow(N,3);
//		print
//	}
//	return 0;
// } 