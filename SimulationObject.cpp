//
//  SimulationObject.cpp
//  MyBeaverSimulation
//
//  Created by Sebastian Sperber on 12.06.16.
//  Copyright © 2016 Sebastian Sperber. All rights reserved.
//

#include "SimulationObject.hpp"


namespace EvoSim{
    
    SimulationObject::SimulationObject(){
        
        this->identifier = "";
        
    }
    
    SimulationObject::SimulationObject(std::string identifier){
        this->identifier = identifier;
    }
    
    SimulationObject::~SimulationObject(){
        
    }
    
    void SimulationObject::setIdentifier(std::string newIdentifier){
        this->identifier = newIdentifier;
    }
    
    std::string SimulationObject::getIdentifier(){
        return identifier;
    }
    
    int SimulationObject::getDummyCounter(){
        return 1;
    }
    
    
}

