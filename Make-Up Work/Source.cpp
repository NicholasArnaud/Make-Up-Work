#include <iostream>

float Stuff(float a, float b, float c);
void TakeArray(int*a, int size);
char Array(char back[]);

int main()
{

	
	Stuff(10, 20, 30);
	float Stuff(float a, float b, float c);

	int num[20];
	TakeArray(num, 20);

	char array[] = "Hello";
	Array(array);


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


char Array(char back[])
{
	
	for (int i = 4; i>0 ; i--)
	{
		char temp = back[0];
		back[0] = back[4];
		back[4] = temp;
	}

	return back[4];
}