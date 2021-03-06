/**************************************************************************
* Copyright (C) 2011,2013-2014,2017 Dr. Bogdan Tanygin<b.m.tanygin@gmail.com>
* All rights reserved.
* 
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*************************************************************************/

typedef struct {
    double r,g,b,a;
} ff_color4f_t;

void ff_mgr_init(void);

void ff_mgr_print_info(void);

void ff_mgr_show_next_step(void);

extern int show_m, show_b, show_bext, show_droplet, show_info, show_cube;
extern double scaling_cube;
extern long gr_quality;
extern double gr_x0, gr_y0, gr_z0;

extern int transp;

extern int show_sphere;
extern int show_steric;

extern double space_k;

