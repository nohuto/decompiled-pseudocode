/*
 * XREFs of ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x18015E3FC
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154474 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180157B34 (-GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBackupLocationManager::_GetTombstoneShortcutLocation(PCWSTR *this, LPCWSTR pszPath, char *a3)
{
  int TombstonePath; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  const WCHAR *FileNameW; // rax
  HRESULT v11; // eax
  unsigned __int16 *v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h]
  WCHAR pszPatha[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v14 = 0LL;
  v13[0] = 0LL;
  v13[1] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
  v13[1] = (unsigned __int16 *)-1LL;
  v14 = -1LL;
  TombstonePath = CBackupLocationManager::GetTombstonePath(this, v13);
  v7 = TombstonePath;
  if ( TombstonePath >= 0 )
  {
    StringCchCopyW((char *)pszPatha, 260LL, (char *)v13[0]);
    FileNameW = PathFindFileNameW(pszPath);
    v11 = PathCchAppend(pszPatha, 0x104uLL, FileNameW);
    v7 = v11;
    if ( v11 >= 0 )
    {
      if ( PathYetAnotherMakeUniqueName(pszPatha, pszPatha, 0LL, 0LL) )
      {
        StringCchCopyW(a3, 261LL, (char *)pszPatha);
        v7 = 0;
        goto LABEL_9;
      }
      v7 = -2147467259;
      v8 = 2147500037LL;
      v9 = 2727LL;
    }
    else
    {
      v8 = (unsigned int)v11;
      v9 = 2725LL;
    }
  }
  else
  {
    v8 = (unsigned int)TombstonePath;
    v9 = 2722LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v8);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
  return v7;
}
