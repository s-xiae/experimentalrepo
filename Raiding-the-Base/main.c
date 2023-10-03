#include <stdio.h>


int main(void)
{
  int input;
  printf("Raiding the Base\nJUST NOTE: THIS GAME HAS STOPPED UPDATING AND I WON'T PUT UP ANYTHING NEW FOR RIGHT NOW.\nPress 1 to Begin: ");
  scanf("%d", &input);
  if(input == 1)
  {
    printf("You are in a top secret military division. You get assigned a task from general, to infiltrate the hyper clan, which is trying to take over the world.\nYou are really close to their base, and have 6 options:\n1. Bomb\n2. Drill\n3. Teleporter\n4. Sneak in\n5. Cheese\n6. Bean\n");
    scanf("%d", &input);
    if(input == 1)
    {
      printf("You throw a bomb, but then when it explodes, base is unharmed, and there are now some angry hyper clan members shooting at the Helicopter.\nFAIL: Use imploding bombs, one exploding ones.");
      return 0;
    }
    if(input == 2)
    {
      printf("As soon as you attempt to drill into the base, the drill brakes, since the walls are extremely strong.\nFAIL: Okay, now this already is getting ridiculous, and this just started.");
      return 0;
    }
    if(input == 3)
    {
      printf("You teleport into the building.\nYou see 2 guards, and they notice you.\n1. Bean\n2. Sniper Rifle\n3. Disappear\n4. Pistol\n");
      scanf("%d", &input);
      switch(input)
      {
        case 1:
          printf("You eat it. Nothing happens.\nFAIL: I told you!");
          break;
        case 2:
          printf("You attempt to use your sniper rifle, but you notice that you forgot to reload the mag.\nFAIL: Hey! Being prepared doesn't hurt at all!");
          break;
        case 3:
          printf("You eat a pill of disappearing powder, but the guards use invisibility goggles to find you.\nFAIL: Huh, that isn't possible.");
          break;
        case 4:
          printf("You manage to load your pistol and shoot both guards down.\nYou go past the guards just to find a glass wall and nothing else.\n1. Bean\n2. Hammer\n3. Hammer\n4. Hammer\n");
          scanf("%d", &input);
          switch(input)
          {
            case 1:
              printf("You eat it. You grow extremely big, but that just causes difficulties.\nFAIL: Bruh.");
              break;
            case 2:
              printf("You hammer the wall. Another guard notices you and you get caught.\nFAIL: Oh noes ther goes el bozo ratio.");
              break;
            case 3:
              printf("You hit your head.\nFAIL: Woah, woah, woah... Careful there!");
              break;
            case 4:
              printf("A guard notices you. He shoots at you, but then you manage to deflect the bullet onto the glass. The glass shatters.\nYou find the core of the base. All of the files are contained in there, and if you remove it, the Hyper clan will have an extremely dark day.\n1. Bean\n2. Zero-Point Energy\n3. Hammer\n4. Remove core\n");
              scanf("%d", &input);
              switch(input)
              {
                case 1:
                  printf("Bruh.\nAAAAH: YOU AREN'T ALLOWED TO GET ANYMORE ENDINGS EVER AGAIN. STAHP CHOOSING THE BEAN.");
                  break;
                case 2:
                  printf("You use a zero-point energy glove to guide the core back to the helicopter.\nEnding: DARKEST DAY FOR THE HYPER CLAN\nEventually, the base goes havoc because with no core, the base is a disaster. You also end up with the files that are needed.");
                  break;
                case 3:
                  printf("The core breaks, and the base explodes, along with you.\nFAIL: I never knew that.");
                  break;
                case 4:
                  printf("You attempt to remove the core. The core is so heavy that you get smashed by it.\nFAIL: This is what I tried to warn you about!");
                  break;
              }
              break;
          }
        break;
      }
    }
    if(input == 4)
    {
      printf("You manage to bypass the guards in the front.\nYou go towards the clan's file room. 5 guards notice you.\n1. Timeout\n2. Sniper Rifle\n3. Teddy Bear\n4. Dodge\n");
      scanf("%d", &input);
      switch(input)
      {
        case 1:
          printf("You get shot like 30 times.\nOh wow, that is just sad");
          break;
        case 2:
          printf("You attempt to use your sniper rifle, but you notice that you forgot to reload the mag.\nFAIL: I told you once, GET PREPARED.");
          break;
        case 3:
          printf("You pull out a teddy bear, but you don't realize that it's a bomb.\nFAIL: Guys, look! A b̵̮͎̜̬͍̱̙̺̟̝̲̝̰͔͎͍̍̃̎̀̉̓i̷̬͙̟͉̖͐̀͗̚ṛ̵͇͚͓̻̤̥̪̇͊̿̓̄̍͊͒̂͆̄͘d̷̡͕̙̱̤̳̘͚͓̘̟̾͛̓͌͋ͅì̷̭͍̙̞̬̈͒̓̎́̊͂̔͒͆̃̓̕̕e̵̩̜͈͉͔͕̣͉̝̪̩̗͈̎͒͛̾͋̇̍̈̚ bomb!");
          break;
        case 4:
          printf("You dodge all of the guards bullets, catch 5 of them, and throw them at the guard's guns. They get scared and they leave you alone.\nYou end up in a vault room. You look around, and the suddenly found some files that are lying there.\n1. Grab files\n2. Take time\n3. Rush things\n");
          scanf("%d", &input);
          switch(input)
          {
            case 1:
              printf("You grab the files.\nYou need to find a way to get out of there.\n1. Sneak out\n2. Teleporter\n3. Cheese\n");
              scanf("%d", &input);
              switch(input)
              {
                case 1:
                  printf("You try getting out of there, but you get caught by the clan leader himself.\nFAIL: Great job. You turned yourself in.");
                  break;
                case 2:
                  printf("You escape the base via teleporter and give the proof to your general.\nEnding: SUDDEN ARREST\nThe next day, your government division stages a raid in the base and arrests every single one of the clan members.");
                  break;
                case 3:
                  printf("You eat the cheese, but then you become ginormous and you can't move.\nFAIL: At least it isn't a bomb.");
                  break;
              }
              break;
            case 2:
              printf("You take your time, but 2 guards bust you out.\nFAIL: Maybe don't take too much time now.");
              break;
            case 3:
              printf("You try to get the files as fast as you can, but you trip and the alarm goes off.\nFAIL: Take your time now.");
              break;
          }
      }
    }
    if(input == 5)
    {
      printf("The cheese somehow gets you past the guards.\nYou fight some guards that see you bust in.\n1. RPG\n2. Attack\n3. Multi Power\n");
      scanf("%d", &input);
      switch(input)
      {
        case 1:
          printf("You start attacking RPG-style, and after you beat every single one of those guards, you bust into the hallway.\nYou run towards the clan leader's office. He sees you and starts running away. You chase him. He calls someone to close some doors.\n1. Timeout\n2. Burp\n3. Warp\n");
          scanf("%d", &input);
          switch(input)
          {
            case 1:
              printf("You slam into one of the walls.\nFAIL: Watch where you're going!");
              break;
            case 2:
              printf("You start running backwards and then you burp and bump into the clan leader.\nThe leader continues running and he summons his second in command.\n1. RPG\n2. OWRPG\n3. ARPG\n");
              scanf("%d", &input);
              switch(input)
              {
                case 1:
                  printf("You attempt to attack RPG-style again, but his second in command defies all of the RPG game rules.\nFAIL: All your base are belong to us");
                  break;
                case 2:
                  printf("You attempt to attack Open World RPG-style, but these types of RPGs don't have attack functions at all. In fact, they don't even have decent attack functions..\nFAIL: I still wonder if I should play Pokémon Scarlet and Violet...");
                  break;
                case 3:
                  printf("You attack Action RPG-style, and beat his second in command.\nYou seize the leader, and force towards the enterance.\n1. JetPack\n2. Gun\n3. Teleporter\n");
                  scanf("%d", &input);
                  switch(input)
                  {
                    case 1:
                      printf("You grab the leader and use a jet pack to go towards the helicopter. The jet pack malfunctions and you end up everywhere.\nFAIL: Error 404: Cannot process 'run' command");
                      break;
                    case 2:
                      printf("You shoot the leader. The guards see it and kills you.\nFAIL: Don't do it in front of guards, bro.");
                      break;
                    case 3:
                      printf("You teleport into the helicopter.\nEnding: BUSTED!\nYou then force the leader to spit everything he has to say about the clan out, and the clan gets busted.");
                      break;
                  }
                  break;
              }
              break;
            case 3:
              printf("You warp in front of him, but all of that energy caused paralysis.\nFAIL: That type of technology is for superhumans, not you.");
              break;
          }
          break;
        case 2:
          printf("You attack, but the guards easily overpower you.\nFAIL: You should bring some other people with you.");
          break;
        case 3:
          printf("You use a combo move, but it doesn't work.\nFAIL: Gotta master those, no matter what.");
          break;
      }
    }
    if(input == 6)
    {
      printf("You eat it and nothing happens.\nFAIL: I'll tell you that absolutely nothing happens if eat it.");
      return 0;
    }
  }
  return 0;
}