/*
 * XREFs of WdipSemFastAllocate @ 0x1407889C0
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x1407886AC (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407887A4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140799978 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140799D84 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14079A5E8 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14079A96C (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14079AA2C (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140930074 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140930130 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1407C008C (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140C53CF0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
