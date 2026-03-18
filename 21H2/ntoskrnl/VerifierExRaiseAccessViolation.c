/*
 * XREFs of VerifierExRaiseAccessViolation @ 0x140A8D870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseAccessViolation()
{
  return ((__int64 (*)(void))pXdvExRaiseAccessViolation)();
}
