//  contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
float myDiv(float num, float denum) {
    //myDiv takes 2 floats and divides them 
    return num / denum;//return answer to divison 
}

using namespace std;



int main()
{
    int num_dumb = 1; // a replacement numerator if the player is dumb

    float numm;//numerator
    float denumm;//denumerator

    string yes;//?
    cout << "Hello and good afternoon... " << endl;
    cout << "I dont think we have met before"
        "What can i call you? " << endl;
    cin >> yes;
    cout << "Wierd... "
        "guess what " << yes << " time for some fun?! " << endl;
    cout << yes << ",we will start slow... "
        "All you gotta do is try and stop me doing basic math!!! " << endl;
    cout << "So whatcha wanna do " << yes << "?" << endl;
    cout << "Type y for fun!!" << endl;
    char ha;
    cin >> ha;
    if (ha == 'y') {
        cout << "sweet.ok "<<yes<< ", have fun... " << endl;
            goto Fun;
    }
    else {
        cout << "you lose at simple instructions " << yes <<
            ", sorry better luck next time "
            << yes << "!!! " << endl;

        return 0;
    }



Fun://program
    try {//try catch functions
        cout << " " << yes << " this is a divider program. It takes one number "
            "plus another number and divides the two seperate numbers ;-} " << endl;
        cout << "Please enter a number for your numerator " << endl;
        cin >> numm;
        if (numm == 0) { //try to get a numerator and apply one if the user is dumb
            throw num_dumb;
        }
        cout << "Please enter a denominator " << endl;
        cin >> denumm; //try to get a denumerator 
    }
    catch (int c) {//buffer - catch people not following instructions
        cout << "I Caught you notusing a number \n"
            "You have been banned forlife s!!! " << endl;
        return -1;
    }
    try { //try this if the denumerator is not a numeral
        if (denumm == 0) {
            throw 0;
        }

    }
    catch (int myB) {//buffer - catch number for the idiots
        if (myB == 0) {
            cout << "User Entered a Zero Denominator " << endl;
            denumm = 0.000000001;
        }

    }
    cout << "Your answer is " << myDiv(numm, denumm);//gives you an answer myDiv 
    system("pause");
    cout << "That was fun right? "
        "Type y for yes and hit enter " << endl;
    char fu;
    cin >> fu;
    if (fu == 'y') {
        goto Fun; //play again 
    }
    else {
        exit;
    }
}
