/*
 * XREFs of VerifierKeSetTimer @ 0x140AC1500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimer()
{
  return ((__int64 (*)(void))pXdvKeSetTimer)();
}
