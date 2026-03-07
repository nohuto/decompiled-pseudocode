NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  unsigned int v11; // r10d
  int wSuiteMask; // r11d
  int v13; // eax
  unsigned __int16 v14; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _BYTE v18[16]; // [rsp+30h] [rbp-D0h] BYREF
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
      v11 = 0;
      wSuiteMask = VersionInfo->wSuiteMask;
      do
      {
        if ( (wSuiteMask & (1 << v11)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v13 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
          if ( v13 )
          {
            if ( v13 != 1 )
              return -1073741811;
            if ( (VersionInformation[70] & v14) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformation[70] & v14) == 0 )
          {
            return -1073741735;
          }
        }
        ++v11;
      }
      while ( v11 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v18[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v10 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->dwMajorVersion,
                               VersionInformation[1],
                               (unsigned int)v18,
                               0) == 0;
      v8 = v18[0];
      if ( v10 )
      {
        if ( !v18[0] )
          return -1073741735;
      }
      else if ( !v18[0] )
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
    v10 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMinorVersion, VersionInformation[2], (unsigned int)v18, 1) == 0;
    v8 = v18[0];
    if ( v10 )
    {
      if ( !v18[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_8;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(
                            v9,
                            VersionInfo->wServicePackMajor,
                            LOWORD(VersionInformation[69]),
                            (unsigned int)v18,
                            0) )
    {
      v8 = v18[0];
LABEL_8:
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
                                   (unsigned int)v18,
                                   1) )
            return -1073741735;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v15 = (ConditionMask & 0x8000000000000000uLL) == 0LL
            ? BYTE2(ConditionMask)
            : RtlpVerGetConditionMask(ConditionMask, 4LL);
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v15,
                                 VersionInfo->dwBuildNumber,
                                 VersionInformation[3],
                                 (unsigned int)v18,
                                 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v17 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v17,
                                 VersionInfo->dwPlatformId,
                                 VersionInformation[4],
                                 (unsigned int)v18,
                                 0) )
          return -1073741735;
      }
      if ( v4 >= 0 )
        return 0;
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v16 = 0;
      else
        v16 = RtlpVerGetConditionMask(ConditionMask, 128LL);
      return (unsigned __int8)RtlpVerCompare(
                                v16,
                                VersionInfo->wProductType,
                                BYTE2(VersionInformation[70]),
                                (unsigned int)v18,
                                0) == 0
           ? 0xC0000059
           : 0;
    }
    if ( v18[0] )
      goto LABEL_9;
    return -1073741735;
  }
  return result;
}
