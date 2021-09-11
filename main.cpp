//SFML Images
#include<iostream>
using namespace std;


#include "SFML/Graphics.hpp"

int main() {

    //game set up (you'll need these two lines in every game)
    sf::RenderWindow renderWindow(sf::VideoMode(500,500), "loading images"); //set up screen
    sf::Event event; //set up event queue

    //Here's how to load an image: clicke file->save as to see where to store "dog.png"
    sf::Texture img1;
    if (!img1.loadFromFile("dog.png")) return 0; //this line loads the image AND kills your program if it doesn't load
    sf::Sprite pic1;
    pic1.setTexture(img1);


    //################### HOLD ONTO YOUR BUTTS, ITS THE GAME LOOP###############################################################
    while (renderWindow.isOpen()) {//keep window open until user shuts it down

        while (renderWindow.pollEvent(event)) { //look for events-----------------------

            //this checks if the user has clicked the little "x" button in the top right corner
            if (event.type == sf::Event::EventType::Closed)
                renderWindow.close();



        }//end event loop---------------------------------------------------------------
   
        

        //render section-----------------------------------------
        renderWindow.clear(); //wipes screen, without this things smear
        renderWindow.draw(pic1); //loads background image: make sure this goes first or it will cover other stuff!
        renderWindow.display(); //flips memory drawings onto screen

    }//######################## end game loop ###################################################################################

    cout << "goodbye!" << endl;
} //end game
