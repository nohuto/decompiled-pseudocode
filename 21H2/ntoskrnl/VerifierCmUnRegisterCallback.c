/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x1409D1A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmUnRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmUnRegisterCallback)();
}
