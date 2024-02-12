#include "Player.h"


Player::Player() 
{

}

Player::~Player()
{


}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		velocity = sf::Vector2f(0, -100);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		velocity = sf::Vector2f(-100, 0);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		velocity = sf::Vector2f(0, 100);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		velocity = sf::Vector2f(100, 0);
		move(velocity * dt);
	}
}