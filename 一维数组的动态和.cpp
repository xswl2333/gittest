# include <iostream>
using namespace std;
//设计一个长方形类
class c
{
public:
	int h, w;
	int t()
	{
		return 2 * h*w;
	}
};

int main() {
	c wo;
	wo.h = 2;
	wo.w = 4;
		cout << "周长为" << wo.t() << endl;
	return 0;
}
