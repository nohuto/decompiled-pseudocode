/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x1409D4450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRegisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeRegisterNmiCallback)();
}
