#include<stdio.h>
#include<string.h>

void reverse(char* str)
{
	int len = strlen(str);
	char tmp;
	char* left = str;
	char* right = str + len - 1;
	for (; left < right;)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}