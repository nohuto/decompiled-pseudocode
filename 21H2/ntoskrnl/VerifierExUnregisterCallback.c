/*
 * XREFs of VerifierExUnregisterCallback @ 0x1409D1E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExUnregisterCallback()
{
  return ((__int64 (*)(void))pXdvExUnregisterCallback)();
}
