/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x140294CC0
 * Callers:
 *     RtlpControlFlowGuardEnforced @ 0x140294CA4 (RtlpControlFlowGuardEnforced.c)
 *     HvlGetEnlightenmentInfo @ 0x140546B70 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x1408455C8 (PsLocateSystemDlls.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 *     KiIsKernelCfgActive @ 0x140B315A4 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x140B50F00 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  __int64 v0; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _DWORD v10[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x68uLL);
  if ( (unsigned __int8)HvlQueryVsmConnection(0LL) )
  {
    if ( VslpNestedPageProtectionFlags == (_DWORD)v0 )
    {
      LOBYTE(v0) = 2;
      if ( (int)VslpEnterIumSecureMode(v0, 249LL, 0LL, v10) >= 0 )
      {
        v2 = (2 * (v10[4] & 1) + 4) | 0x20;
        if ( (v10[4] & 2) == 0 )
          v2 = 2 * (v10[4] & 1) + 4;
        v3 = v2 | 0x10;
        if ( (v10[4] & 4) != 0 )
          v3 = v2;
        v4 = v3 | 0x40;
        if ( (v10[4] & 8) == 0 )
          v4 = v3;
        v5 = v4 | 0x80;
        if ( (v10[4] & 0x10) == 0 )
          v5 = v4;
        v6 = v5 | 0x100;
        if ( (v10[4] & 0x20) == 0 )
          v6 = v5;
        v7 = v6 | 0x200;
        if ( (v10[4] & 0x40) == 0 )
          v7 = v6;
        v8 = v7 | 0x400;
        if ( (v10[4] & 0x80) == 0 )
          v8 = v7;
        v9 = v8 | 0x800;
        if ( (v10[4] & 0x100) == 0 )
          v9 = v8;
        VslpNestedPageProtectionFlags = v9;
      }
    }
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
