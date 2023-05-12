#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int rand_num;

    //initialize random seed
    srand(time(NULL));

    //menghasilkan 20 nomor acak antara 1 dan 100
    cout << "Nomor acak dalam [1, 100]:\n";

    for (int i = 0; i < 20; i++) {
        rand_num = rand() % 100 + 1;
        cout << rand_num << " ";
    }

    _getch();
    return 0;
}