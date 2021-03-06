/*
    Copyright (C) 2003, 2011  John Darrington

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License,  or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DIALOGS_H
#define DIALOGS_H

#include <gtk/gtk.h>
#include "cube.h"
#include "game.h"

struct preferences_state;

void request_new_game (GtkAction * act, struct preferences_state *ps);

void about_dialog (GtkWidget * w, GtkWindow *);

void new_game_dialog (GtkWidget * w, GbkGame * game);


#endif
