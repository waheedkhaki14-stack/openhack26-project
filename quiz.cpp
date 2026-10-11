#include <iostream>
using namespace std;

int main(){
    int score = 0;
    char ans;
    
    cout << "--- EduConnect Quiz Game - OpenHack 2026 ---" << endl;
    cout << "Mehran University Khairpur" << endl;
    cout << "Har sahi jawab par 10 points!" << endl << endl;

    cout << "Q1: Pakistan ka capital kya hai?" << endl;
    cout << "a) Karachi  b) Islamabad  c) Lahore" << endl;
    cout << "Jawab (a/b/c): "; cin >> ans;
    if(ans=='b' || ans=='B'){ cout << "Sahi!" << endl; score+=10; }
    else { cout << "Ghalat! Sahi jawab b hai" << endl; }

    cout << "\nQ2: C++ kisne banayi?" << endl;
    cout << "a) Bjarne Stroustrup  b) Bill Gates  c) Mark" << endl;
    cout << "Jawab: "; cin >> ans;
    if(ans=='a' || ans=='A'){ cout << "Sahi!" << endl; score+=10; }
    else { cout << "Ghalat! Sahi a hai" << endl; }

    cout << "\nQ3: 2 + 2 * 2 = ?" << endl;
    cout << "a) 6  b) 8  c) 4" << endl;
    cout << "Jawab: "; cin >> ans;
    if(ans=='a' || ans=='A'){ cout << "Sahi!" << endl; score+=10; }
    else { cout << "Ghalat! Sahi a hai (6)" << endl; }

    cout << "\n--- Result ---" << endl;
    cout << "Tumhara Score: " << score << "/30" << endl;
    if(score==30) cout << "Mashallah! Genius ho!" << endl;
    else if(score>=20) cout << "Bohat Acha!" << endl;
    else cout << "Koshish jari rakho!" << endl;
    
    return 0;
}