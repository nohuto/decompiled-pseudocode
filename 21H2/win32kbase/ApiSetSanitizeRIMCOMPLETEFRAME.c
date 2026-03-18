/*
 * XREFs of ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C020F390
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetSanitizeRIMCOMPLETEFRAME(__int64 a1)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  char v5; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      212,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D1F0 && (int)qword_1C029D1F0() >= 0 )
  {
    if ( qword_1C029D1F8 )
      a1 = qword_1C029D1F8(a1);
    else
      a1 = 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v5 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      213,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return a1;
}
