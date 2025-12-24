#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;
	
	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}
	void AddPoint(const Point& pos)
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
	void ShowPosition() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

int main()
{
	Point pos1 = { 1, 1 };
	pos1.MovePos(10, 10);
	pos1.ShowPosition();

	Point pos2 = { 2, 2 };
	pos1.AddPoint(pos2);
	pos1.ShowPosition();

	return 0;
}