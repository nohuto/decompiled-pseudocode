/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x140A5713C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A517D0 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140A52348 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140A523F4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A530B0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvVerifyGuestProcessorSupport @ 0x140A57760 (AslEnvVerifyGuestProcessorSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  int SystemInformation; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    if ( a2 )
    {
      SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v8);
      if ( SystemInformation < 0 )
        goto LABEL_3;
      *a2 = v8;
    }
    return 0;
  }
  SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v6);
  if ( SystemInformation >= 0 )
  {
    *a1 = v6;
    goto LABEL_5;
  }
LABEL_3:
  AslLogCallPrintf(1LL);
  return (unsigned int)SystemInformation;
}
