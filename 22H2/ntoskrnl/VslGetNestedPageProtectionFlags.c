/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14033FE30
 * Callers:
 *     RtlpControlFlowGuardEnforced @ 0x14033FE10 (RtlpControlFlowGuardEnforced.c)
 *     HvlGetEnlightenmentInfo @ 0x140544060 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x140801B58 (PsLocateSystemDlls.c)
 *     MmInitSystem @ 0x140B47AB4 (MmInitSystem.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     KiIsKernelCfgActive @ 0x140B76EA8 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x140B968F0 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14033FE98 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  int v0; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  _DWORD v11[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v11, 0, 0x68uLL);
  if ( (unsigned __int8)HvlQueryVsmConnection(0LL)
    && VslpNestedPageProtectionFlags == v0
    && (int)VslpEnterIumSecureMode(2u, 249, 0, (__int64)v11) >= 0 )
  {
    v2 = (2 * (v11[4] & 1) + 4) | 0x20;
    if ( (v11[4] & 2) == 0 )
      v2 = 2 * (v11[4] & 1) + 4;
    v3 = v2 | 0x10;
    if ( (v11[4] & 4) != 0 )
      v3 = v2;
    v4 = v3 | 0x40;
    if ( (v11[4] & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x80;
    if ( (v11[4] & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v11[4] & 0x20) == 0 )
      v6 = v5;
    v7 = v6 | 0x200;
    if ( (v11[4] & 0x40) == 0 )
      v7 = v6;
    v8 = v7 | 0x400;
    if ( SLOBYTE(v11[4]) >= 0 )
      v8 = v7;
    v9 = v8 | 0x800;
    if ( (v11[4] & 0x100) == 0 )
      v9 = v8;
    v10 = v9 | 0x1000;
    if ( (v11[4] & 0x200) == 0 )
      v10 = v9;
    VslpNestedPageProtectionFlags = v10;
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
