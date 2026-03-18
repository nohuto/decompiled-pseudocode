/*
 * XREFs of WdipSemFastFree @ 0x140815360
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406D9FC8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1408150FC (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140815178 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x14084028C (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x140840904 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1409DA7FC (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DA90C (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
