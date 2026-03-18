/*
 * XREFs of VerifierPsGetVersion @ 0x140A8F5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsGetVersion()
{
  return ((__int64 (*)(void))pXdvPsGetVersion)();
}
