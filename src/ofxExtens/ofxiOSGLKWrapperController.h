#ifndef ofxiOSGLKWrapperController_h
#define ofxiOSGLKWrapperController_h

#pragma once

#import <UIKit/UIKit.h>
#include <TargetConditionals.h>
#include "ofxiOSGLKViewController.h"

class ofxiOSApp;
@class ofxiOSEAGLView;

@interface ofxiOSGLKWrapperController : UIViewController

@property (nonatomic, retain) ofxiOSEAGLView * glView;
@property (nonatomic, retain) ofxiOSGLKViewController * glController;

+ (ofxiOSGLKWrapperController *) getInstance;

- (id)initWithFrame:(CGRect)frame app:(ofxiOSApp *)app;
- (id)initWithFrame:(CGRect)frame app:(ofxiOSApp *)app sharegroup:(EAGLSharegroup *)sharegroup;

- (UIInterfaceOrientation)currentInterfaceOrientation;
- (void)setCurrentInterfaceOrientation:(UIInterfaceOrientation) orient;
- (BOOL)isReadyToRotate;
- (void)stopRendering;
- (void)startRendering;

@end

#endif
