/*
 * XREFs of WdipSemFastFree @ 0x140788894
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406990E8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140788620 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407886A4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140794C14 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140795290 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14092FDF4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092FF04 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140C53CF0 + a1, a2);
  return result;
}
