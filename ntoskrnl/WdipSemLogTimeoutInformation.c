/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x1409DB47C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14078BFD0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x1409DB810 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x1409DBBAC (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1409DBC9C (WdipSemSqmLogTimeoutDataPoints.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // ebx

  v3 = a2;
  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, (unsigned __int16)v3, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, v3);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
