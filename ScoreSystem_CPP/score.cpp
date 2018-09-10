/*************************************************
** 源文件   : score.cpp
** 功能说明 : Function Definations
** 创建时间 : 2018-9-3
/**************************************************/
/*----------------头文件引入--------------*/

#include "score.h"
#include <iostream>
#include <istream>
#include <cstdlib>
using namespace std;

/*----------------类中函数定义-------------*/
void SS::readData()
{
	cout << "请输入当前学生信息：学号, 姓名, 平时成绩, 期末成绩" << endl;

	cout << "学号:";
	cin >> number;
	
	cout << "姓名:";
	cin>> name ;

	cout << "平时成绩:";
	cin>> dailyScore ;

	cout << "期末成绩:";
	cin>> finalScore;

	cout<<endl<<"------成绩信息采集完毕!--------"<< endl;

}

void SS::calcuScore()
{
	this->generalScore = 0.3*dailyScore + 0.7*finalScore;
}

void SS::printOut()
{

	//cout << "    输出学生对象的基本信息 " << endl;
	cout << "---------------------------------------" << endl;

	cout << "* 学号: " << number << " 姓名:" << name << " 平时成绩:" << dailyScore << " 期末成绩:" << finalScore << " 总评成绩:" << generalScore << endl;
	cout << "---------------------------------------" << endl<<endl;

}
