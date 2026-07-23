/*
 * XREFs of VerifierKeSetTimer @ 0x1409DC690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimer()
{
  return ((__int64 (*)(void))pXdvKeSetTimer)();
}
