/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1409DA7FC
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x14083FE80 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x140815360 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140C18E80; ++i )
  {
    result = WdipSemFastFree(2, (struct _SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_140C18E80 = a1;
  return result;
}
