#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdint.h>
#include <vector>
#include <bitset>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <time.h>

using namespace std;
uint8_t hammingDistance(uint8_t n1, uint8_t n2);
void makeFile(const string nameFile, const int x, const char value);
void Compare(const char* File1, const char* File2);
void makeRandom(const string nameFile, const int x, const char value1, const char value2);
