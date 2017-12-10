#include "herocard.h"
using namespace std;



void herocard::saveHeroCard(string heroTag, vector <string> heroStuff, vector <string> heroGoals, int heroLife, int heroFight)
{
  heroName = heroTag;
  heroHealth = heroLife;
  heroAttack = heroFight;
  heroInventory = heroStuff;
  heroAchievements = heroGoals;

  ofstream myfile;
  myfile.open(heroName);
  myfile<<heroName;
  myfile<<"Hero Health: \n";
  myfile<<heroHealth;
  myfile<<"Hero Power: \n";
  myfile<<heroAttack;
  myfile<<"Hero Collectibles: \n";
  for (int i = 0; i < heroInventory.size(); i++)
  {
    myfile<<heroInventory[i]<<endl;
  }
  myfile<<"Hero Achievements: \n";
  for (int i = 0; i < heroAchievements.size(); i++)
  {
    myfile<<heroAchievements[i]<<endl;
  }

}



