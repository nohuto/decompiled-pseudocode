/*
 * XREFs of MiSizeMemoryListLocks @ 0x1406A6868
 * Callers:
 *     MmCreatePartition @ 0x1403CA2A4 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140537A90 (MiAddPartitionToCrashDump.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140C4DEFC + 27);
}
