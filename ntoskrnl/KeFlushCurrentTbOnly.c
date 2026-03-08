/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403876F4
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140AA8EFC (MiConvertHiberPhasePages.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140B4F414 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x1403B8390 (KiFlushCurrentTbOnly.c)
 *     HvlFlushAddressSpaceTb @ 0x1403C6A88 (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1403C8E3C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiIsFlushEntire @ 0x140457F9C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056FB44 (KiPrepareFlushCurrentAffinity.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v5; // [rsp+28h] [rbp-130h] BYREF
  _BYTE v6[272]; // [rsp+30h] [rbp-128h] BYREF

  v5 = 0LL;
  memset(v6, 0, 0x108uLL);
  v4[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  KiPrepareFlushParameters(a1, &v5, v4);
  KiPrepareFlushCurrentAffinity(v6);
  LOBYTE(v3) = v4[0];
  return HvlFlushAddressSpaceTb(v5, v6, v3);
}
