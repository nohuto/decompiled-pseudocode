/*
 * XREFs of RtlVerifyVersionInfo @ 0x14037D410
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140799B78 (WdipSemLoadScenarioTable.c)
 *     AslpFileGetVersionBlock @ 0x1407B33C4 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerGetConditionMask @ 0x14037D6B0 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x14037D6D0 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlGetVersion @ 0x14060AD10 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  unsigned int v10; // r10d
  int wSuiteMask; // r11d
  int v12; // r9d
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _BYTE v19[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  result = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInfo->wSuiteMask )
    {
      v10 = 0;
      wSuiteMask = VersionInfo->wSuiteMask;
      do
      {
        v12 = 1 << v10;
        if ( (wSuiteMask & (1 << v10)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            v13 = 0;
          else
            v13 = RtlpVerGetConditionMask(ConditionMask, 64LL);
          v14 = v13 - 6;
          if ( v14 )
          {
            if ( v14 != 1 )
              return -1073741811;
            if ( (VersionInformation[70] & (unsigned __int16)v12) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformation[70] & (unsigned __int16)v12) == 0 )
          {
            return -1073741735;
          }
        }
        ++v10;
      }
      while ( v10 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v19[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v15 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->dwMajorVersion,
                               VersionInformation[1],
                               (unsigned int)v19,
                               0) == 0;
      v8 = v19[0];
      if ( v15 )
      {
        if ( !v19[0] )
          return -1073741735;
      }
      else if ( !v19[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v15 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMinorVersion, VersionInformation[2], (unsigned int)v19, 1) == 0;
    v8 = v19[0];
    if ( v15 )
    {
      if ( !v19[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
        else
          v9 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->wServicePackMajor,
                               LOWORD(VersionInformation[69]),
                               (unsigned int)v19,
                               0) )
      {
        if ( !v19[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v19[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v9 = 0;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 VersionInfo->wServicePackMinor,
                                 HIWORD(VersionInformation[69]),
                                 (unsigned int)v19,
                                 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v17 = (ConditionMask & 0x8000000000000000uLL) == 0LL
          ? BYTE2(ConditionMask)
          : RtlpVerGetConditionMask(ConditionMask, 4LL);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v17,
                               VersionInfo->dwBuildNumber,
                               VersionInformation[3],
                               (unsigned int)v19,
                               0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v18 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(v18, VersionInfo->dwPlatformId, VersionInformation[4], (unsigned int)v19, 0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v16 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v16,
                               VersionInfo->wProductType,
                               BYTE2(VersionInformation[70]),
                               (unsigned int)v19,
                               0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
