//
//  Vinyl.h
//  refreq2
//
//  Created by Daniel Feles on 2/5/14.
//
//

#ifndef __refreq2__Vinyl__
#define __refreq2__Vinyl__

#include <iostream>
#include "ofMain.h"

class Vinyl {
    public:
        Vinyl();
        void setImage (ofImage image);
        ofColor getPixel (ofPoint point);
        void drawVinyl ();
        void resizeWindow();
        void setOffsetX(float _offsetX);
        float w;
    private:
        unsigned char * something;
        void updateTexture();
    
        float vinylHeight;
        float h;
        float s;
    
        float offsetX = 0;
        float offXRatio;
        float offYRatio;
    
        GLfloat px0;
        GLfloat py0;
        GLfloat px1;
        GLfloat py1;
        GLfloat tx0;
        GLfloat ty0;
        GLfloat tx1;
        GLfloat ty1;
    
        ofImage vinylImage;
        ofMesh quad;
    
};

#endif /* defined(__refreq2__Vinyl__) */