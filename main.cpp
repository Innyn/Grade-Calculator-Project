/*
Name: Inekiengha Nimwiorio
Program: Chapter 5- Loops

 */


#include <iostream>
#include <iomanip>
using namespace std;

//Constants
const int NUM_TESTS = 2;
const string TITLE = "Welcome to Test Grade Calculator Program!";
const string LINE = "----------------------------------";



int main ()
{
    float test1, test2, test3, loScore, avgScore;
    test1 = test2 = test3 = loScore = avgScore = 0;
    char letterGrade = ' ';
    
    cout << TITLE << endl << LINE << endl;
    
    cout << "ERORR! Enter test score between 0 and 100: ";
    cin >> test1;
    
    while (test1 < 0 || test1 > 100)
    {
        cout << "ERORR! Enter test score between 0 and 100: ";
        cin >> test1;
    }
    
    cout << "ERORR! Enter test score between 0 and 100: ";
    cin >> test2;
    
    while (test2 < 0 || test2 > 100)
    {
        cout << "ERORR! Enter test score between 0 and 100: ";
        cin >> test2;
    }
    
    cout << "ERORR! Enter test score between 0 and 100: ";
    cin >> test3;
    
    while (test3 < 0 || test3 > 100)
    {
        cout << "ERORR! Enter test score between 0 and 100: ";
        cin >> test3;
    }
    
   
// Loscore calculation
    if (test1 < test2 && test1 < test3)
    {
        loScore = test1;
    }
    else if (test2 < test1 && test2 < test3)
    {
        loScore = test2;
    }
    else
    {
        loScore = test3;
    }
    
// Average Calculation
    avgScore = ((test1 + test2 + test3) - loScore / NUM_TESTS);
    
    if (avgScore >= 90)
    {
        letterGrade = 'A';
    }
    else if (avgScore <= 89 && avgScore >= 80)
    {
        letterGrade = 'B';
    }
    else if (avgScore <= 79 && avgScore >= 70)
    {
        letterGrade = 'C';
    }
    else if (avgScore <= 69 && avgScore >= 70)
    {
        letterGrade = 'D';
    }
    else if ( avgScore <= 59 && avgScore >= 0)
    {
        letterGrade = 'F';
    }
   

    
    cout << LINE << endl;
    cout << "Lowest test score dropped: " << loScore << endl;
    cout << "Average test score: " << avgScore << endl;
    cout << "Letter grade: " << letterGrade << endl;
    cout << LINE << endl;
    
    
    
    return 0;
}
