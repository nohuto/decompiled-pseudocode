/*
 * XREFs of _anonymous_namespace_::WindowSizingUpdate @ 0x1C0237004
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00F4C7C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C0236714 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

__int64 __fastcall anonymous_namespace_::WindowSizingUpdate(const struct tagWND *a1)
{
  char v1; // bl
  __int64 result; // rax
  int v3; // edx
  int v4; // r8d

  v1 = (char)a1;
  result = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL) + 332LL);
  if ( (result & 4) != 0 )
  {
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, 0, 1, 6);
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      return WPP_RECORDER_AND_TRACE_SF_q(
               WPP_GLOBAL_Control->AttachedDevice,
               v3,
               v4,
               10,
               4,
               1,
               10,
               (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
               v1);
    }
  }
  return result;
}
