# [3Engine](https://ricardoeprodrigues.github.io/3Engine/)

[![GitHub tag](https://img.shields.io/github/tag/RicardoEPRodrigues/3Engine.svg?style=flat-square)](https://github.com/RicardoEPRodrigues/3Engine/releases) [![Travis](https://img.shields.io/travis/RicardoEPRodrigues/3Engine.svg?style=flat-square)](https://travis-ci.org/RicardoEPRodrigues/3Engine) [![AppVeyor](https://ci.appveyor.com/api/projects/status/3kcxkyeddhu9qhuq?svg=true)](https://ci.appveyor.com/project/RicardoEPRodrigues/3engine)

Game Engine **3Engine** using OpenGL made for a class on *Computer Graphics for Games*.

Fun feature: uses JSON files for configuration with realtime change detection.

* [Dependencies](#dependencies)
* [Project](#project)
* [Building](#building)

---

## Dependencies

This project depends on OpenGL, GLEW and FreeGLUT. While the first is normally installed by default in most systems the latter libraries are not.

### Windows

The inclusion of the said libraries are needed, yet dependencies are ignored to reduce the size of the project. To get the project to run follow the steps.

1. Download precompiled builds for MSVC (or compile it yourself) 
        
    * [FreeGLUT](https://github.com/RicardoEPRodrigues/Dependencies/raw/master/freeglut-msvc.zip)
    * [GLEW](https://github.com/RicardoEPRodrigues/Dependencies/raw/master/glew-msvc.zip)

1. Create a folder named `dependencies` and place inside the libraries. Rename them as shown:

    * freeglut-msvc
    * glew-msvc

### Linux (Ubuntu)

Please open a terminal and run:

``` 
sudo apt install freeglut3-dev libglew-dev libxmu-dev libxi-dev
```

(This will only work on Debian/Ubuntu based systems, if anyone wants to give me the commands for other OSes)

## Project

This project is cross-platform, because of that there are two ways of opening and running the project.

### Windows

In Windows we created a Visual Studio Project. We recommend Visual Studio 2017 Community edition. To open the project just double-click the `3Engine.sln`.

We recommend the use of CMake, although we made it compatible with the Microsoft `sln` way.

To use CMake in Visual Studio you need to install the `Desktop development with C++` (`Visual Studio Installer > Modify of Install > Desktop development with C++`). After install open Visual Studio and click on `Solution Explorer > Solution and Folders`, this will change the solution explorer to a folder view of the project and automatically detects the `CMakeLists.txt`.

![Solution Explorer > Solution and Folders](https://image.ibb.co/cRn65b/Solutions_And_Folders.png)

### Linux

In Linux we created a CMake project and currently use CLion IDE. To open a project open the `CMakeLists.txt` file with CLion.

Note that you can use CMake and other IDE to run the project, yet it was only tested in CLion.

## Building

When build the project it's important to note that files are being copied to the build folder.

The default build folder is in 'bin' folder. **Windows** - `bin/x64`; **Linux** - `bin/debug`.

In Windows the `.dll` files from *FreeGLUT* and *GLEW* is copied to the build folder.

In all platforms JSON config files are copied from `config` folder to a same named folder on the build folder.