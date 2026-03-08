/*
 * XREFs of VerifierExRegisterCallback @ 0x140ACB200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRegisterCallback()
{
  return ((__int64 (*)(void))pXdvExRegisterCallback)();
}
