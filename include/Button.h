#pragma once

#ifndef _BUTTON_H
#define _BUTTON_H

#include <SFML/Graphics.hpp>

class Button : public sf::Sprite
{
private:

public:
    // returns true if player is clicking button
    bool isClicked(sf::Window &win);

protected:
    sf::Clock clickClock;
};

#endif // _BUTTON_H