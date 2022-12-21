#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello world";
//	int ret = my_strlen(arr);
//
//
//	printf("%d\n", ret);
//}



//
//int* my_function(int* dest,int strn)
//{
//	int i = 0;
//	int halfarr = strn / 2;
//	while (i < strn)
//	{
//		if (*(dest + i) % 2 == 0)
//		{
//			*(dest + i + halfarr) = *(dest + i);
//		}
//		i++;
//	}
//	return dest;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int n = sizeof(arr) / sizeof(arr[1]);
//
//	int*ret= my_function(arr, n);
//
//	printf("%d\n", ret);
//	return 0;
//}
