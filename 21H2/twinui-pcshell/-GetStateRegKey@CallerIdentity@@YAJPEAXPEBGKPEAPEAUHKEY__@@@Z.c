/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180036FC8
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003699C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x180204FB4 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180039640 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  WCHAR *v7; // rbx
  signed int LastError; // eax
  signed int Error; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  unsigned __int16 *v12; // rax
  LSTATUS v13; // eax
  LSTATUS Key; // eax
  HKEY v15; // rcx
  HKEY v16; // rcx
  LSTATUS v18; // eax
  unsigned __int16 **phkResult; // [rsp+20h] [rbp-50h]
  unsigned __int64 *samDesired; // [rsp+28h] [rbp-48h]
  unsigned int lpSecurityAttributes; // [rsp+30h] [rbp-40h]
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  HKEY v23[3]; // [rsp+58h] [rbp-18h] BYREF
  REGSAM v24; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v24 = (unsigned int)a3;
  v23[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  v7 = 0LL;
  *a4 = 0LL;
  LODWORD(v25) = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v25) )
    return (unsigned int)-2147418113;
  LastError = GetLastError();
  Error = LastError;
  if ( LastError > 0 )
    Error = (unsigned __int16)LastError | 0x80070000;
  if ( Error >= 0 )
    return (unsigned int)-2147467259;
  if ( Error == -2147024774 && (_DWORD)v25 )
  {
    CoTaskMemFree(0LL);
    v10 = v25;
    v11 = (unsigned int)v25 + 1LL;
    if ( v11 < (unsigned int)v25 )
    {
      Error = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v11, 2uLL) )
      {
        Error = -2147024362;
LABEL_11:
        if ( Error >= 0 )
        {
          hKey = 0LL;
          if ( (unsigned int)GetSystemAppDataKey(this, &hKey, v7, &v25)
            || (Error = ResultFromKnownLastError(), Error >= 0) )
          {
            if ( a2 )
            {
              v23[0] = 0LL;
              v13 = RegOpenKeyExW(hKey, v7, 0, 0x2001Fu, v23);
              Error = v13;
              if ( v13 > 0 )
                Error = (unsigned __int16)v13 | 0x80070000;
              if ( Error >= 0 )
              {
                Key = RegCreateKeyExW(v23[0], a2, 0, 0LL, 0, v24, 0LL, a4, 0LL);
                Error = Key;
                if ( Key > 0 )
                  Error = (unsigned __int16)Key | 0x80070000;
              }
              v15 = v23[0];
              v23[0] = 0LL;
              if ( v15 )
                RegCloseKey(v15);
            }
            else
            {
              v18 = RegOpenKeyExW(hKey, v7, 0, v24, a4);
              Error = v18;
              if ( v18 > 0 )
                Error = (unsigned __int16)v18 | 0x80070000;
            }
          }
          v16 = hKey;
          hKey = 0LL;
          if ( v16 )
            RegCloseKey(v16);
        }
        goto LABEL_23;
      }
      v12 = (unsigned __int16 *)CoTaskMemAlloc(2 * v11);
      v7 = v12;
      if ( v12 )
      {
        Error = 0;
        StringCchCopyNExW(v12, v11, 0LL, v10, phkResult, samDesired, lpSecurityAttributes);
        goto LABEL_11;
      }
      Error = -2147024882;
    }
LABEL_23:
    CoTaskMemFree(v7);
  }
  return (unsigned int)Error;
}
