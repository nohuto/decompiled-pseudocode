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
