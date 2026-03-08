/*
 * XREFs of ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1C0244008
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01D5E18 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C0164240 (EtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall ApiSetEtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  char v6; // bl
  __int64 result; // rax
  int v8; // edx
  void *v9; // r8

  v3 = a3;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      44,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = EtwTraceTouchPadConfidenceCleared(a1, v4, v3);
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v8 || v6 )
  {
    v9 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v9) = v6;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v8,
             (_DWORD)v9,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             10,
             45,
             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
