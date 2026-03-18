/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x140551100
 * Callers:
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14061BFF4 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2BEFC (MiAddPhysicalMemoryChunks.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140A44D10 (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     IopGetPhysicalMemoryBlock @ 0x140394850 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopConstructInMemoryDumpHeader @ 0x1405524DC (IopConstructInMemoryDumpHeader.c)
 */

_QWORD *IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 PhysicalMemoryBlock; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      ((void (__fastcall *)(__int64))qword_140C6AD60)(PhysicalMemoryBlock);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
