#include <iostream>
using namespace std;

int number = 73;

bool guess(int num){
	int guess = 0; 
	cout << "Guess a number between 1 and 10000" << endl;
	cin >> guess;
	
	if(guess != num){
		cout << "You guessed wrong..." << endl;
		return true;
	} else {
		return false;
	}
}			

int main(){
	bool failed = true;
	int count = 0;
	int number = 73;

	
	while(failed){
		count++;
		failed = guess(number);
	}
	
	cout << "You guessed right!!" << endl;
	cout << "You guessed" << count << " times" << endl;
}