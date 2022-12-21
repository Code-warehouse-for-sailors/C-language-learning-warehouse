#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>








//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}







//
//int main()
//{
//	int num = 10;
//	int arr[10];
//	//变量是有类型的
//	//数组也是有类型的
//
//	printf("%d\n", sizeof(num));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [5]));
//}










//int main()
//{
//	int a = 10;
//	int b = a << 1;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//
//	return 0;
//}








//
//
//int main()
//{
//	int a = -1;
//	
//	int b = a >> 1;
//	return 0;
//}
//












//
//
//int main()
//{
//	int a = 3;
//	
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);
//	
//	return 0; 
//}












//
//
//
//
//int main()
//{
//	return 0;
//}


//
//
//
//int Number0f1(unsigned int n)
//{
	//int count = 0;
	//while (n)
	//{
	//	if (n % 2 == 1)
	//		count++;
	//	n = n / 2;
	//}
	//return count;

	//int i = 0;
	//int count = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (((n >> i) & 1 )== 1) 
	//	{
	//		count++;
	//	}
	//}
	//return count;

//
//
//	int count = 0;
//	while (n)
//	{
//		if(n & (n - 1)==0)
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Number0f1(n);
//	printf("%d\n", ret);
//
//	return 0;
//}






//void Print(int n)
//{
//	int i = 0;
//	printf("奇数位:>");
//	for (i = 30; i >=0 ; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//
//	
//	printf("偶数位:>");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}











//
//
//int count_diff_one(int m,int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_diff_one(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_one(m, n);
//	printf("%d\n", ret);
//	return 0;
//}



















//Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//
//
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fib(n);
//	int ret = Fib(n);
//	printf("%d ", ret);
//
//	return 0;
//}






//
//int get_days_of_month(int y, int m)
//{
//	int day = 0;
//	switch (m)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//		break;
//	case 2:
//	{
//		day = 28;
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		
//			day++;
//		
//	}
//		
//		break;
//	}
//	return day;
//}
//
//	
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int ret = get_days_of_month(y, m);
//		printf("%d\n", ret);
//	}
//	
//	return 0;
//}

















//
//int get_days_of_month(int y, int m)
//{
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[m];
//	if ((m == 2) && (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)))
//	{
//		day++;
//	}
//	return day;
//}
//
//	
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int ret = get_days_of_month(y, m);
//		printf("%d\n", ret);
//	}
//	
//	return 0;
//}

















//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i= 0;i<n;i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &tmp);
//			if (tmp > 0)
//				sum += tmp;
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//}

















//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i= 0;i<n;i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//}



















//有疑问的代码
//
////打印六进制数字
//int main()
//{
//	int arr[20] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//
//	}
//	//这里为什么是--i而不是i ?
//	for (--i;i>=0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//存有疑惑，没有明白该递归的实现逻辑
//递归实现

//void Print(int n)
//{
//	if (n > 5)
//	{
//		Print(n / 6);
//	}
//	printf("%d ", n % 6);
//}
//
//
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n); 
//	return 0;
//}






















//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int arr[n][m];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

















//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输入删除的数字
//	int del = 0;
//	scanf("%d", &del);
//	
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//			arr[i] = 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//
//	return 0;
//}















//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输入删除的数字
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//
//
//
//}










//
////
////
//#include<string.h>
//
//
//
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
















//
////
//#include<string.h>
//
//
//
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	//str-start的含义是什么？
//
//	return str-start;
//}
//
//
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//








//
//
//
//int main()
//{
//
//}




















//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,3,4,5 };
//	int c[] = { 3,4,5,6 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
























//
//
//
//struct Stu
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//}s4,s5;//s4,s5也是结构体变量的成员
//
//
//
//
//int main()
//{
//	/*struct Stu s1, s2, s3;*/
//	struct Stu s1 = { "zhangsan",20,"nan",95.5f };
//	struct Stu s2 = { "旺财",21,"保密",59.5f };
//
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex,s2.score);
//	return 0;
//}









//struct S
//{
//	int a;
//	char c;
//};
//
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//int main()
//{
//	struct P p = { 5.5,{100,'b'},3.14f };
//	printf("%f %d %c %f\n",p.d, p.s.a, p.s.c,p.f);
//	return 0;
//}
















