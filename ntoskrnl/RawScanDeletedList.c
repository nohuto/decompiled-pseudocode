/*
 * XREFs of RawScanDeletedList @ 0x1406F3E5C
 * Callers:
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 *     RawShutdown @ 0x1409B52A0 (RawShutdown.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x1402D5440 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1405A479C (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 21;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(v1 + 29)) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          ExReleaseFastMutex((PFAST_MUTEX)(v1 + 29));
      }
    }
    ExReleaseFastMutex(&RawGlobalLock);
  }
}
