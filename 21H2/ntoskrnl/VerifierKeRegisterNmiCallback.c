/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x140A8EEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRegisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeRegisterNmiCallback)();
}
