//
//  Mee6.cpp
//  C++
//
//  Created by Alberto on 05/07/2017.
//  Copyright © 2017 Alberto. All rights reserved.
//

using namespace std;
#include <iostream>

float addNumbers (float x, float y) {
    return (x+y);
}

float subtractNumbers (float x, float y) {
    return (x-y);
}

float multiplyNumbers (float x, float y) {
    return (x*y);
}

float divideNumbers (float x, float y) {
    return (x/y);
}

string toLower(string action){
    for(int i = 0; i < action.size(); i++)
    {
        action[i] = tolower(action[i]);
    }
    return action;
}

float calculatorMeeseeks(string action, float x, float y){
    float z = 0;
    if (action == "add"){
        z = addNumbers(x, y);
    }
    if (action == "substract"){
        z = subtractNumbers(x, y);
    }
    if (action == "multiply"){
        z = multiplyNumbers(x, y);
    }
    if (action == "divide"){
        z = divideNumbers(x, y);
    }
    return z;
}

string validateAction(string action){
    if (action == "add" || action == "substract" || action == "multiply" || action == "divide"){
        return action;
    }
    else{
        string act = "";
        cout << "- You want to " << action << "? Thats not a valid action! please, choose a valid action.\n+ ";
        cin >> act;
        validateAction(toLower(act));
        return act;
    }
}

int main() {
    float z = 0, x = 0, y = 0;
    string action = "";
    cout << "- Im Mr. Meeseeks, look at me!" << endl;
    cout << "+ Mr. Meeseeks, help me with my homework." << endl;
    cout << "- Caaan dooo! What do you need to do? \n+ ";
    cin >> action;
    action = validateAction(toLower(action));
    cout << "- Yes siree! Wich will be the first number? \n+ ";
    cin >> x;
    cout << "- Uhhm... And the second one? \n+ ";
    cin >> y;
    z = calculatorMeeseeks(action, x, y);
    cout << "-That was easy! The result is " << z << endl;
    cout << "-All done!" << endl;
    cout << "*Pooooof!*" << endl;
    return 0;
}
