#ifndef UNPIGIFY_H
#define UNPIGIFY_H

#include <string>
#include <vector>

std::string unpigifyWord(const std::string &word);
std::string unpigifySentence(std::string &InputSentence, std::map<std::string, std::string> dictionary);

#endif