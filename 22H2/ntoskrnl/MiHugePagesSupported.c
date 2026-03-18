/*
 * XREFs of MiHugePagesSupported @ 0x1403C7244
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6C60 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x140723080 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A44D10 (MiHotAddPartitionMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A45828 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
