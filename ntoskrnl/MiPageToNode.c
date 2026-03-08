/*
 * XREFs of MiPageToNode @ 0x1406153B0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x140A2B004 (MiAddRuns.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B3B690 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
