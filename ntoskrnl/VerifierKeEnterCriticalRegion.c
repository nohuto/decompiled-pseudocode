/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x140ABD320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterCriticalRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterCriticalRegion)();
}
