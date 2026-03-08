/*
 * XREFs of VerifierKeLeaveCriticalRegion @ 0x140ABD360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeLeaveCriticalRegion()
{
  return ((__int64 (*)(void))pXdvKeLeaveCriticalRegion)();
}
