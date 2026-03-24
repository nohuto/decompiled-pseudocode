/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1409D1B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1405B5350 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive();
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
