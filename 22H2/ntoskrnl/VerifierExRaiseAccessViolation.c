/*
 * XREFs of VerifierExRaiseAccessViolation @ 0x1409D1D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseAccessViolation()
{
  return ((__int64 (*)(void))pXdvExRaiseAccessViolation)();
}
