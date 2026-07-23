/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x1402653A0
 * Callers:
 *     RtlpControlFlowGuardEnforced @ 0x140265380 (RtlpControlFlowGuardEnforced.c)
 *     HvlGetEnlightenmentInfo @ 0x1404F4FB0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA344 (HvlpDetermineEnlightenments.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x140798CF0 (PsLocateSystemDlls.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 *     KiAreCodePatchesAllowed @ 0x140A74EA0 (KiAreCodePatchesAllowed.c)
 *     KiIsKernelCfgActive @ 0x140A751DC (KiIsKernelCfgActive.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  __int64 v0; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  _DWORD v9[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  if ( (unsigned __int8)HvlQueryVsmConnection(0LL) )
  {
    if ( VslpNestedPageProtectionFlags == (_DWORD)v0 )
    {
      LOBYTE(v0) = 2;
      if ( (int)VslpEnterIumSecureMode(v0, 249LL, 0LL, v9) >= 0 )
      {
        v2 = (2 * (v9[4] & 1) + 4) | 0x20;
        if ( (v9[4] & 2) == 0 )
          v2 = 2 * (v9[4] & 1) + 4;
        v3 = v2 | 0x10;
        if ( (v9[4] & 4) != 0 )
          v3 = v2;
        v4 = v3 | 0x40;
        if ( (v9[4] & 8) == 0 )
          v4 = v3;
        v5 = v4 | 0x80;
        if ( (v9[4] & 0x10) == 0 )
          v5 = v4;
        v6 = v5 | 0x100;
        if ( (v9[4] & 0x20) == 0 )
          v6 = v5;
        v7 = v6 | 0x200;
        if ( (v9[4] & 0x40) == 0 )
          v7 = v6;
        v8 = v7 | 0x400;
        if ( (v9[4] & 0x80) == 0 )
          v8 = v7;
        VslpNestedPageProtectionFlags = v8;
      }
    }
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
