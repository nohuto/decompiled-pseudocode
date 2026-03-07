__int64 __fastcall anonymous_namespace_::WindowSizingUpdate(const struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // dl

  result = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL) + 324LL);
  if ( (result & 1) != 0 )
  {
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 6);
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_AND_TRACE_SF_q(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v3,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               10LL,
               4u,
               1u,
               0xAu,
               (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
               a1);
  }
  return result;
}
