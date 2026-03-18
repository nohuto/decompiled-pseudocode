/*
 * XREFs of ApiSetGetTouchHoldTime @ 0x1C020D7A8
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01CF10C (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetTouchHoldTime()
{
  unsigned int v0; // edi
  char v1; // bl
  char v2; // dl
  char v3; // r8
  char v4; // dl

  v0 = 0;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      218,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D220 && (int)qword_1C029D220() >= 0 && qword_1C029D228 )
    v0 = qword_1C029D228();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v1 = 0;
  if ( v4 || v1 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v1,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      219,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return v0;
}
