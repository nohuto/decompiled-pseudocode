/*
 * XREFs of VerifierZwQuerySystemInformation @ 0x140AA3670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwQuerySystemInformation()
{
  return ((__int64 (*)(void))pXdvZwQuerySystemInformation)();
}
