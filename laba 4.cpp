#include <stdio.h>
#include <string.h>
using namespace std;
int del(char a[], int sz)
{
	int i = 0, j, n = 20;
	while (i < n)
	{
		if (a[i] == ' ' && (a[i + 1] == ' ' || a[i - 1] == ' '))
		{
			for (j = i; j < n; j++)
				a[j] = a[j + 1];
			n--;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
int main()
{
	int i = 0, n = 0;
	char input[100];
	while ((input[n] = getchar()) != '\n')
	{
		n++;
	}
	input[n] = '\0';
	del(input, 100);
	printf("%s\n", input);
	printf("\n");
}
