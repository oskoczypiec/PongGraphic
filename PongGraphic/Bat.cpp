#include "stdafx.h"
#include "Bat.h"

Bat::Bat(float startX, float startY)
{
	position.x = startX;
	position.y = startY;

	batShape.setSize(sf::Vector2f(10, 100));
	batShape.setPosition(position);
}

FloatRect Bat::getPosition(){
    return batShape.getGlobalBounds();
}
 
RectangleShape Bat::getShape(){
    return batShape;
}
 
void Bat::moveLeft(){
    position.y -= batSpeed;
}
 
void Bat::moveRight(){
    position.y += batSpeed;
}
 
void Bat::update(){
    batShape.setPosition(position);
}
