/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x140A8EEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryPriorityThread()
{
  return ((__int64 (*)(void))pXdvKeQueryPriorityThread)();
}
