#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
	char long[101] = " ";


	cout << "Input text\n";

	ofstream file("text.txt");
	cin.getline(long, 101);
	file << long;
	file.close();
	cout << endl;
	ifstream file2("text.txt");
	file2.getline(long, 100);

	for (int i = 0; i < 101; i++) {
		if ((long[i] == ' ') && (long[i - 1] != ' '))
			cout << endl;
		else
            if ((long[i] != '\0') && (long[i] != ' '))
			cout << long[i];
	}

	cout << endl << endl;
	system("text.txt");
}
