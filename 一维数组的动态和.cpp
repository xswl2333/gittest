# include <iostream>
using namespace std;
//���һ����������
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
		cout << "�ܳ�Ϊ" << wo.t() << endl;
	return 0;
}
