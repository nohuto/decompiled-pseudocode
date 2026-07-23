/*
 * XREFs of WdipSemFastFree @ 0x140788B54
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406155E8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407888E0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140788964 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140799F84 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14079A600 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14092FF04 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140930014 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140C53D30 + a1, a2);
  return result;
}
