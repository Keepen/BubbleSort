#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void swap(int *a, int *b);
void Bubblesort(int *a,int size)
{
	int i, j;
	//����size-1�˱Ƚ�
	for (i = 0; i < size - 1; ++i)
	{
		//ÿһ���н���size-1-i�αȽ�
		for (j = 0; j < size - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);//��ַ
			}
		}
	}
}

//��������
void swap(int *a, int *b)
{
	int temp= *a;
	//temp ;
	*a = *b;
	*b = temp;
}

int main()
{
	int a[SIZE];//= {1,2,3,5,4,7,6,9,8,0};
	for (int i = 0; i < SIZE-1; ++i)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	//for (int i = 0; i <SIZE; ++i)
	//{
	//	printf("%3d", a[i]);
	//}
	//printf("\n\n");
	Bubblesort(a, SIZE);
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\n", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}