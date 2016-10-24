//
//  SimulationObject.hpp
//  evoSim Simulation
//
//  Created by Sebastian Sperber on 12.06.16.
//  Copyright © 2016 Sebastian Sperber. All rights reserved.
//

#ifndef SimulationObject_hpp
#define SimulationObject_hpp

#include <string>

namespace EvoSim{

class SimulationObject{
        
    public:
        // Methods
        SimulationObject();
        SimulationObject(std::string identifier);
        virtual ~SimulationObject();
                
        void setIdentifier(std::string newIdentifier);
        std::string getIdentifier();
        
        bool removeObject();
        //Members
        
        int getDummyCounter();
        
        
    private:
        std::string identifier;
    };


}

#endif /* SimulationObject_hpp */
