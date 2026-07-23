/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x1409D2B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetExclusiveWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetExclusiveWaiterCount)();
}
