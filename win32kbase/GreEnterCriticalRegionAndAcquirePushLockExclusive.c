/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C01972D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
