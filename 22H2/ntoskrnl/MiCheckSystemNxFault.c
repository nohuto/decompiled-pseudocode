/*
 * XREFs of MiCheckSystemNxFault @ 0x140356E88
 * Callers:
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140261810 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x1403416F0 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1406464DC (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
