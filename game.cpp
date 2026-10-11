#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, tries=0;
    
    cout << "--- EduConnect Game - OpenHack 2026 ---" << endl;
    cout << "Mehran University Khairpur" << endl;
    cout << "1 se 100 tak number guess karo!" << endl;
    
    do{
        cout << "Tumhara guess: ";
        cin >> guess;
        tries++;
        
        if(guess > secret) cout << "Bohot zyada! Neeche jao." << endl;
        else if(guess < secret) cout << "Bohot kam! Upar jao." << endl;
        else cout << "Mashallah! Jeet gaye! " << tries << " tries me!" << endl;
        
    }while(guess != secret);
    return 0;
}