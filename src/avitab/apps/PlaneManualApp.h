/*
 *   AviTab - Aviator's Virtual Tablet
 *   Copyright (C) 2018 Folke Will <folko@solhost.org>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Affero General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Affero General Public License for more details.
 *
 *   You should have received a copy of the GNU Affero General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef SRC_AVITAB_APPS_PLANEMANUALAPP_H_
#define SRC_AVITAB_APPS_PLANEMANUALAPP_H_

#include <vector>
#include "App.h"
#include "src/platform/Platform.h"
#include "src/gui_toolkit/widgets/MessageBox.h"
#include "components/FilesysBrowser.h"

namespace avitab {

class PlaneManualApp: public App {
public:
    PlaneManualApp(FuncsPtr appFuncs);
    void show() override;
    void onMouseWheel(int dir, int x, int y) override;
private:
    std::string currentAircraft;
    std::shared_ptr<MessageBox> errorMsg;
    std::string currentPath;
    FilesystemBrowser fsBrowser;
    std::shared_ptr<App> childApp;

    void showFileSelect();
    void onSelect(const std::vector<platform::DirEntry> &entries, size_t chosenIndex);
    void onSelectionClosed();

    void showAircraftFolder();
};

} /* namespace avitab */

#endif /* SRC_AVITAB_APPS_PLANEMANUALAPP_H_ */
