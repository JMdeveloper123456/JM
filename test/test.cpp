// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>


int main()
{

	/*int ** arr;
	arr = (int **)malloc(sizeof(int*) * 10);
	for(int i=0;i<10;i++)
	 arr[i] = (int *)malloc(sizeof(int) * 5);
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 5; j++)
			arr[i][j] = 12;*/
	int arr[10][5];
	printf("%d\n", (int)sizeof(arr));
	printf("%d\n", (int)sizeof(**arr));
	printf("%d\n", (int)sizeof(*arr));
	printf("%d\n", (int)sizeof(arr[0]));
	printf("%d\n", (int)sizeof(arr[0][0]));
	system("pause");
    return 0;
}

