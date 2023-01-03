#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\033[31m欢迎使用自定义字体颜色C++版\033[0m" << endl;
    string n, str;
    cout << "\033[34m请输入您想要的颜色：\033[0m";
    getline(cin, n);
    if (n == "红" || n == "红色" || n == "Red" || n == "red" || n == "RED") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[31m" << str << "\033[0m" << endl;
    } else if (n == "绿" || n == "绿色" || n == "Green" || n == "green" || n == "GREEN") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[32m" << str << "\033[0m" << endl;
    } else if (n == "黄" || n == "黄色" || n == "Yellow" || n == "yellow" || n == "YELLOW") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[33m" << str << "\033[0m" << endl;
    } else if (n == "蓝" || n == "蓝色" || n == "Blue" || n == "blue" || n == "BLUE") {
    	cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[34m" << str << "\033[0m" << endl;
    } else if (n == "紫" || n == "紫色" || n == "Purple" || n == "purple" || n == "PURPLE") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[1m" << str << "\033[0m" << endl;
	} else if (n == "深绿" || n == "深绿色" || n == "Dark Green" || n == "Dark green" || n == "dark green" || n == "darkgreen" || n == "DARK GREEN" || n == "") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[36m" << str << "\033[0m" << endl;
	} else if (n == "白" || n == "白色" || n == "White" || n == "white") {
		cout << "\033[34m请输入您想要的文字：\033[0m";
		getline(cin, str);
    	cout << "\033[37m" << str << "\033[0m" << endl;
	} else cout << "\033[34m对不起，其他的颜色还未支持，敬请期待～\033[0m" << endl;
    return 0;
}
