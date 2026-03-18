/*
 * XREFs of RawScanDeletedList @ 0x14074C258
 * Callers:
 *     RawMountVolume @ 0x14074C2EC (RawMountVolume.c)
 *     RawShutdown @ 0x1409B4E80 (RawShutdown.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RawCheckForDeleteVolume @ 0x1403770A8 (RawCheckForDeleteVolume.c)
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
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 29));
      }
    }
    KeReleaseGuardedMutex(&RawGlobalLock);
  }
}
