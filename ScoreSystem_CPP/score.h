/*************************************************
** 头文件   : score.h
** 功能说明 : 学生成绩类
** 创建时间 : 2018-9-3
/**************************************************/

#pragma once
/*----------------------------------*
    Class Defination-类定义
*-----------------------------------*/
class SS
{
private:

	char number[10];   //学号
	char name[10];     //姓名
	float dailyScore;  //平时成绩
	float finalScore;  //期末成绩
	float generalScore;//总评成绩
	int  place;        //名次

public:              

	void readData();   //输入学生的信息
	void calcuScore(); //计算学生总评成绩
	void printOut();     //输出学生信息

};

