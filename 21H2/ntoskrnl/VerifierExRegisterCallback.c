/*
 * XREFs of VerifierExRegisterCallback @ 0x1409D2D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRegisterCallback()
{
  return ((__int64 (*)(void))pXdvExRegisterCallback)();
}
