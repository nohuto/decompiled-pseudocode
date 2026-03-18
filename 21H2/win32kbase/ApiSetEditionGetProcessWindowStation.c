/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C004E7A0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C004F880 (NtUserActivateKeyboardLayout.c)
 *     _GetKeyboardLayoutList @ 0x1C004FD7C (_GetKeyboardLayoutList.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C004FF00 (-IsWinstaLessSession@@YA_NXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C01642C0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetProcessWindowStation()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdi
  char v4; // dl

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      500,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v3 = 0LL;
  if ( qword_1C029BC28 && (int)qword_1C029BC28() >= 0 && qword_1C029BC30 )
    v3 = qword_1C029BC30(0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v4 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v0,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      501,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return v3;
}
