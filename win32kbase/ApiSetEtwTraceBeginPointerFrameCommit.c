/*
 * XREFs of ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C0243B70
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01CE320 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00EDCA0 (EtwTraceBeginPointerFrameCommit.c)
 */

__int64 __fastcall ApiSetEtwTraceBeginPointerFrameCommit(__int64 a1, char a2)
{
  char v3; // bl
  bool v4; // dl
  bool v5; // r8
  __int64 result; // rax
  bool v7; // dl

  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      32,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = EtwTraceBeginPointerFrameCommit(0, a2, v5);
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v7 || v3 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v7,
             v3,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             10,
             33,
             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  return result;
}
