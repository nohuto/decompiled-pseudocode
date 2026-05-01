/*
 * XREFs of ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015DCCC
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154294 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015D5AC (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18015F384 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18015F774 (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 */

__int64 __fastcall CBackupLocationManager::_DuplicateShortcut(
        PCWSTR *this,
        char *a2,
        char *a3,
        struct _ITEMIDLIST **a4)
{
  int NewFile; // ebx
  const WCHAR *FileNameW; // rax
  unsigned int v10; // edx
  bool v11; // sf
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-D0h] BYREF
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszName[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pszPath[264]; // [rsp+280h] [rbp+180h] BYREF

  memset_0(pszPath, 0, 0x20AuLL);
  NewFile = StringCchCopyW((char *)pszPath, 260LL, a2);
  if ( NewFile < 0 )
    return (unsigned int)NewFile;
  memset_0(pszName, 0, 0x20AuLL);
  NewFile = StringCchCopyW((char *)pszName, 260LL, a3);
  if ( NewFile >= 0 )
  {
    FileNameW = PathFindFileNameW(pszPath);
    NewFile = PathCchAppend(pszName, 0x104uLL, FileNameW);
    if ( NewFile >= 0 )
    {
      NewFile = SHParseDisplayName((PCWSTR)a2, 0LL, &ppidl, 0, 0LL);
      if ( NewFile >= 0 )
      {
        NewFile = CBackupLocationManager::s_ShouldCreateNewFile(pszName, v10);
        ILFree(ppidl);
      }
    }
  }
  v11 = NewFile < 0;
  if ( NewFile )
    goto LABEL_11;
  FileOp.pFrom = pszPath;
  FileOp.pTo = pszName;
  *(_OWORD *)&FileOp.hwnd = 0LL;
  FileOp.wFunc = 2;
  memset(&FileOp.fFlags, 0, 24);
  FileOp.fFlags = 1556;
  if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
  {
    NewFile = -2147467259;
    v11 = 1;
LABEL_11:
    if ( v11 )
      return (unsigned int)NewFile;
    goto LABEL_12;
  }
  CBackupLocationManager::s_CopyLocalizedName((const unsigned __int16 *)a2, pszName);
LABEL_12:
  NewFile = CBackupLocationManager::_CreateKnownFolderPidl(this, pszName, a4);
  if ( NewFile < 0 )
    return (unsigned int)SHParseDisplayName(pszName, 0LL, a4, 0, 0LL);
  return (unsigned int)NewFile;
}
