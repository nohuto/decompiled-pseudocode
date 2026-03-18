/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C021DEC8
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EA4CC (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021D458 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

_UNKNOWN **__fastcall NotifyShell::WindowSizingCompleted(__int64 *a1, unsigned int a2, int a3)
{
  char v4; // dl
  _UNKNOWN **result; // rax

  anonymous_namespace_::NotifyShellSimplePayload(*a1, 7, a3, a2, 0);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v4,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          22LL,
                          4u,
                          1u,
                          0x16u,
                          (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
                          a1);
  return result;
}
