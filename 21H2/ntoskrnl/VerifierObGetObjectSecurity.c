/*
 * XREFs of VerifierObGetObjectSecurity @ 0x140AA2000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierObGetObjectSecurity()
{
  return ((__int64 (*)(void))pXdvObGetObjectSecurity)();
}
