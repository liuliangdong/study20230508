#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("workday\n");
		break;
	case 6:
	case 7:
		printf("holiday\n");
		break;
	default:
		printf("error\n");
		break;
	}
	return 0;
}