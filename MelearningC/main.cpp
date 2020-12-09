#include <iostream>
#include <cstring>
#include <time.h>
#include <thread>
#include <chrono>
#include <conio.h>

size_t assingnsubjectid(char name[]);

using namespace std;
using namespace this_thread;
using namespace chrono;
int main()
{
    size_t subjectid;
    char subjectname[] = "Placeholder";

    cout << "Enter a subject name: ";
    cin >> subjectname;
    subjectid = assingnsubjectid(subjectname);

    char idclass[] = "PlaceHolder";

    cout << "Type the class you would want to be in (Selections are, A, B, C, D and, wow you're bad at school, F) \n";
    cin >> idclass;

    cout << "\nThe subject id of: " << subjectname << " is " << subjectid << " and the class this 'profound' individual is in is called " << idclass << "\n";
    seconds dura(5);
    sleep_for(dura);
    return 0;
}

size_t assingnsubjectid(char name[])
{
    srand(time(0));
    size_t rande = strlen(name);

    return rand() * rande * rande * rande;
}
