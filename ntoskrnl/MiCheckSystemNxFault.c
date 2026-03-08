/*
 * XREFs of MiCheckSystemNxFault @ 0x1402EB3C8
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140222830 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x1402DA4D0 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
