#include "ShatTools.h"
using namespace std;
int main()
{
	system("cls");
	cout << beginning << endl;
	while (true) {
		string m;
		cout << '>';
		getline(cin, m);
		if (m == "q")
			break;
		elif(m == "help")
			cout << help << endl;
		elif(m == "open") {
			string open;
			cout << "程序名：";
			cin >> open;
			system(open.c_str());
		}elif(m == "cls")
			system("shattools.exe");
		elif(m == "114514")
			cout << "好臭的数字哼哼哼啊啊啊啊" << endl;
		elif(m.empty())
			continue;
		else
			cout << "输入错误" << endl;
		
	}
	return 0;
}
