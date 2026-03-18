/*
 * XREFs of VerifierZwEnumerateDriverEntries @ 0x140AA2A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwEnumerateDriverEntries()
{
  return ((__int64 (*)(void))pXdvZwEnumerateDriverEntries)();
}
