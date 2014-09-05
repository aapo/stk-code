//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2011-2013  Joerg Henrichs, Marianne Gagnon
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_WEATHER_HPP
#define HEADER_WEATHER_HPP

class SFXBase;

class Weather
{
    bool m_lightning;
    float m_next_lightning;

    SFXBase* m_thunder_sound;
    SFXBase* m_weather_sound;

public:
    Weather(bool lightning, std::string sound);
    virtual ~Weather();

    void update(float dt);
    void playSound();
};

#endif