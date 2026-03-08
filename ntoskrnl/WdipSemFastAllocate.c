/*
 * XREFs of WdipSemFastAllocate @ 0x14083362C
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x140831B4C (WdipSemAddContextEventToScenario.c)
 *     WdipSemBuildScenarioInstance @ 0x140832050 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1408337A0 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddEndEventToScenario @ 0x140834704 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409DB064 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1409DB118 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140833974 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
