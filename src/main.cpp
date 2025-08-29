
#include "engine/core/game_app.h"
#include <spdlog/spdlog.h>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif // WIN32


int main(int /* argc */, char* /* argv */[]) {

#if defined(_WIN32) || defined(_WIN64)
	SetConsoleOutputCP(CP_UTF8);
#endif // WIN32

    spdlog::set_level(spdlog::level::debug);

    engine::core::GameApp app;
    app.run();
    return 0;
}