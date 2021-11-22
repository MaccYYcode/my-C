#include<stdio.h>
int main()
{
	int temp;
	int num[10] = { 1,3,5,7,9,2,4,6,8,10 };
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (num[j] < num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+ 1] = temp;
			} 
		}		
	}
	for (int k = 0; k < 10; k++)
	{

		printf("%d\n", num[k]);
	}
}