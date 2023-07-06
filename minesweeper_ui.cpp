//
//  minesweeper_ui.cpp
//
//
//  Created by Taylor Little on 7/4/23.
//

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;


bool check_guess(int guess) {
    int safe_spaces[13] = {1, 2, 3, 4, 5, 7, 8, 10, 11, 12, 13, 14, 15};
    for (int i = 0; i < 13; i++) {
        if (safe_spaces[i] == guess) {
            return true;
        }
    }
    return 0;
}

int main() {
    
    bool check;
    int guess;
    int score = 0;
    int spaces_left = 13;

    vector<int>::iterator itr;
    vector<int> checked_tiles = { 0 };


    
    do {
        cout << "Enter guess: " << endl;
        cin >> guess;
        
        check = check_guess(guess);
        
        if (check == true) {
            checked_tiles.push_back(guess);
            
            
            score = score + 200;
            spaces_left = spaces_left - 1;
            
            cout << "Score: " << score << endl;
            cout << "Safe spaces left: " << spaces_left << endl;
            
            
        }
    }

    while (check == true);


    cout << "You hit a pothole. Gameover!" << endl;
    cout << "Score: " << score << endl;
        
    for (itr = checked_tiles.begin(); itr != checked_tiles.end(); itr++) {
        cout << *itr git << endl;
        }


    return 0;
    }

    




                



