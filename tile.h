#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "SDL_Plotter.h"
#include "constant.h"

class tile{
    private:
        int size;
        color tile_color;
        point loc, prev_loc;

    public:
        tile();
        tile(int s);
        tile(int s, color c);

        void setSize(int);
        void setLocation(point);
        void setColor(color);

        int getSize() const;
        point getLocation() const;
        color getColor() const;

        void draw(SDL_Plotter& g);

        void move();
        void moveRight();
        void moveLeft();

};

#endif // TILE_H_INCLUDED
