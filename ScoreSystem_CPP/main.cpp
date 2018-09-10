/*************************************************
** 功能 : 学生成绩管理系统
** 作者 : Qingke Zhang/tsingke@sdnu.edu.cn
** 版本 : 2018-9-3
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include <iostream>
#include "score.h"

using namespace std;

/*----------------------------------*
        Main Function
*-----------------------------------*/

int main()
{

	SS stu1, stu2, stu3;

	stu1.readData();
	stu2.readData();
	stu3.readData();

	stu1.calcuScore();
	stu2.calcuScore();
	stu3.calcuScore();


	stu1.printOut();
	stu2.printOut();
	stu3.printOut();


	system("pause");
	return 0;
}