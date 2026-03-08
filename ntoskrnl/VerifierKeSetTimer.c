/*
 * XREFs of VerifierKeSetTimer @ 0x140ABD500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimer()
{
  return ((__int64 (*)(void))pXdvKeSetTimer)();
}
