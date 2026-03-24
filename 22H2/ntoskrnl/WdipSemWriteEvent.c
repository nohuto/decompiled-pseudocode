/*
 * XREFs of WdipSemWriteEvent @ 0x1407888FC
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1407886A4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x140793FFC (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140930594 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14093067C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14093070C (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140930778 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x140930800 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x140930894 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x140930ACC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140930C80 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
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
