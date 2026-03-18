/*
 * XREFs of WdipSemWriteEvent @ 0x14081549C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140815178 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14083F680 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1409DAF78 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1409DB060 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1409DB0F0 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1409DB15C (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB1E4 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409DB278 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1409DB4B0 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DB664 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
