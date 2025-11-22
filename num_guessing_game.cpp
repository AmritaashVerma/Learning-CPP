#include <iostream>
#include <random>
using namespace std;

int main () {
    random_device rd; 
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10);
    int rand_num = dist(gen);
    cout << "Welcome to the number guessing game";
    cout << rand_num;
    while (true){
    cout << "\nEnter your guess: ";
    int input;
    cin >> input;
    if (input == rand_num) {
        cout << "Congrats you guessed the correct number!";
        return 0;
    }
    else {
        int diff = rand_num - input;
        cout << "You are " <<  diff << " away from the correct answer.";
        }
}
return 0;
}