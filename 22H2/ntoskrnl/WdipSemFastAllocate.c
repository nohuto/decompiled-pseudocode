/*
 * XREFs of WdipSemFastAllocate @ 0x1408332DC
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x1408317FC (WdipSemAddContextEventToScenario.c)
 *     WdipSemBuildScenarioInstance @ 0x140831D00 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1408320E8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140832854 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832C60 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140833450 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddEndEventToScenario @ 0x1408343B4 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409DDF04 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1409DDFB8 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140833624 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
