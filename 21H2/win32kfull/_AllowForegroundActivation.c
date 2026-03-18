/*
 * XREFs of _AllowForegroundActivation @ 0x1C01D9DA8
 * Callers:
 *     NtUserAllowForegroundActivation @ 0x1C01F1520 (NtUserAllowForegroundActivation.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 AllowForegroundActivation()
{
  bool v0; // dl

  gdwPUDFlags |= 0x8000000u;
  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (unsigned int)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
      4,
      2,
      10,
      (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids);
  return 1LL;
}
