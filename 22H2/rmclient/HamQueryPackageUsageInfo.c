/*
 * XREFs of HamQueryPackageUsageInfo @ 0x180011160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 *     HampUsageInfoRegistryQuery @ 0x180011990 (HampUsageInfoRegistryQuery.c)
 *     ?HampUsageInfoMergeVectors@@YA?AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z @ 0x180011ECC (-HampUsageInfoMergeVectors@@YA-AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z.c)
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x180011FF8 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HamQueryPackageUsageInfo(const unsigned __int16 *a1, void *a2, _OWORD *a3)
{
  int v4; // ebx
  LSTATUS v5; // eax
  DWORD v6; // r14d
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h]
  __int128 v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+88h] [rbp-78h] BYREF
  __int128 v18; // [rsp+98h] [rbp-68h]
  _BYTE v19[40]; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR Name[72]; // [rsp+D0h] [rbp-30h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v4 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
  if ( v4 >= 0 )
  {
    v5 = RegOpenKeyExW(hKey, L"HAM\\AUI", 0, 8u, &phkResult);
    v4 = v5;
    if ( v5 > 0 )
      v4 = (unsigned __int16)v5 | 0xC0070000;
    if ( v4 >= 0 )
    {
      v6 = 0;
      v17 = 0xFFFFFFFFFFFFFFFFuLL;
      v18 = 0xFFFFFFFFFFFFFFFFuLL;
      cchName = 65;
      v4 = RegEnumKeyExW(phkResult, 0, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v4 == 259 )
      {
        v10 = v18;
        v9 = v17;
LABEL_13:
        *a3 = v9;
        v4 = 0;
        a3[1] = v10;
      }
      else
      {
        while ( !v4 )
        {
          v4 = HampUsageInfoRegistryQuery(phkResult, Name, v19);
          if ( v4 < 0 )
            goto LABEL_14;
          v7 = (__int128 *)HampUsageInfoMergeVectors(&v16, &v17, v19);
          ++v6;
          v15 = *v7;
          v17 = v15;
          v8 = v7[1];
          cchName = 65;
          v16 = v8;
          v18 = v8;
          v4 = RegEnumKeyExW(phkResult, v6, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
          if ( v4 == 259 )
          {
            v9 = v15;
            v10 = v16;
            goto LABEL_13;
          }
        }
        if ( v4 > 0 )
          v4 = (unsigned __int16)v4 | 0xC0070000;
      }
    }
  }
LABEL_14:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
