#include<stdio.h>
#include<stdlib.h>
char* Rever_string(char* l)
{
	int o = 0;
	char* i;
	char temp;
	i = l;
	while (*l != 0)
	{
		l++;
		o++;
	}
	if (o > 1)
	{
		temp = i[0];
		i[0] = i[o - 1];
		i[o - 1] = '\0';
		Rever_string(i + 1);
		i[o - 1] = temp;
	}
	return i;
}
int main()
{
	printf("��J�A���r��:");
	char l[1000];
	gets(l);
	printf("½��ᬰ�G%s\n", Rever_string(l));
	system("pause");
	return 0;
}
