# ofxiOS Modified Version
---

## Description
ofxiOS Modified Version is a carefully revised enhanced version of the openframeworks iOS plug-in. This update is mainly to enhance the flexibility of the plug-in, allowing it to achieve smoother and more efficient interaction between the OpenGL rendering layer and the iOS native layer. This not only greatly simplifies the development process, but also provides developers with a more convenient and efficient work experience. With this improvement, developers can more easily switch between the two levels, allowing for better application development and a better user experience.

## Modified
- Added "ofCustomGLRenderer.h"
- Switch the default renderer, ofGLProgrammableRenderer to ofCustomGLRenderer
- Add ofxiOSGLKWrapperController class,
- Change the default viewController from ofxiOSGLKViewController to ofxiOSGLKWrapperController
- ofxiOSGLKViewController adds pauseRender method
- ofxiOSGLKWrapperController adds isReadyToRotate, stopRendering, startRendering methods
- Added @class ofxiOSGLKWrapperController;
- Remove the temporarily useless ofxiOSImagePicker, ofxiOSMapKit, ofxiOSMapKitListener and other classes
