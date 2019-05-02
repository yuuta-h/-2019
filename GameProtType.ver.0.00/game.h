#pragma once
#ifndef _GAME_H_
#define _GAME_H_


#include "main.h"

enum SceneList {
	TITLE,
	//////////////// 樋沼追加
	SELECT_MODE,
	CHOOSE_STAGE,
	//////////////// ここまで
	STAGE,
	RESULT,
	SCENE_NUM,
};

//　樋沼追加
int *getScene();
//　ここまで

void initializeGame();
void updateGame();
void drawGame();
void printGame();
void unInitializeGame();
void changeScene();

#endif