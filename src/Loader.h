//
//  Loader.h
//  refreq2
//
//  Created by Daniel Feles on 2/5/14.
//
//

#ifndef __refreq2__Loader__
#define __refreq2__Loader__

#include <iostream>
#include "ofMain.h"
#include "Vinyl.h"

extern Vinyl* vinyl;

class Loader {
    public:
        void loadFile(string path);
    
    private:
        void loadMusic(string path);
        void loadPicture(ofFile file);
    
};

#endif /* defined(__refreq2__Loader__) */