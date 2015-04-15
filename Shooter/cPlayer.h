/*
=================
cRocket.h
- Header file for class definition - SPECIFICATION
- Header file for the Player class which is a child of cSprite class
=================
*/
#ifndef _CPLAYER_H
#define _CPLAYER_H
#include "cSprite.h"
#include "shooterGame.h"

class cPlayer : public cSprite
{
private:
	glm::vec2 playerVelocity = glm::vec2(0.0f, 0.0f);

public:
	void render();		// Default render function
	void update(float deltaTime);		// Player update method
	void setPlayerVelocity(glm::vec2 playerVel);   // Sets the velocity for the player
	glm::vec2 getPlayerVelocity();				 // Gets the player velocity

};
#endif