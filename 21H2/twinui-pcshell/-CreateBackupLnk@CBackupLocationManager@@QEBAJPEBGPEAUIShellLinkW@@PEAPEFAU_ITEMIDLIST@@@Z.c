/*
 * XREFs of ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x1801540AC
 * Callers:
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180155AA8 (-GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015EA74 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18015F774 (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBackupLocationManager::CreateBackupLnk(
        CBackupLocationManager *this,
        char *a2,
        struct IShellLinkW *a3,
        struct _ITEMIDLIST **a4)
{
  int BackupPath; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned __int16 *v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  WCHAR pszDir[264]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pszPath[264]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+3A8h]

  *a4 = 0LL;
  v15 = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  v14[1] = (unsigned __int16 *)-1LL;
  v15 = -1LL;
  BackupPath = CBackupLocationManager::GetBackupPath(this, v14);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3416LL;
LABEL_17:
    v11 = (unsigned int)BackupPath;
    goto LABEL_18;
  }
  BackupPath = StringCchCopyW((char *)pszDir, 260LL, (char *)v14[0]);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3419LL;
    goto LABEL_17;
  }
  BackupPath = StringCchCopyW((char *)pszPath, 260LL, a2);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3422LL;
    goto LABEL_17;
  }
  BackupPath = PathCchAppend(pszPath, 0x104uLL, L".lnk");
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3423LL;
    goto LABEL_17;
  }
  if ( PathCleanupSpec(pszDir, pszPath) >= 0 )
  {
    BackupPath = PathCchAppend(pszDir, 0x104uLL, pszPath);
    v9 = BackupPath;
    if ( BackupPath >= 0 )
    {
      BackupPath = CBackupLocationManager::s_ShouldCreateNewFile(pszDir, v12);
      v9 = BackupPath;
      if ( BackupPath >= 0 )
      {
        BackupPath = CBackupLocationManager::_PersistLnk(this, a3, pszDir, a4);
        v9 = BackupPath;
        if ( BackupPath >= 0 )
        {
          v9 = 0;
          goto LABEL_20;
        }
        v10 = 3427LL;
      }
      else
      {
        v10 = 3426LL;
      }
    }
    else
    {
      v10 = 3425LL;
    }
    goto LABEL_17;
  }
  v9 = -2147467259;
  v11 = 2147500037LL;
  v10 = 3424LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v11);
LABEL_20:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  return v9;
}
