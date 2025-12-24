#include <iostream>
using namespace std;

class Calculator
{
private:
	int numOfAdd;
	int numOfMin;
	int numOfMul;
	int numOfdiv;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount();
};
// ★ (암기) Calculator::를 붙이는 이유 Calculator 클래스에 있는 Init()함수를 클래스 외부에서 정의한다는 뜻
void Calculator::Init()
{
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfdiv = 0;
}

double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}

double Calculator::Div(double num1, double num2)
{
	numOfdiv++;
	return num1 / num2;
}

void Calculator::ShowOpCount()
{
	cout << "덧셈 : " << numOfAdd << ' ';
	cout << "곱셈 : " << numOfMul << endl;
	cout << "뺄셈 : " << numOfMin << ' ';
	cout << "나눗셈 : " << numOfdiv << endl;
}

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 =" << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 * 1.2 = " << cal.Mul(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;

}