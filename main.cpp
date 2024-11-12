#include <iostream>
#include <map>
#include <string>
using namespace std;

// 定义武器属性的结构体
struct WeaponStats {
    double timeToKill;    // 躯干理论击杀时间（毫秒）
    double bulletsToKill; // 致死子弹数
    double damage;        // 每颗子弹的伤害
};

// 定义获取武器信息的函数
WeaponStats getWeaponStats(const string& weaponName, const map<string, WeaponStats>& weaponMap) {
    auto it = weaponMap.find(weaponName);
    if (it != weaponMap.end()) {
        return it->second; // 返回找到的武器数据
    } else {
        cout << "Weapon not found." << endl;
        return {-1, -1, -1}; // 返回一个指示未找到的值
    }
}

int main() {
    // 定义武器和对应的数值
    map<string, WeaponStats> weaponMap = {
        {"STG44", {750-1106, 9-12, 37.55-27.85}},      // 武器名称, {击杀时间, 致死子弹数, 每颗子弹的伤害}
        {"ASVAL", {550-800, 8-12, 40-28}},
        {"DTIR 30-06", {638-817, 6-8, 55.5-43.1}},
        {"Static-HV", {653-870, 10-13, 32.15-24.3}},
        {"Master's Shit", {1, 1, 999}},
    };

    string weaponName;
    cout << "Enter weapon name: ";
    cin >> weaponName;

    // 获取武器数值
    WeaponStats stats = getWeaponStats(weaponName, weaponMap);
    if (stats.timeToKill != -1) {
        cout << "Weapon: " << weaponName << endl;
        cout << "Time to Kill (ms): " << stats.timeToKill << endl;
        cout << "Bullets to Kill: " << stats.bulletsToKill << endl;
        cout << "Damage per Bullet: " << stats.damage << endl;
    }

    return 0;
}
