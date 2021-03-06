// Copyright 2017 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <QCheckBox>

class MappingWidget;

namespace ControllerEmu
{
class BooleanSetting;
};

class MappingBool : public QCheckBox
{
public:
  MappingBool(MappingWidget* widget, ControllerEmu::BooleanSetting* setting);

private:
  void ConfigChanged();

  ControllerEmu::BooleanSetting& m_setting;
};
