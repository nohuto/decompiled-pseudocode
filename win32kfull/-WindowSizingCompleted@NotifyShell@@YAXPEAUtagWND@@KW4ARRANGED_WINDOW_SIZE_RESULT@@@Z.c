/*
 * XREFs of ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0220AD0
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EB67C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
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
                          (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
                          a1);
  return result;
}
