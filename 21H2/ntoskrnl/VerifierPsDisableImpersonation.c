/*
 * XREFs of VerifierPsDisableImpersonation @ 0x1409D4BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsDisableImpersonation()
{
  return ((__int64 (*)(void))pXdvPsDisableImpersonation)();
}
