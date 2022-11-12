//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回打印在屏幕上的数的一个值，43返回2,2返回1；
//	return 0;
//}


//函数递归

//#include<stdio.h>
//int main()
//{
//	void print(unsigned int);//unsigned函数——无符号型
//	unsigned int num = 0;
//	scanf("%u", &num);//%u 无符号整形
//	print(num);
//	return 0;
//}
//void print(unsigned int u)//递归
//{
//	if (u > 9)	//判断个位数大于10
//	{
//		print(u/10);//去除尾数
//	}
//	printf("%d ", u % 10);//取小位
//
//}

//#include<stdio.h>
//int my_strlen(char* a)
//{
//	if (*a != 0)return 1 + my_strlen(a + 1);
//	return 0;
//}
//int main()
//{
//	char arr[200] = { "0" };;
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//	return 0;
//
// }

//递归//a的阶乘

//#include<stdio.h>
//int rey(int i)
//{
//	if (i <= 1)return 1;
//	else return i * rey(i - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int f = rey(a);
//	printf("%d", f);
//	return 0;
//
// }

//求第n个菲波那切数列

//#include<stdio.h>			//效率太低
//int sad(int i) {
//	if (i <= 2)	return 1;
//	else return sad(i - 1) + sad(i - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mad = sad(n);
//	printf("%d", mad);
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//	float b;
//	scanf("%d %f", &a,&b);
//	printf("%d\t", abs(a));
//
//	printf("%.0f\t", floor(b));
//	printf("%.0f\t", ceil(b));
//	return 0;
//}