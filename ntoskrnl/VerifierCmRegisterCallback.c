/*
 * XREFs of VerifierCmRegisterCallback @ 0x140ACAF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmRegisterCallback)();
}
