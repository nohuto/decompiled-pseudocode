/*
 * XREFs of tracePointerInfo @ 0x1C00E679C
 * Callers:
 *     traceFrame @ 0x1C01A595C (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     tracePointerFlags @ 0x1C01A5AA4 (tracePointerFlags.c)
 */

__int64 __fastcall tracePointerInfo(unsigned int *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      43,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
      a1[8],
      a1[9]);
  return tracePointerFlags(a1[3], a2, a3);
}
