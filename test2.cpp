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
				//1000��������!
				cout << "����ĵڣ�"<<i<<"Сʱ"<<"��"<<j<<"����"<<"��"<<k<<"�룡" << endl;
				Sleep(1000);
#else
				//1000000΢��(�൱��1��)���!
				cout << "����ĵڣ�"<<i<<"Сʱ"<<"��"<<j<<"����"<<"��"<<k<<"�룡" << endl;
				usleep(1000000);
#endif
			}
		}
	}
	system("pause");
	return 0;
}
