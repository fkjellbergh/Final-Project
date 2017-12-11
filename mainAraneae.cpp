#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "herocard.h"

using namespace std;

//Prototypes
string playerChoice;
vector <string> heroInventory;
vector <string> heroAchievements;
void instantDeath(int&);
int fightSpider(int&, int);
int spiderOne;
int heroHealth;
int heroAttack;
int main()
{
        string heroName;
 

        cout<<"                                             Lost Araneae                                            "<<endl;
        cout<<"The tale chronicling the rise and fall of the society of Araneae has mystified the lands for decades."<<endl;
        cout<<"The only mystery more perplexing is the location of the lost poeples. Many courageous travelers have ventured out for miles across the lands in search of the answer."<<endl; 
        cout<<"Knights, merchants, and journeymen alike have come up short; while some have foregone the challenge of its discovery, a select few have shown true resolve and have"<<endl; 
        cout<<"continue onward. High on the mountain of La Feye there lives a family of hunters whose version of the story of Araneae is more than enticing; it may yet"<<endl;
        cout<<"hold the answer that many broken spirits yearn. They speak of a once great knight, known for finding ancient secrets, who came upon their cottage one day"<<endl; 
        cout<<"in search for answers. After giving him directions to a barren clearing within the forests of the mountain, they never heard of him again. Neither did the rest of the realm."<<endl; 
        cout<<"There are two possibilities when it comes to the truth: the great knight once known as the Thistle Knight either died in that very clearing,"<<endl; 
        cout<<"or he discovered the secrets of the lost Araneae. You have followed the knight's quest to the very same clearing. Are you zealous enough to continue this journey?"<<endl;
        cout<<"Warning: This game does not have an autosave feature but does include checkpoints that will save your hero's quest. Game's cannot be resumed."<<endl;
       
       

       char gameChoice;
        do{
                cout<<"What would you like to do? (A) Begin Journey (B) HeroCards"<<endl;
                cin>>gameChoice;
        }while(gameChoice != 'A' && gameChoice != 'a' && gameChoice != 'B' && gameChoice != 'b');

    do{
        if(gameChoice == 'A' || gameChoice == 'a')
        {
                cout<<"Create a name for your hero."<<endl;
                cin>>heroName;
                cout<<"And so continues the tale of Araneae. Following the quest of "<<heroName<<endl;
                cout<<heroName<<" has reached the clearing where the Thistle Knight went missing"<<endl;
                cout<<"After scanning the area, there are two points of interest: "<<endl;
                cout<<"A slumped figure behind a fallen tree trunk directly in front of your view."<<endl;
                cout<<"A surface of the mountain covered in slashed roots and torn bushes"<<endl;;
                heroHealth = 100;
            
            
                char firstChoice;
                do{
                        cout<<"What would you like to do?"<<endl;
                        cout<<"(A) Examine the figure behind the trunk. (B) Examine mountain surface."<<endl;
                        cin>>firstChoice;
                }while(firstChoice != 'A' && firstChoice != 'a' && firstChoice != 'B' && firstChoice != 'b');

                char lootKnight;

                if(firstChoice == 'A' || firstChoice == 'a')
                {
                        cout<<"The figure behind the trunk is the Thistle Knight."<<endl;
                        cout<<" The once great knight has passed on. In his hand is a dagger with a strangely forged blade. His sword is lying on the ground with what appears to be a blue liquid."<<endl;
                        cout<<" His rucksack appears to not be empty."<<endl;
                        cout<<"You do not have the means to protect yourself. You must take his sword."<<endl;
                        heroAttack = 20;
                        cout<<"Your sword does "<<heroAttack<<" damage"<<endl;
                        heroInventory.push_back("Thistle Knight Sword");
                        heroAchievements.push_back("Knighthood: Arm yourself.");

                       
                        do{
                                cout<<"Would you like to loot the Thistle Knight's valuables? (A) Maybe just a peek... (B) No, rest in peace."<<endl;
                                cin>>lootKnight;
                        }while(lootKnight != 'A' && lootKnight != 'a' && lootKnight != 'B' && lootKnight != 'b');

                        if(lootKnight == 'A' || lootKnight == 'a')
                        {   
                                char readNote;
                                heroInventory.push_back("Dagger");
                                heroInventory.push_back("Potion");
                                heroInventory.push_back("Note");
                                heroAchievements.push_back("False Knight: Take the knight's belongings.");
                                        cout<<"You take the dagger and notice the spider insignia of Araneae on the crest of the grip handle. Rummaging through his rucksack you find a vial "<<endl;
                                cout<<"full of a transparent green liquid and a torn parchment with writing."<<endl;

                                do{
                                        cout<<"Do you wish to read the parchment? (A) Yes (B) No "<<endl;
                                        cin>>readNote;
                                }while(readNote != 'A' && readNote != 'a' && readNote != 'B' && readNote != 'b');

                                if(readNote == 'A' || readNote == 'a')
                                {
                                        string line;
                                        ifstream myfile ("thistle.txt");
                                        if (myfile.is_open())
                                        {
                                                while (getline (myfile,line))
                                                {
                                                        cout<<line<<'\n';
                                                
                                                }
                                                myfile.close();
                                        }
                                    cout<<"According the the knight's notes, this vial will replenish your health"<<endl;
                                }
                        
                        cout<<"Now continue on to examine the mountain surface."<<endl;
                        cout<<"You examine the torn roots and shrubs onthe surface of the mountain side."<<endl;
                        cout<<"You carefully brush the rocks aside with your hand and find a crevice"<<endl;
                        cout<<"large enough for two people to enter at once."<<endl;
                        cout<<"You notice a blue liquid on the crevice walls."<<endl;
                        cout<<"It is time to enter the mountain."<<endl;
                        
        }else if(lootKnight == 'B' || lootKnight == 'b'){

                cout<<"You have decided to continue on without the knight's belongings"<<endl;
        }

}else if(firstChoice == 'B' || firstChoice == 'b'){

        cout<<"You examine the torn roots and shrubs on the surface of the mountain side."<<endl;
        cout<<"The roots dangle over what appears to be a crack on the mountain."<<endl;
        cout<<"You carefully brush the roots aside with your hand and find a crevice"<<endl;
        cout<<"large enough for two people to enter at once."<<endl;
        cout<<"You notice a blue liquid on the crevice walls."<<endl;

        char enterCrevice;
        do{
           cout<<"What would you like to do?"<<endl;
           cout<<"(A) Enter mountain (B) Examine figure behind trunk"<<endl;
           cin>>enterCrevice;
        }while(enterCrevice != 'A' && enterCrevice != 'a' && enterCrevice != 'B' && enterCrevice != 'b');

        if(enterCrevice == 'A' || enterCrevice == 'a')
        { 
            instantDeath(heroHealth);

        }else if(enterCrevice == 'B' || enterCrevice == 'b'){
        cout<<"Now continue on to examine the figure behind the tree trunk."<<endl;
        cout<<"The figure behind the trunk is the Thistle Knight."<<endl;
        cout<<"The once great knight has passed on. In his hand is a dagger with a strangely forged blade. His sword is lying on the ground with what appears to be a blue liquid."<<endl;
        cout<<"His rucksack appears to not be empty."<<endl;
        cout<<"You do not have the means to protect yourself. You must take his sword."<<endl;
        heroInventory.push_back("Thistle Knight Sword");
        heroAchievements.push_back("Knighthood: Arm yourself.");

        char lootKnight;
        do{
                cout<<"Would you like to loot the Thistle Knight's valuables? (A) Maybe just a peek... (B) No, rest in peace."<<endl;
                        cin>>lootKnight;
        }while(lootKnight != 'A' && lootKnight != 'a' && lootKnight != 'B' && lootKnight != 'b');

        if(lootKnight == 'A' || lootKnight == 'a')
        {
                char readNote;
                heroInventory.push_back("Dagger");
                heroInventory.push_back("Potion");
                heroInventory.push_back("Note");
                heroAchievements.push_back("False Knight: Take the knight's belongings.");
                        cout<<"You take the dagger and notice the spider insignia of Araneae on the crest of the grip handle. Rummaging through his rucksack you find a vial "<<endl;
                cout<<"full of a transparent green liquid and a torn parchment with writing."<<endl;

                        do{
                                cout<<"Do you wish to read the parchment? (A) Yes (B) No "<<endl;
                                cin>>readNote;
                        }while(readNote != 'A' && readNote != 'a' && readNote != 'B' && readNote != 'b');

                if(readNote == 'A' || readNote == 'a')
                {
                        string line;
                        ifstream myfile ("thistle.txt");
                        if (myfile.is_open())
                        {
                                while (getline (myfile,line))
                                {
                                        cout<<line<<'\n';
                                }
                                myfile.close();
                        }
                }else{
                      break;
                     }
             }else{
                   cout<<"You have decided to continue on without the knight's belonings."<<endl;
                   cout<<"It is time to enter the mountain."<<endl;
          }
         }
        }
       }
    
      char secondChoice;
            spiderOne = 75;
            cout<<"You have entered the mountain. You step on a puddle of blue liquid."<<endl;
            cout<<"You look around the room. It is barely lit by old torchesand the last of the sunlight."<<endl;
            cout<<"Suddenly a large object falls from the ceiling and lands in front of you."<<endl;
            cout<<"It is limping. This must be what killed the Thistle Knight!"<<endl;
            cout<<"It's a monstrous spider! It charges at you, ready to attack."<<endl;
      do{      
          cout<<"What do you do?(A) Fight spider (B) Live to tell the tale"<<endl;
          cin>>secondChoice;
      }while(secondChoice != 'A' && secondChoice != 'a' && secondChoice != 'B' && secondChoice != 'b');

      if(secondChoice == 'A' || secondChoice == 'a' )
      {
       spiderOne = fightSpider(heroHealth, spiderOne);
       break;
      }else{

        cout<<"You leave the mountain with your hide intact."<<endl;
        cout<<"You live and share your story back home"<<endl;
        heroAchievements.push_back("Dead Men Tell No Tales: Run away from the spider");

      }
      cout<<"You have killed the first spider guardian."<<endl;

     char saveGame;
      do{
      cout<<"Would you like to save your Hero Card?(A) Yes (B) No"<<endl;
            cin>>saveGame;
          }while(saveGame != 'A' && saveGame != 'a' && saveGame != 'B' && saveGame != 'b');
     
       if(saveGame == 'A' || saveGame == 'a')
      {
        herocard hero;
        hero.saveHeroCard(heroName, heroInventory, heroAchievements, heroHealth, heroAttack);

      }else{
        cout<<"Let's hope you don't regret that."<<endl;
      }

      break;
      }while(heroHealth > 0);
  
return 0;
}


