/*
 * Copyright (c) 2014, AirBitz, Inc.
 * All rights reserved.
 *
 * See the LICENSE file for more information.
 */
/**
 * @file
 * Storage backend for login data.
 */

#ifndef ABC_LoginDir_h
#define ABC_LoginDir_h

#include "LoginPackages.hpp"
#include "../util/Status.hpp"
#include "../../src/ABC.h"
#include <list>
#include <string>

namespace abcd {

/**
 * List all the accounts currently on the device.
 */
std::list<std::string>
loginDirListUsers();

tABC_CC ABC_LoginDirGetName(const char *szUserName,
                            std::string &directory,
                            tABC_Error *pError);

tABC_CC ABC_LoginDirCreate(std::string &directory,
                           const char *szUserName,
                           tABC_Error *pError);

tABC_CC ABC_LoginDirFileLoad(char **pszData,
                             const std::string &directory,
                             const char *szFile,
                             tABC_Error *pError);

tABC_CC ABC_LoginDirFileSave(const char *szData,
                             const std::string &directory,
                             const char *szFile,
                             tABC_Error *pError);

tABC_CC ABC_LoginDirFileExists(bool *pbExists,
                               const std::string &directory,
                               const char *szFile,
                               tABC_Error *pError);

tABC_CC ABC_LoginDirFileDelete(const std::string &directory,
                               const char *szFile,
                               tABC_Error *pError);

tABC_CC ABC_LoginDirLoadPackages(const std::string &directory,
                                 tABC_CarePackage **ppCarePackage,
                                 tABC_LoginPackage **ppLoginPackage,
                                 tABC_Error *pError);

tABC_CC ABC_LoginDirSavePackages(const std::string &directory,
                                 tABC_CarePackage *pCarePackage,
                                 tABC_LoginPackage *pLoginPackage,
                                 tABC_Error *pError);

tABC_CC ABC_LoginDirGetSyncDir(const std::string &directory,
                               char **pszDirName,
                               tABC_Error *pError);

tABC_CC ABC_LoginDirMakeSyncDir(const std::string &directory,
                                char *szSyncKey,
                                tABC_Error *pError);

} // namespace abcd

#endif