/*
 * XREFs of MiPageToNode @ 0x140617860
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2BEFC (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140A2C980 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x140A2DD64 (MiAddRuns.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B49DA0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
