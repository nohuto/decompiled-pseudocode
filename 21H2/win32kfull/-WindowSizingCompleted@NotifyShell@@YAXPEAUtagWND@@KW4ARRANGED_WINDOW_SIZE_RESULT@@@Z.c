/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0236F64
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C020AD78 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

_UNKNOWN **__fastcall NotifyShell::WindowSizingCompleted(__int64 *a1, unsigned int a2, int a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // r8d
  _UNKNOWN **result; // rax

  v3 = (char)a1;
  anonymous_namespace_::NotifyShellSimplePayload(*a1, 7, a3, a2);
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v4,
                          v5,
                          22,
                          4,
                          1,
                          22,
                          (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
                          v3);
  }
  return result;
}
