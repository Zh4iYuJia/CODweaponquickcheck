# COD Weapon Quick Check

## 项目简介
COD Weapon Quick Check 是一个用于查询 Call of Duty 游戏中武器信息的简单工具。用户可以通过输入武器名称，快速获取该武器的数值数据，包括躯干理论击杀时间、致死子弹数和伤害等。
点击此处查看版本更新说明https://github.com/Zh4iYuJia/CODweaponquickcheck/blob/main/%E7%89%88%E6%9C%AC%E7%89%B9%E6%80%A7.md

## 功能特性
- 输入武器名称，获取对应的武器数值信息
- 包含以下信息：
  - 躯干理论击杀时间
  - 致死子弹数
  - 武器伤害

## 安装与运行

### 1. 克隆仓库
使用以下命令将本项目克隆到本地：

```bash
git clone https://github.com/Zh4iYuJia/CODweaponquickcheck.git
cd CODweaponquickcheck
```
### 2. 编译项目
确保你已安装了 C++ 编译器。进入项目文件夹后，使用以下命令编译：

```bash
g++ main.cpp -o weapon_check
```
### 3. 运行程序
编译完成后，运行以下命令启动程序：

```bash
./weapon_check
```
### 4. 使用方法
启动程序后，输入武器名称并按下回车，程序会返回该武器的数值信息。

示例输入输出：
```bash
复制代码
请输入武器名称：AK47
武器名称：AK47
理论击杀时间：0.45 秒
致死子弹数：4
伤害：34
```
贡献指南
欢迎提交 Issue 或 Pull Request，为项目的改进和新特性贡献力量。请在提交 PR 前确保代码通过基本测试，并遵循一致的代码风格。
