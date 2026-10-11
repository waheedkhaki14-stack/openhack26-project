#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    cout << "--- EduConnect - OpenHack 2026 ---" << endl;
    cout << "Mehran University Khairpur" << endl;
    int n;
    cout << "Kitne students? ";
    cin >> n;
    Student s[100];
    for(int i=0; i<n; i++){
        cout << "Name: "; cin >> s[i].name;
        cout << "Roll: "; cin >> s[i].rollNo;
        cout << "Marks: "; cin >> s[i].marks;
    }
    cout << "\n--- Results ---" << endl;
    for(int i=0; i<n; i++){
        string g = s[i].marks>=80?"A+":s[i].marks>=70?"A":s[i].marks>=60?"B":"C";
        cout << s[i].name << " - " << g << endl;
    }
    return 0;
}