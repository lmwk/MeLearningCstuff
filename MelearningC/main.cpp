#include <iostream>
#include <cstring>
#include <time.h>
#include <thread>
#include <chrono>
#include <conio.h>

double assingnsubjectid(char name[]);

using namespace std;
using namespace this_thread;
using namespace chrono;
int main()
{
    int subjectid;
    char subjectname[] = "Placeholder";

    cout << "Enter a subject name: ";
    cin >> subjectname;
    subjectid = assingnsubjectid(subjectname);
    char key;
    cout << "\nThe subject id of: " << subjectname << " is " << subjectid << "\n";
    seconds dura(5);
    sleep_for(dura);
    return 0;
}

double assingnsubjectid(char name[])
{
    srand(time(0));
    int rande = strlen(name);

    return rand() * (double)rande * (double)rande;
}
