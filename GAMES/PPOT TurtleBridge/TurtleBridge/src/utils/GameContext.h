#pragma once

/*
  Copyright (C) 2018 Pharap (@Pharap)

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  Modified by Filmote and Vampirics
*/

#include "Arduboy2Ext.h"
#include "Enums.h"
#include <ArduboyTones.h>

extern ArduboyTones sound;

class GameContext {

  public:

    GameStateType gameState;
    GameStateType nextState;
    Arduboy2Ext arduboy;
    //ArduboyTonesExt sound;
    GameStats gameStats;

    GameContext();
    void resetGame();
    GameStateType getCurrentState();

};