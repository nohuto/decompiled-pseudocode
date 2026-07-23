/*
 * XREFs of WdipSemWriteEvent @ 0x140788BBC
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140788964 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14079936C (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1409306A4 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14093078C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14093081C (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140930888 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x140930910 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409309A4 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x140930BDC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140930D90 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
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
