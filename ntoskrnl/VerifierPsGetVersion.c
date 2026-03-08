/*
 * XREFs of VerifierPsGetVersion @ 0x140ACCF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsGetVersion()
{
  return ((__int64 (*)(void))pXdvPsGetVersion)();
}
