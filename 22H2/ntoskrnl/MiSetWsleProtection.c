/*
 * XREFs of MiSetWsleProtection @ 0x140216EE0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FD0 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140217040 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiSetWsleProtection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10

  MiGetWsleContents(a1, a2, a3, (unsigned int)a3);
  return MiWriteValidPteVolatile(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
