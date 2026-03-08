/*
 * XREFs of VerifierExInterlockedPopEntryList @ 0x140ACB120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExInterlockedPopEntryList()
{
  return ((__int64 (*)(void))pXdvExInterlockedPopEntryList)();
}
