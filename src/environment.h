/* **************************************************************************
 * This file is part of Timothy
 *
 * Copyright (c) 2014/15 Maciej Cytowski
 * Copyright (c) 2014/15 ICM, University of Warsaw, Poland
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * *************************************************************************/

 void environment_allocate(systeminfo_t systeminfo,settings_t settings,grid_t grid,environment_t **environment,solverdata_t *solverdata,solversettings_t *solversettings);
 void environment_init(systeminfo_t systeminfo,settings_t settings,grid_t grid,environment_t **environment);
 void environment_initsystem(systeminfo_t systeminfo,settings_t settings,grid_t *grid,environment_t **environment,solverdata_t *solverdata,solversettings_t *solversettings);
 void environment_compute(systeminfo_t systeminfo,settings_t settings,grid_t *grid,environment_t **environment, solverdata_t *solverdata,solversettings_t *solversettings);
