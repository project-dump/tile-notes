// C306, C308
#include <iostream>
#include <cmath>
#include "SDL_Plotter.h"
#include "tile.h"

using namespace std;

const int SIZE = 50;

void drawSquare(SDL_Plotter& g, int xOffset, int yOffset, int size, int R, int G, int B);

int main(int argc, char ** argv)
{


    SDL_Plotter g(NUM_ROW, NUM_COL);

    char key;
    tile square;

    while (!g.getQuit())
    {

		if(g.kbhit())
        {
            key = g.getKey();
            switch(toupper(key))
            {
                case RIGHT_ARROW: square.moveRight();
                    break;
                case LEFT_ARROW: square.moveLeft();
                    break;
            }
        }

            square.draw(g);
            square.move();
            g.update();
           g.Sleep(20);

}
}

void drawSquare(SDL_Plotter& g, int xOffset, int yOffset, int size, int R, int G, int B)
{
    for(int x = 0; x < size; x++)
    {
        for(int y = 0; y < size; y++)
        {
            g.plotPixel(x + xOffset, y + yOffset, R, G, B);
        }
    }
}

