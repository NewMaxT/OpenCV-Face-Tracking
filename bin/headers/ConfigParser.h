//
// Created by zenta on 02/04/2023.
//

#ifndef OPENCV_FACE_TRACKING_CONFIGPARSER_H
#define OPENCV_FACE_TRACKING_CONFIGPARSER_H

#include <fstream>

class ConfigParser {
private:
    std::ifstream configFile;
    char s_path[50] = {'\0'};

public:
    void setConfigPath(const char path[50]);
    ConfigParser(const char path[50]);
    ~ConfigParser();
};


#endif //OPENCV_FACE_TRACKING_CONFIGPARSER_H
