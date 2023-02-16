#include<stdio.h>
int main(void)
{
	char c;
	int num;
	float fl;
	long int long_num;
	long long int l_num;
	
	// sizeof each data type
	
	printf("Size of char: %zu byte(s)\n", sizeof(c));
	printf("Size of int: %zu byte(s)\n", sizeof(num));
	printf("Size of long int: %zu byte(s)\n", sizeof(long_num));
	printf("Size of long long int: %zu byte(s)\n", sizeof(l_num));	      printf("Size of a float : %zu byte(s)\n", sizeof(fl));

	return (0);
}
