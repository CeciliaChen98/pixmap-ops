#include <iostream>
#include "image.h"
using namespace std;
using namespace agl;

int main(int argc, char** argv)
{
   Image image;
   if (!image.load("../images/earth.png")) {
      std::cout << "ERROR: Cannot load image! Exiting...\n";
      exit(0);
   }
   image = image.invert();
   Image small_earth = image.resize(100,100);

   Image plant;
   plant.load("../images/plant.png");
   plant = plant.resize(100,100);

   Image background1 = image.subimage(20,30,100,100);
   background1 = background1.swirl().swirl();
   Image add_plant = small_earth.add(plant);
   add_plant = background1.multiply(add_plant);
   image.replace(add_plant, 20, 30);

   Image tiger;
   tiger.load("../images/tiger.png");
   tiger = tiger.resize(100,100);

   Image add_tiger = small_earth.add(tiger);
   Image background2 = image.subimage(280,290,100,100);
   background2 = background2.swirl();
   add_tiger = background2.multiply(add_tiger);
   image.replace(add_tiger, 280, 290);

   Image earth = image.gammaCorrect(2.2f);
   image = image.alphaBlend(earth, 0.5f);
   image.save("my_art_work.png");
   return 0;
}

