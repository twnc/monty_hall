#include "std_lib_facilities.h"
using namespace std;

int main()
{
    cout << "How many times should each alternative be simulated?\n";
    int number_of_simulations;
    cin >> number_of_simulations;
    int success_when_remaining = 0;
    int success_when_switching = 0;

    for (int i = 0; i < number_of_simulations; ++i)
    {
        vector<int> doors = {0,0,0};
        doors[rand() % 3] = 1;
        int random_choice = rand() % 3;
        if (doors[random_choice] == 1)
            success_when_remaining++;
        if (doors[random_choice] == 0)
            success_when_switching++;
    }
        
    double remain_success = (success_when_remaining * 100) / number_of_simulations;
    double switch_success = (success_when_switching * 100) / number_of_simulations;

    cout << "Success rate when remaining = " << remain_success << "%\n"
         << "Success rate when switching = " << switch_success << "%\n";

    return 0;
}
