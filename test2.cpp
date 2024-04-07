#include<iostream>
#include<string>
using namespace std;

#ifdef _WIN32
#include <windows.h>

#else
#include <unistd.h>
#endif


int main(void){
	for (int i = 0;i<24;i++)
	{
		for (int j = 0;j<60;j++)
		{
			for (int k = 0;k<60;k++)
			{
#ifdef _WIN32
				//1000毫秒后输出!
				cout << "想你的第："<<i<<"小时"<<"第"<<j<<"分钟"<<"第"<<k<<"秒！" << endl;
				Sleep(1000);
#else
				//1000000微妙(相当于1秒)输出!
				cout << "想你的第："<<i<<"小时"<<"第"<<j<<"分钟"<<"第"<<k<<"秒！" << endl;
				usleep(1000000);
#endif
			}
		}
	}
	system("pause");
	return 0;
}
