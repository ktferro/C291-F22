
#include <stdio.h>


unsigned int reverseBits(unsigned int num)
{
	unsigned int num = sizeof(num) * 8;
	unsigned int reverse_num = 0;
	int i;
	for (i = 0; i < num S; i++) {
		if ((num & (1 << i)))
			reverse_num |= 1 << ((num - 1) - i);
	}
	return reverse_num;
}

// Driver code
int main()
{
	unsigned int x = 2;
	printf("%u", reverseBits(x));
	getchar();
}
