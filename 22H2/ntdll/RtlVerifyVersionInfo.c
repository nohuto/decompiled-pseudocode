/*
 * XREFs of RtlVerifyVersionInfo @ 0x18007B0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18003CF80 (RtlpVerCompare.c)
 *     RtlGetVersion @ 0x18003E4E0 (RtlGetVersion.c)
 *     RtlpVerGetConditionMask @ 0x18007B308 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  bool v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // r10d
  int wSuiteMask; // r11d
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&VersionInformationa.dwMajorVersion, 0, 0x118uLL);
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInformation->wSuiteMask )
    {
      v12 = 0;
      wSuiteMask = VersionInformation->wSuiteMask;
      do
      {
        v14 = 1 << v12;
        if ( (wSuiteMask & (1 << v12)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            v15 = 0;
          else
            v15 = RtlpVerGetConditionMask(ConditionMask, 64LL);
          v16 = v15 - 6;
          if ( v16 )
          {
            if ( v16 != 1 )
              return -1073741811;
            if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) == 0 )
          {
            return -1073741735;
          }
        }
        ++v12;
      }
      while ( v12 < 0x10 );
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
      v11 = !RtlpVerCompare(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v19, 0);
      v8 = v19[0];
      if ( v11 )
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
    v11 = !RtlpVerCompare(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v19, 1);
    v8 = v19[0];
    if ( v11 )
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
      if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v19, 0) )
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
        if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMinor, VersionInformationa.wServicePackMinor, v19, 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v17 = (ConditionMask & 0x8000000000000000uLL) != 0LL
          ? RtlpVerGetConditionMask(ConditionMask, 4LL)
          : BYTE2(ConditionMask);
      if ( !RtlpVerCompare(v17, VersionInformation->dwBuildNumber, VersionInformationa.dwBuildNumber, v19, 0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v18 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
      if ( !RtlpVerCompare(v18, VersionInformation->dwPlatformId, VersionInformationa.dwPlatformId, v19, 0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v10 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
      if ( !RtlpVerCompare(v10, VersionInformation->wProductType, VersionInformationa.wProductType, v19, 0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
