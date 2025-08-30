//猜数字
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("####################\n");
	printf("#######0.play#######\n");
	printf("#######1.exit#######\n");
	printf("####################\n");

}

void game()
{
	int i = 0;
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		printf("猜数字\n");
		scanf("%d", &i);
		if (i < ret)
		{
			printf("猜小了\n");
			
		}
		else if (i > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{   
	srand((unsigned int)time(NULL));//初始化随机数种子
	int input = 0;
	do
	{
		menu();
		printf("请输入\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("进入游戏\n");
			game();
			break;
		case 1:
			printf("退出\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}
