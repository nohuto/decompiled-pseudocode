/*
 * XREFs of MiHugePagesSupported @ 0x1403C1984
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1407C4C00 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x1407D0AE0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A4203C (MiHotAddPartitionMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A42B54 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
