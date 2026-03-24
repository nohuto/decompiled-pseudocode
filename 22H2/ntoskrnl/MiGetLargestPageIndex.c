/*
 * XREFs of MiGetLargestPageIndex @ 0x140323300
 * Callers:
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C547C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x1408D7724 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x1408DA134 (MiFindLargePageMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1408DB924 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
