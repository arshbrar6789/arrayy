#include<stdio.h>
int main()
{
	int arry[] = { 1,2,3,4,5,6,7,8,9,-10,11,12,-13,14,15,-16,17,18,19,20 }, even = 0, odd = 0, posit=0, neg=0, i;

	for (i = 0; i <= 19; i++)
	{
		if (arry[i] > 0)
			posit++;
		else
			neg++;
	}
	for (i = 0; i <= 19; i++)
	{
		if (arry[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("Number of positive:%d\nNumber of negative:%d\nNumber of Odd:%d\n number of even:%d", posit, neg, odd, even);
	return(0);
}
