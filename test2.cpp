#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	string line;
	int row =0;
	int count = 0;
	cout<<"请输入任意行";
	while(1){
		if((getline(cin,line))==0){
			break;
		}
		row++;
		count = count + line.length();
	}
	cout<<"行数:"<<row<<endl;
	cout<<"字符数:"<<count<<endl;
	system("pause");
	return 0;
}