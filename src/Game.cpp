#include "Game.h"

void Game::DrawObjects() {
    for(GameObject* obj : objects){
        if(obj != nullptr)
           obj->Draw();
      
    }
}
void Game::UpdateObjects() {
    for(GameObject* obj : objects){
        obj->Update();
    }
}

void Game::AddObject(GameObject* obj){
    objects.push_back(obj);
}