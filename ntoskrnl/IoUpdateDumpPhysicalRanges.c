/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x14054EC60
 * Callers:
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140619B48 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140A4203C (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IopGetPhysicalMemoryBlock @ 0x140392BD0 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x14055003C (IopConstructInMemoryDumpHeader.c)
 */

char IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      ((void (__fastcall *)(__int64))qword_140C6A8E0)(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
