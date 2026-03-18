/*
 * XREFs of ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C020C68C
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C014C710 (EtwTraceBeginPointerFrameCommit.c)
 */

NTSTATUS __fastcall ApiSetEtwTraceBeginPointerFrameCommit(__int64 a1, char a2, __int64 a3)
{
  char v4; // bl
  bool v5; // dl
  NTSTATUS result; // eax
  int v7; // r8d
  bool v8; // dl

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v5 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      32,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = EtwTraceBeginPointerFrameCommit(0LL, a2, a3);
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( v8 || v4 )
  {
    LOBYTE(v7) = v4;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v8,
             v7,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             10,
             33,
             (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return result;
}
