/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x1409D1B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetExclusiveWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetExclusiveWaiterCount)();
}
