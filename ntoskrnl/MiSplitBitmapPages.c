/*
 * XREFs of MiSplitBitmapPages @ 0x14036C1A8
 * Callers:
 *     MiExpandPtes @ 0x140210210 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403A5570 (MiExtendDynamicBitMap.c)
 *     MiSplitPfnBitMaps @ 0x140809F08 (MiSplitPfnBitMaps.c)
 *     MiSplitMirrorBitMap @ 0x140A2C3B4 (MiSplitMirrorBitMap.c)
 *     MiMarkRetpolineBits @ 0x140A317C0 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140B5F6B8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14036C240 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 2 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545LL;
  }
  else
  {
    v5 = 560LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5);
}
