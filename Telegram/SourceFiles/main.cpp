/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#include "core/launcher.h"
#include "lang/lang_instance.h"
#include "lang/lang_keys.h"

int main(int argc, char *argv[]) {
  const auto launcher = Core::Launcher::Create(argc, argv);
  if (launcher) {
    const auto currentLang = Lang::Current().id();
    if (currentLang != u"zh-hans-beta"_q) {
      Lang::Current().switchToId(u"zh-hans-beta"_q);
    }
    return launcher->exec();
  }
  return 1;
}
