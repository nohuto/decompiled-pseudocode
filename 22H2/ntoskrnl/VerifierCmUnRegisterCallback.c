/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x1409D1A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmUnRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmUnRegisterCallback)();
}
