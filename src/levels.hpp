#pragma once
#include <vector>
#include <string>

struct WorldLevel {
    int levelID;
    float x, y;
    int order;
    std::string authorName;
    int accountID;
    int userID;
};

inline std::vector<WorldLevel> getWorldLevels(float width, float height) {
    return {
        {3155, width * 0.25f, height * 0.80f - 60.f,  1, "vaax", 318, 438},
        {130, width * 0.25f, height * 0.65f - 60.f,  2, "cody", 36, 136},
        {1078, width * 0.35f, height * 0.55f - 60.f,  3, "vaax", 318, 438},
        {1017, width * 0.45f, height * 0.50f - 60.f,  4, "vaax", 318, 438},
        {925, width * 0.55f, height * 0.52f - 60.f,  5, "zc22799gmd", 353, 465},
        {3040, width * 0.65f, height * 0.60f - 60.f,  6, "skypulse", 1356, 1476},
        {590, width * 0.72f, height * 0.70f - 60.f,  7, "Masckmaster OG", 1, 1},
        {33, width * 0.65f, height * 0.80f - 60.f,  8, "AlexEEZ", 3, 3},
        {1725,  width * 0.57f, height * 0.70f - 40.f,  9, "Cows664", 684, 729},
        {1035, width / 2, height / 2, 10, "vaax", 318, 438}
    };
}