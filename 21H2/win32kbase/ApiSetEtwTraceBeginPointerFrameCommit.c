/*
 * XREFs of ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C01CE900
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0172298 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C0121930 (EtwTraceBeginPointerFrameCommit.c)
 */

__int64 __fastcall ApiSetEtwTraceBeginPointerFrameCommit(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      32,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  result = EtwTraceBeginPointerFrameCommit(0, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               33,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
