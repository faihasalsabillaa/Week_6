#include <iostream>
using namespace std;

//Ratu Faiha Salsabilla Rahmadina_532756
const int max_students = 50;
const float max_score = 100;

struct Students {
    int nim; 
    float uts;
    float uas;
    float average;
};

float calcAvg(float uts, float uas){
    return (uts + uas)/2;
}

int main(){
    int n;
    Students students[max_students];

    cout << "Enter the number of students (1 - " << max_students << "): ";
    cin >> n;
    
    if (n < 1 || n > max_students) {
        cout << "Invalid number of students. Only values between 1 and " << max_students << endl;
        return 1;
    }

    //input data for each student
    for (int i = 0; i < n; i++) {
        cout << "Enter student's nim: ";
        cin >> students[i].nim;
        cout << "Enter student's UTS score: ";
        cin >> students[i].uts;
        cout << "Enter student's UAS score: ";
        cin >> students[i].uas;
 
        //calculating the avg
        students[i].average = calcAvg(students[i].uts, students[i].uas);
    }

    //Display the results
    cout << "\n-----------------\n";
    cout << "Student Data:\n " << endl;
    for (int i = 0; i < n; i++) {
        cout << "NIM: " << students[i].nim << endl;
        cout << "Average: " << students[i].average << endl;
        cout << "------\n";
    }
    return 0;
}