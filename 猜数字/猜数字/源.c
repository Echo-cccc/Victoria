#include <stdlib.h>
#include <time.h>


// 通过这个函数来和用户进行交互. 

int menu()
{
	printf("===============\n");
	printf(" 1. 开始游戏\n");
	printf(" 0. 退出游戏\n");
	printf("===============\n");
	printf(" 请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main()
{


	// 这种函数省略返回值类型的写法, 在一些上古时代的书中出现过. 
	// 这种情况表示函数的返回值类型就是 int . 
	// 但是这种写法其实是很老很老的 C 编译器支持的. 现在不推荐这么写. 

     void game()
	{
		// 1. 程序自动生成一个 1-100 的随机整数. 
		int toGuess = rand() % 100 + 1;
		while (1) {
			// 2. 从控制台读取用户的输入. 
			printf("请输入要猜的数字: ");

			int input = 0;
			scanf("%d", &input);
			// 3 比较用户输入的数字和系统生成的数字之间的关系, 并给用户提示. 
			if (input < toGuess) {
				printf("低了!\n");
			}
			else if (input > toGuess) {
				printf("高了!\n");
			}
			else {
				printf("猜对了!\n");
				break;
			}
		}
	}
	return 0;
	system("pause");
}


	// 猜数字游戏
	// 程序自动生成一个随机的整数 (1-100)
	// 用户来输入一个整数, 系统会根据用户输入的情况
	// 来提示用户, 是猜高了还是低了, 还是猜对了. 
	// 程序一启动, 我们就设置随机种子

	// 使用当前时间作为随机种子. 
	//srand(time(0));
	//while (1) {
	//	// 写一个打印菜单的函数, 和用户进行交互
	//	int choice = menu();
	//	if (choice == 1) {
	//		game();
	//	} else if (choice == 0) {
	//		printf("程序退出, 再见!\n");
	//		break;
	//	} else {
	//		// 写程序一定要考虑到用户的非法输入的情况. 
	//		printf("您的输入有误, 请重新输入!\n");
	//	}
	//}