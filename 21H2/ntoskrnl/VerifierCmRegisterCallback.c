/*
 * XREFs of VerifierCmRegisterCallback @ 0x1409D2A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmRegisterCallback)();
}
