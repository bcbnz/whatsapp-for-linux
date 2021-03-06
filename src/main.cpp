#include "MainWindow.hpp"
#include "Config.hpp"


int main(int argc, char** argv)
{
    auto const app = Gtk::Application::create(argc, argv, {});

    auto const refBuilder = Gtk::Builder::create_from_file(uiDir / "MainWindow.ui");

    MainWindow* mainWindow = nullptr;
    refBuilder->get_widget_derived("main_window", mainWindow);

    return app->run(*mainWindow);
}