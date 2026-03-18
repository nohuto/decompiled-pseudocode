/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1C00B2DA0
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x1C00B2D30 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  char v5; // di
  char v6; // r8

  v2 = a2;
  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v6,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      512,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D7D8 && (int)qword_1C029D7D8() >= 0 )
  {
    if ( qword_1C029D7E0 )
      return (unsigned int)qword_1C029D7E0(a1, v2);
    return v4;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( (_BYTE)a2 || v5 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        v5,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        513,
        (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
    return 0LL;
  }
}
