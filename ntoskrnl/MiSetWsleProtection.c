/*
 * XREFs of MiSetWsleProtection @ 0x1402296A0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r10

  MiGetWsleContents(a1, a2);
  return MiWriteValidPteVolatile(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
