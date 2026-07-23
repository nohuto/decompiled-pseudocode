/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x1409D4410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryPriorityThread()
{
  return ((__int64 (*)(void))pXdvKeQueryPriorityThread)();
}
