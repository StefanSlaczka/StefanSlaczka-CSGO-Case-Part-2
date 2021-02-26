#include <iostream>
#include <cstdlib>

using namespace std;

void case_odds()
{
	srand(time(NULL));

	int case_num = rand() % 3910;

	cout << "Case num is " << case_num << "\n\n";

	if (case_num == 1)
		cout << "You got a ST Knife\n";
	else if (case_num <= 4)
		cout << "You got a ST Convert\n";
	else if (case_num <= 13)
		cout << "You got a Knife\n";
	else if (case_num <= 25)
		cout << "You got a ST Classified\n";
	else if (case_num <= 47)
		cout << "You got a Convert\n";
	else if (case_num <= 110)
		cout << "You got a ST Restricted\n";
	else if (case_num <= 223)
		cout << "You got a Classified\n";
	else if (case_num <= 536)
		cout << "You got a ST Mil-spec\n";
	else if (case_num <= 1098)
		cout << "You got a Restricted\n";
	else if (case_num <= 3910)
		cout << "You got a Mil-spec\n";
	else
		cout << "ERROR";
}

int main()
{
	case_odds();
}