/**
 * @file Utils.h
 * @brief Header file of Utils.
 *		  This file contains common functions and enums used by app.
 * 
 * @author Hrishikesh Hiraskar <hrishihiraskar@gmail.com>
 */

#ifndef _UTILS_H_
#define _UTILS_H_

#include <AppKit.h>
#include <SupportKit.h>

#include <vector.h>

enum {
	kQuitWindow,
	kClone,
	kInitHere,
	kStatus,
	kAdd,
	kAddAll
};


/**
 * The addon name. Will be used in menu item.
 */
#define ADDON_NAME "TrackGit"

/**
 * The Application signature.
 */
#define APP_SIGN "application/x-vnd.Haiku-TrackGit"

void extract_selected_paths(const BMessage* msg,
		vector<char*>& selected);
BString extract_current_directory(const BMessage* msg);
BString get_root_of_repo(BString dirPath);

#endif