/*
    This header file contains the Board class.
*/

#ifndef _BOARD_H
#define _BOARD_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>

class Board : public sf::Drawable{

private:

    sf::Color color1;
    sf::Color color2;
    std::vector<sf::RectangleShape> squares;


    std::array<sf::RectangleShape, 64> m_boardSquares;

    // Draw class on SFML Window
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:

    Board(sf::Color col1 = sf::Color::White, sf::Color col2 = sf::Color::Black);



    // Member function that sets Board stuff, can choose square colors in parameters
    void load(sf::Color col1 = sf::Color::White, sf::Color col2 = sf::Color::Black);




};

#endif