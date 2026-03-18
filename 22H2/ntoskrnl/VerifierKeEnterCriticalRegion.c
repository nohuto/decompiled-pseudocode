/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x140AC1320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterCriticalRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterCriticalRegion)();
}
