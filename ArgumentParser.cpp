/**
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
 */

#include "ArgumentParser.h"

#include <cstdlib>
#include <cstring>

ArgumentParser::ArgumentParser(int argc, char* argv[])
{
	m_argc = argc;
	m_argv = argv;
}

bool ArgumentParser::is(char *s)
{
	for(int i=0; i<m_argc; i++) {
		if(strcmp(m_argv[i], s) == 0) {
			return true;
		}
	}
	return false;
}

char *ArgumentParser::getStr(char *s, char *defaultValue)
{
	for(int i=0; i<m_argc; i++) {
		if(strcmp(m_argv[i], s) == 0 && m_argc > i+1) {
			return m_argv[i+1];
		}
	}
	return defaultValue;
}

int ArgumentParser::getInt(char *s, int defaultValue)
{
	for(int i=0; i<m_argc; i++) {
		if(strcmp(m_argv[i], s) == 0 && m_argc > i+1) {
			return atoi(m_argv[i+1]);
		}
	}

	return defaultValue;
}

float ArgumentParser::getFloat(char *s, float defaultValue)
{
	for(int i=0; i<m_argc; i++) {
		if(strcmp(m_argv[i], s) == 0 && m_argc > i+1) {
			return (float)atof(m_argv[i+1]);
		}
	}

	return defaultValue;
}
