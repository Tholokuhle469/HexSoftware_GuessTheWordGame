#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

void game() {
	string guess;
	string wordslist;
	int attempt = 0;

	vector<string>list = { "root", "data", "node", "detect", "patch", "code", "host", "bugs" };
	srand(static_cast<unsigned int>(time(0)));
	 wordslist = list[rand() % list.size()];
	

	cout << " GUESS THE RANDOMLY PICKED WORD FROM THE LIST, You Have 3 attempts!! " << endl;
	cout << endl;
	cout << "code,  patch,  host,  bugs" << endl;
	cout << "root,  data,  node,  detect" << endl;
	cout << endl;

	while (true) {
		cout << "Enter your guess: " << endl;
		cin >> guess;
		attempt++;

		if (guess == wordslist) {
			cout << "Excellent guess, you found " << wordslist << " in your " << attempt << " attempt" << endl;
			break;
		}
		else if (attempt == 3) {
			cout << "OOOPS!, No attempts remaining, GAME OVER!!" << endl;
			break;
		}
		else {
			cout << "incorrect guess, try again" << endl;
			cout << endl;
			
		}

	}

}

int main() {
	game();
	return 0;

}