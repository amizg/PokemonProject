#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "trainer.h"
#include "pokemon.h"
#include "fastMove.h"
#include "chargedMove.h"

using namespace std;

int main()
{
    srand(time(NULL)); //rand num for levels


    //Declare Fast Moves
    fastMove quick_atk("Quick Attack", 10, 13, 0.80, 12, 0.25);//
    fastMove thunder_shock("Thunder Shock", 8, 13,0.60, 3, 0.85);//
    fastMove dragon_breath("Dragon Breath", 12, 8, 0.50, 2, 0.30);//
    fastMove charge_beam("Charge Beam", 7, 14, 1.10, 3, 0.85);//
    fastMove fire_spin("Fire Spin", 13, 9, 1.10, 6, 0.85);//
    fastMove air_slash("Air Slash", 12, 8, 1.20, 7, 1.00);//
    fastMove zen_headbutt("Zen Headbutt", 7, 9, 1.10, 14, 0.85);//
    fastMove bullet_punch("Bullet Punch", 10, 11, 0.90, 16, 0.30);//
    fastMove tackle("Tackle", 10, 10, 0.50, 12, 0.30);//
    fastMove bubble("Bubble", 10, 12, 1.20, 17, 0.75);//
    fastMove fury_cutter("Fury Cutter", 8, 15, 0.40, 0, 0.10);//
    fastMove feint_attack("Feint Attack", 11, 10, 0.90, 1, 0.75);//
    fastMove pound("Pound", 12, 10, 0.60, 12, 0.34);//
    fastMove counter("Counter", 13, 9, 0.90, 5, 0.70);//
    fastMove dragon_tail("Dragon Tail", 14, 8, 1.10, 2, 0.85);//
    fastMove fire_fang("Fire Fang", 13, 9, 0.90, 6, 0.64);//
    fastMove bite("Bite", 12, 8, 0.50, 1, 0.30);//
    fastMove ember("Ember", 10, 10, 1.00, 6, 0.60);//
    fastMove scratch("Scratch", 12, 8, 1.00, 12, 0.30);//
    fastMove vine_whip("Vine Whip", 12, 10, 0.60, 9, 0.35);//

    //Declare Charge Moves
    chargedMove discharge("Discharge", 26, 65, 3);
    chargedMove wild_charge("Wild Charge", 35, 90, 3);
    chargedMove thunderbolt("Thunderbolt", 32, 80, 3);
    chargedMove outrage("Outrage", 28, 110, 2);
    chargedMove flash_cannon("Flash Cannon", 37, 100, 16);
    chargedMove crunch("Crunch", 22, 70, 1);
    chargedMove dragon_claw("Dragon Claw", 29, 50, 2);
    chargedMove fire_blast("Fire Blast", 33, 140, 6);
    chargedMove overheat("Overheat", 40, 160, 6);
    chargedMove hyper_beam("Hyper Beam", 39, 150, 12);
    chargedMove psycho_boost("Psycho Boost", 17, 70, 14);
    chargedMove psychic("Psychic", 32, 90, 14);
    chargedMove earthquake("Earthquake", 38, 140, 10);
    chargedMove aqua_jet("Aqua Jet", 17, 45, 17);
    chargedMove aqua_tail("Aqua Tail", 26, 50, 17);
    chargedMove water_pulse("Water Pulse", 21, 70, 17);
    chargedMove x_scissor("X-Scissor", 28, 45, 0);
    chargedMove iron_head("Iron Head", 31, 60, 16);
    chargedMove night_slash("Night Slash", 22, 50, 1);
    chargedMove gyro_ball("Gyro Ball", 24, 80, 16);
    chargedMove dazzling_gleam("Dazzling Gleam", 28, 100, 4);
    chargedMove disarming_voice("Disarming Voice", 17, 70, 4);
    chargedMove body_slam("Body Slam", 26, 50, 12);
    chargedMove moonblast("Moonblast", 33, 130, 4);
    chargedMove shadow_ball("Shadow Ball", 33, 100, 8);
    chargedMove close_combat("Close Combat", 43, 100, 5);
    chargedMove powerup_punch("Power up Punch", 25, 50, 5);
    chargedMove aura_sphere("Aura Sphere", 50, 90, 5);
    chargedMove draco_meteor("Draco Meteor", 41, 150, 2);
    chargedMove hydro_pump("Hydro Pump", 39, 130, 17);
    chargedMove flame_burst("Flame Burst", 26, 70, 6);
    chargedMove flamethrower("Flamethrower", 31, 70, 6);
    chargedMove flame_charge("Flame Charge", 18, 70, 6);
    chargedMove power_whip("Power Whip", 34, 90, 9);
    chargedMove seed_bomb("Seed Bomb", 26, 55, 9);
    chargedMove sludge_bomb("Sludge Bomb", 34, 80, 13);

    //Declare Pokemon
    pokemon bulbasaur("Bulbasaur", rand() % 40+1, 9, 13, 118, 128, 111, vine_whip, sludge_bomb);
    pokemon charmander("Charmander", rand() % 40+1, 6, 116, 118, 93, ember, flamethrower);
    pokemon salamence("Salamence", rand() % 40+1, 2, 7, 277, 216, 168, dragon_tail, draco_meteor);
    pokemon lucario("Lucario", rand() % 40+1, 5, 16, 236, 172, 144, counter, aura_sphere);
    pokemon clefairy("Clefairy", rand() % 40+1, 4, 107, 172, 108, pound, moonblast);
    pokemon jigglypuff("Jigglypuff", rand() % 40+1, 4, 12, 80, 251, 41, pound, gyro_ball);
    pokemon scizor("Scizor", rand() % 40+1, 0, 16, 236, 172, 181, fury_cutter, x_scissor);
    pokemon squirtle("Squirtle", rand() % 40+1, 17, 94, 127, 121, tackle, water_pulse);
    pokemon metagross("Metagross", rand() % 40+1, 16, 14, 257, 190, 228, bullet_punch, earthquake);
    pokemon deoxys("Deoxys", rand() % 40+1, 14, 345, 137, 115, zen_headbutt, psycho_boost);
    pokemon charizard("Charizard", rand() % 40+1, 6, 7, 223, 186, 173, air_slash, dragon_claw);
    pokemon zekrom("Zekrom", rand() % 40+1, 3, 2, 275, 205, 211, charge_beam, outrage);
    pokemon pikachu("Pikachu", rand() % 40+1, 3, 112, 111, 96, quick_atk, wild_charge);

    //Declare Trainers
    trainer trainer1("Adam", bulbasaur, lucario, charmander, deoxys, zekrom, scizor);
    trainer trainer2("Gym Leader Spradling", charizard, clefairy, squirtle, salamence, metagross, pikachu);

    //Choose starting pokemon for battle
    trainer1.chooseActive();
    trainer2.chooseActive();

    //Start loop for battle, end when a trainer has no more usable pokemon
    while(trainer1.notDead() == true && trainer2.notDead() == true)
    {
        //check to see if the trainer still has pokemon remaining before turn
        if (trainer1.notDead() == true)
        {
            //Check to make sure the trainer is off cooldown
            if (trainer1.getWaitTime() <= 0)
            {
                trainer1.turnAgainst(trainer2); //use move
            }
            else
            {
                cout << "------------" << trainer1.get_name() << " is still on cooldown!" << endl;
                trainer1.decWait(); //decrement cooldown
            }
        }
        //check to see if the trainer still has pokemon remaining before turn
        if (trainer2.notDead() == true)
        {
            //Check to make sure the trainer is off cooldown
            if (trainer2.getWaitTime() <= 0)
            {
                trainer2.turnAgainst(trainer1); //use move
            }
            else
            {
                cout << "------------" << trainer2.get_name() << " is still on cooldown!" << endl;
                trainer2.decWait(); //decrement cooldown
            }
        }

    }

    //Find who the winner is and print results to screen
    if(trainer1.notDead() == false)
    {
        cout << endl << trainer1.get_name() << " has no more usable Pokemon! " << endl;
        cout << endl << trainer2.get_name() << " wins!" << endl;
    }

    if(trainer2.notDead() == false)
    {
        cout << endl << trainer2.get_name() << " has no more usable Pokemon! " << endl;
        cout << endl << trainer1.get_name() << " wins!" << endl;
    }

    return 0;
}
