/*
 * XREFs of WdipSemWriteEvent @ 0x1407889FC
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1407887A4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14079916C (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140930544 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14093062C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1409306BC (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140930728 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409307B0 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x140930844 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x140930A7C (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140930C30 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
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
