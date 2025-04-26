#pragma once
#include <vector>
#include "GameObject.h"


class Game{
private:
    std::vector<GameObject*> objects;
protected:
    
    void DrawObjects();
    void UpdateObjects();
    void AddObject(GameObject* obj);

public: 
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual bool Not_finished() = 0;
    virtual void Deinit() = 0;

    
};
