#include "ImplementationUtils.h"

std::string ImplementationUtils::getWorkingDirectory(const std::string &argvZero) {
    std::string directory(argvZero);
    std::string execName("editor");

    directory.erase(directory.size() - execName.size(), execName.size());

    return directory;
}