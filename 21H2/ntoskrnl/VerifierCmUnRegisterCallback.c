/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x140A8D680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmUnRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmUnRegisterCallback)();
}
