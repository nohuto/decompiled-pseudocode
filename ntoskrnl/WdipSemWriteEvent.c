/*
 * XREFs of WdipSemWriteEvent @ 0x140833CFC
 * Callers:
 *     WdipSemSqmInit @ 0x140831A38 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1409DB510 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1409DB5F8 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1409DB688 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1409DB6F4 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB77C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409DB810 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1409DBA48 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DBBFC (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
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
