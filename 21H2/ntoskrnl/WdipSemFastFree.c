/*
 * XREFs of WdipSemFastFree @ 0x140788994
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406B6128 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140788720 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407887A4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140799D84 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14079A400 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14092FDA4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092FEB4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140C53CF0 + a1, a2);
  return result;
}
