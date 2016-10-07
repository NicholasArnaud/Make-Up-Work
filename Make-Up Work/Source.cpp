#include <iostream>
#include "Cat.h"

float Stuff(float a, float b, float c);
void TakeArray(int*a, int size);
void Array(char back[]);
int Timez(int*t_array, int size);

int main()
{


	Stuff(10, 20, 30);
	float Stuff(float a, float b, float c);

	int num[20];
	TakeArray(num, 20);

	char array[] = "Hello";
	Array(array);


	//Cat mycats[25];


	int entNum[8] = { 5,4,4,5,8,8,4,2 };
	int t = Timez(entNum, 8);


	printf("Nicholas Arnaud \nNA1163 \n");
	system("pause");
	return 1;
}



float Stuff(float a, float b, float c)
{
	int sum = a + b + c;
	float sumofFloat = sum * 5;
	return sumofFloat;
}



void TakeArray(int*a, int size)
{
	int value = 0;
	for (int i = 0; i < size; i++)
	{
		a[i] = value += 2;
	}
}


void Array(char back[])
{
	int j = 0;
	for (; back[j] != 0; j++);
	int size = j;

	for (int i = 0; i < j / 2; i++)
	{
		char temp = back[i];
		back[i] = back[(size - 1) - i];
		back[(size - 1) - i] = temp;
	}
}

/*
void nameCats(int it, Cat*c, int size)
{
	if (it < size)
	{
		c[it++].NameMe((it % 2 ==0 ) ? 65 + it : 97 + it);
		nameCats(it, c, size);
	}
}
*/


int Timez(int*t_array, int size)
{
	int most;
	int mostTimez = 0;
	for (int i = 0; i < size; i++)
	{
		int timePlaced = 0;
		for (int j=0; j < size; j++)
		{
			if (t_array[i] == t_array[j])
			{
				timePlaced++;
				if (timePlaced > mostTimez)
				{
					most = t_array[j];
					mostTimez = timePlaced;
				}
			}
		}

	}

	return most;
}