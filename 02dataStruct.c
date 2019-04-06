#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	//%lu 为 32 位无符号整数
	printf("init size=%lu \n", sizeof(int));

	printf("float size= %d \n", sizeof(float));
	//%E 为以指数形式输出单、双精度实数
	printf("min float = %E \n", FLT_MIN);
	printf("max float = %E \n", FLT_MAX);
	printf("float 精度=%d \n", FLT_DIG);
	return 0;
}