//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf���ش�ӡ����Ļ�ϵ�����һ��ֵ��43����2,2����1��
//	return 0;
//}


//�����ݹ�

//#include<stdio.h>
//int main()
//{
//	void print(unsigned int);//unsigned���������޷�����
//	unsigned int num = 0;
//	scanf("%u", &num);//%u �޷�������
//	print(num);
//	return 0;
//}
//void print(unsigned int u)//�ݹ�
//{
//	if (u > 9)	//�жϸ�λ������10
//	{
//		print(u/10);//ȥ��β��
//	}
//	printf("%d ", u % 10);//ȡСλ
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

//�ݹ�//a�Ľ׳�

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

//���n���Ʋ���������

//#include<stdio.h>			//Ч��̫��
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