/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x1409D3C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsRestoreImpersonation()
{
  return ((__int64 (*)(void))pXdvPsRestoreImpersonation)();
}
