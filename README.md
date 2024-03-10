# ofxiOS Modified Version
---

## Description
ofxiOS is an Open Frameworks addon for the Xbox Kinect that runs on Mac OSX, Linux, and Windows.
OpenFrameworks is a cross platform open source toolkit for creative coding in C++.

[http://www.openframeworks.cc/](http://www.openframeworks.cc/)

#### NOTE: Xbox Kinect models > 1414 (1473, etc) or Kinect4Windows devices that have been plugged into an XBox will not work with ofxiOS on  Mac OSX

If you have an Xbox Kinect model 1473+ or Kinect4Windows device and want to use it with ofxiOS on OSX, DO NOT plug it into an XBox! If you do, it will receive a firmware update which will cause it to freeze after about 20 secs with libfreenect/ofxiOS on OSX. Linux and Windows are fine. The [fix is in the works](https://github.com/OpenKinect/libfreenect/pull/325).

In the meantime, we suggest you get the *original* Xbox Kinect model 1414 and keep those new toys away from an XBox ...

