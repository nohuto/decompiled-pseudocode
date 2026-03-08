/*
 * XREFs of VerifierZwEnumerateDriverEntries @ 0x140AE29D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwEnumerateDriverEntries()
{
  return ((__int64 (*)(void))pXdvZwEnumerateDriverEntries)();
}
