/*
 * XREFs of WdipSemFastFree @ 0x140833700
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14078C108 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140831C10 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140833668 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1409DAD94 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DAEA4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
