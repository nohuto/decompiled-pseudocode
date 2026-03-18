/*
 * XREFs of VerifierKeLeaveCriticalRegion @ 0x140AC1360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeLeaveCriticalRegion()
{
  return ((__int64 (*)(void))pXdvKeLeaveCriticalRegion)();
}
