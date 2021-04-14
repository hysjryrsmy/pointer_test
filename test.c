#define _CRT_SECURE_NO_WARING
#include <stdio.h>

/*
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;  //9替换成了12
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	//输出结果：6,12
	return 0;
}
*/


//二级指针也是指针，是用来保存一级指针的地址
//整形指针+1，向后偏移一个整形
//指针-指针得到的是指针和指针之间的元素个数
// 指针可以比较大小
// 整形指针解引用操作访问4个字节



//字符串逆序：写一个函数，可以逆序一个字符串的内容
/*
#include <string.h>	
#include <assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str); //字符串长度
	char* left = str;
	char* right = str + len - 1;
	
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	//scanf_s("%s", arr);  //abcdef ---> fedcba
	gets(arr); //读取一行
	//逆序函数
	reverse(arr);
	printf("%s\n", arr); //
	return 0;
}
*/



//计算求和：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
/*
int main()
{
	int a = 0;
	int n = 0;
	scanf_s("%d%d", &a, &n);//2 5
	int sum = 0;
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/



//打印水仙花数：求出0~100000之间的所有“水仙花数”并输出
//“水仙花数”是指一个n位数，其各位数字的n次方之和正好等于该数本身，如：153=1^3+5^3+3^3
/*
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{

		//判断i是否为水仙花数（自幂数）
		// 1. 计算i的位数 - n位数
		int n = 1;
		//123/10  n++
		//12/10   n++
		//1/10=0
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		// 2. 计算i的每一位的n次方之和  sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		// 3. 比较i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/



//打印菱形
//       *
//	    ***
//     *****
//    *******
//   *********
//  ***********
// *************
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *
// 
 
int main()
{
	int line = 0;
	scanf_s("%d", &line);//7
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		
		//打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
