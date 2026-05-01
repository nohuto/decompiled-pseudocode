/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007870
 * Callers:
 *     HamQueryCallerTerminateReason @ 0x1800074B0 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007990 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x180007BD8 (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryRegistryTerminateReason(
        const unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  unsigned int v5; // edx
  int v6; // eax
  HKEY v7; // rdi
  signed int v8; // ebx
  LSTATUS v9; // eax
  DWORD cbData; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-154h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-150h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-148h] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-138h] BYREF

  v12 = 130;
  hKey = 0LL;
  HampUtilGetAumidFromPsmKey(a1, &v12, ValueName);
  v6 = HampUtilCreateVolatileUserRegKey(a2, v5, &hKey);
  v7 = hKey;
  v8 = v6;
  if ( v6 >= 0 )
  {
    cbData = 4;
    v9 = RegQueryValueExW(hKey, ValueName, 0LL, 0LL, Data, &cbData);
    v8 = v9;
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0xC0070000;
    if ( v8 >= 0 )
    {
      if ( *(_DWORD *)Data <= 0x1AFFu && cbData == 4 )
      {
        *(_DWORD *)a3 = *(_DWORD *)Data;
        v8 = 0;
      }
      else
      {
        v8 = -1073739509;
      }
    }
    else if ( v8 == -1073283070 )
    {
      *(_DWORD *)a3 = 0;
      v8 = 0;
    }
  }
  if ( v7 )
    RegCloseKey(v7);
  return (unsigned int)v8;
}
