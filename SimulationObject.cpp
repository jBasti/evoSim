//
//  SimulationObject.cpp
//  MyBeaverSimulation
//
//  Created by Sebastian Sperber on 12.06.16.
//  Copyright © 2016 Sebastian Sperber. All rights reserved.
//

#include "SimulationObject.hpp"


using namespace std;

SimulationObject::SimulationObject(){
    
    this->identifier = "";
    
}

SimulationObject::SimulationObject(string identifier){
    this->identifier = identifier;
}

SimulationObject::~SimulationObject(){
    
}

void SimulationObject::setIdentifier(string newIdentifier){
    this->identifier = newIdentifier;
}

string SimulationObject::getIdentifier(){
    return identifier;
}

int SimulationObject::getDummyCounter(){
    return 1;
}