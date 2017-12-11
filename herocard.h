#ifndef _HEROCARD_H_
#define _HEROCARD_H_
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class herocard
{

    private: string heroName;
             vector <string> heroInventory;
             vector <string> heroAchievements;
             int heroHealth;
             int heroAttack;

    public: void saveHeroCard(string, vector <string>, vector <string>, int, int);

};
#endif
