//struct S
//{
//	int a;
//	char c;
//};
//
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//
//void Print1(struct P sp)
//{
//	printf("%lf %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//
//
//void Print2(struct P* p1)
//{
//	printf("%lf %d %c %f\n", (*p1).d, (*p1).s.a, (*p1).s.c, (*p1).f);
//	printf("%lf %d %c %f\n", p1->d, p1->s.a, p1->s.c, p1->f);
//}
//
//int main()
//{
//	struct P p = { 5.5,{100,'b'},3.14f };
//	//printf("%lf %d %c %f\n",p.d, p.s.a, p.s.c,p.f);
//	Print1(p);//传值调用
//	
//	Print2(&p);//传址调用
//	return 0;
//}








//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}







//void reverse(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left<right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		right--;
//		left++;
//
//	}
//}
//
//int main()
//{
//	char arr[10000] = {0};
//
//	gets(arr);
//	//scanf("%s", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//
//	return 0;
//}





























//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//
//	gets(arr);
//	//scanf("%s", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//
//	return 0;
//}




































//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}













//
//
//#include<math.h>
//
//
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//		//判断i是否为水仙花数
//		int n = 1;
//		int tmp = i;
//
//		while (tmp>9)
//		{
//			tmp /= 10;
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}





















//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}










//
//
//#include<stdio.h>
//#include<string.h>
//
//
//
//void my_strcpy(char*dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//





















//
//
//
//
//
//int main()
//{
//	//int num = 10;
//	///*int* p = &num; 
//	//*p = 20;*/
//	//printf("%d\n", num);
//
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}












//
//#include<assert.h>
//
//
//unsigned int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}








////
//////#include<stdio.h>
//////
//////int main()
//////{
//////	int i = 1;
//////	int n = (++i) + (++i) + (++i);
//////	printf("%d\n", n);
//////}







//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//
//		}
//	}
//
//	return 0;
//}













//
//#include<stdio.h>
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%s", arr);
//    char* p = arr;
//    int i = 0;
//    while (*p != '.')
//    {
//        i++;
//    }
//    char left = *p;
//    char right = *(p + i);
//    char tmp = 0;
//    while (left != right)
//    {
//        tmp = left;
//        left = right;
//        right = tmp;
//        left++;
//        right--;
//    }
//    int a = 0;
//    p = arr
//        for (a = 0; a <= i; a++)
//        {
//            printf("%c", *(p + i));
//        }
//
//}





//#include<stdio.h>
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%s", arr);
//    char* p = arr;
//    int i = 0;
//    while (*(p + i) != '.')
//    {
//        i++;
//    }
//    int b = 0;
//    char tmp = 0;
//
//    while (arr[b] != arr[i])
//    {
//        tmp = arr[b];
//        arr[b] = arr[i];
//        arr[i] = tmp;
//        b++;
//        i--;
//    }
//
//    int a = 0;
//    p = arr
//        for (a = 0; a < i; a++)
//        {
//            printf("%c", arr[a]);
//        }
//
//}











//
//#include <stdio.h>

//int main() {
//    int a = 0;
//    int b = 0;
//    //输入
//    scanf("%d %d", &a, &b);
//    //求最小公倍数
//    //2
//    /*
//    int m = (a>b?a:b);
//    while(m%a!=0 || m%b!=0)
//    {
//    m++;
//    }
//    printf("%d\n", m);
//    */
//    //2
//    /*
//    int i = 1;
//    while(a*i % b != 0)
//    {
//    i++;
//    }
//    printf("%d\n", a*i);
//    */
//
//    //3
//    //a和b的最大公约数是k
//    //最小公倍数 = a*b/k;
//
//    return 0;
//}





//#include<stdio.h>
//
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//
//
//
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}













//
//#include<stdio.h>
//
//#include<assert.h>
//
//
//char* my_strcpy(char* n, const char* m)
//{
//	
//	int i = 0;
//	assert(n);
//	assert(m);
//
//	char* strm = m;
//	while (*m)
//	{
//		*n++ = *m++;
//	}
//		
//	return strm;
//}
//
//int main()
//{
//	char arr1[40] = {0};
//	char arr2[40] = {0};
//
//	scanf("%s\n", arr2);
//	char *p1 = arr1;
//	char *p2 = arr2;
//
//	char* ret = my_strcpy(arr1,arr2);
//	
//	printf("%s", ret);
//
//}






















