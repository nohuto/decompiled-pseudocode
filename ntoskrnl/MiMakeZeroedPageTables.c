/*
 * XREFs of MiMakeZeroedPageTables @ 0x14036C240
 * Callers:
 *     MiSplitBitmapPages @ 0x14036C1A8 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x1407F5DFC (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A411E8 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x140A41CBC (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
