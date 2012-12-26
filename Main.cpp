/* This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details. */

/*
 * http://www.trinitycore.org/f/topic/180-bin-truice-win32/
 * http://www.trinitycore.org/f/topic/7639-bin-truice-win32/
 * */

#include "Application.hpp"

int main(int argc, char* argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "DaHelpah");

    Application* _app = new Application();
    int retval = app->Run(_app);
    delete _app;

    return retval;
}
