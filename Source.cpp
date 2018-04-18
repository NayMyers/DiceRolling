#include <iostream>
#include <vector>

using namespace std;

class FourSideDie
{
public:
	FourSideDie();
	vector<int> sides;
};

FourSideDie::FourSideDie()
{
	sides = { 1 , 2, 3, 4 };
}
class TenSideDie
{
public:
	TenSideDie();
	vector<int> sides;
};
TenSideDie::TenSideDie()
{
	sides = { 1, 2, 3, 4, 4, 6, 6, 7, 7, 8 };
}
class DiceInfo
{
public:
	vector<int> totals;
	int count = 0;
};
int main()
{
	FourSideDie four;
	TenSideDie ten;
	DiceInfo diceinfo;
	int total = 0;
	int count = 0;
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			total = four.sides[x] + ten.sides[y];
			cout << four.sides[x] << " - " << ten.sides[y] << " Total : " << total;
			cout << endl;
			diceinfo.totals[count] = total;
			count++;
		}
	}
	cout << "Total combinations : " << count;
	return 0;
}