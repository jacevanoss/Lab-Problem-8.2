/* Date: 10/24/2024
* Name: Jace Van Oss
* File: Laboratory_8_P8-2.CPP
*
* Description:  program that counts the number of words in a string from the command line
*/

#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main() {

	string test = "Hello world";
	cout << countWords(test);
	

	return 0;
}

int countWords(string str) {
	int count = 1;
	bool word = true;
	for (int i = 0; i < str.length(); i++) {
		int num1 = i;
		int num2 = 1;
		str.substr(num1, num2);
		if (str.substr(num1, num2) != " ") {
			if (!word) {
				word = true;
				count++;
			}
		}
		else {
			word = false;
		}
		num1++;
		num2++;
	}
	return count;
}