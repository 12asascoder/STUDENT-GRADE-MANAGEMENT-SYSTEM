#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    int marks[5];

public:
    Student(int id, string studentName, int studentMarks[]) {
        studentID = id;
        name = studentName;
        for (int i = 0; i < 5; ++i) {
            marks[i] = studentMarks[i];
        }
    }

    double calculateAverage() const {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return static_cast<double>(total) / 5;
    }

    void displayDetails() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        int id, marks[5];
        string name;

        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects: ";
        for (int j = 0; j < 5; ++j) {
            cin >> marks[j];
        }

        Student student(id, name, marks);
        student.displayDetails();
    }

    return 0;
}
