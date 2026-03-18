/*
 * XREFs of MiMakeZeroedPageTables @ 0x14020B2A0
 * Callers:
 *     MiSplitBitmapPages @ 0x14020B208 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A43EBC (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x140A44990 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
