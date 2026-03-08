/*
 * XREFs of MiGetLargestPageIndex @ 0x14027DE94
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmManagePartitionCreateLargePages @ 0x140A42970 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140A43304 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