void instantDeath(int& heroHealth)
{
    cout<<"You have entered the cave"<<endl;
    cout<<"A giant spider falls from the ceiling and charges towards you."<<endl;
    cout<<"You have nothing to use against the spider."<<endl;
    cout<<"You have died."<<endl;
    heroHealth = 0;
}

int fightSpider(int& heroHealth, int spiderOne)
{
    int damagedSpider;
    int spiderAttack = 20;
    char spiderFight;
    do{
        cout<<"Attack spider? (A) Yes (B) Use potion"<<endl;
        cin>>spiderFight;
        if(spiderFight == 'A' || spiderFight == 'a')
         {
           cout<<"You slash the spider with your sword"<<endl;
           damagedSpider = spiderOne - heroAttack;
           cout<<"Spider is at "<<damagedSpider<<" health."<<endl;
           cout<<"The spider jabs at you with one of its giant legs"<<endl;
           heroHealth = heroHealth - spiderAttack;
           cout<<"You are at "<<heroHealth<<" health"<<endl;
        }else if(spiderFight == 'B' || spiderFight == 'b'){
           
           if(heroInventory[2] == "Potion")
           {
             cout<<"Your health has been restored";
             heroInventory[2] = "Empty";
             heroHealth = 100;
           }else{
             cout<<"You do not have a potion to use."<<endl;
           }
        }
        }while(heroHealth > 0 && damagedSpider > 0);
     if(heroHealth <= 0)
     {
     cout<<"You have died."<<endl;
     }else if(heroHealth > 0){
     cout<<"You defeated the spider!"<<endl;
     heroAchievements.push_back("Avenger: Kill the spider that killed the Thistle Knight");
     return damagedSpider;
     }

}




       


















































