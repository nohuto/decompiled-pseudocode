/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x140ACCFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsRestoreImpersonation()
{
  return ((__int64 (*)(void))pXdvPsRestoreImpersonation)();
}
