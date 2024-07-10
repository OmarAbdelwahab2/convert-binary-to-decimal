#include<stdio.h>
void main(void)
{
	while (1)
	{
		int x=0, y=0, result = 1, count=0, rem=0, i=0, sum=0, flag=0;
		printf("enter the binary number");
		scanf_s("%d", &x);
		y = x;
		while (y != 0)
		{
			rem = y % 10;
			if (rem == 1)
			{
				for (i = 0; i < count; i++)
				{
					result *= 2;

				}
				count++;
				sum = sum + result;
				result = 1;
			}
			else if (rem == 0)
			{
				count++;
			}
			else
			{
				printf("binary numbers can be represented only as 1 and 0 not %d\n", rem);
				flag++;
				break;
			}
			y /= 10;
		}
		if (flag == 0)
		{
			printf("the binary number %d is represented as %d in decimal\n", x, sum);
		}
	}
}