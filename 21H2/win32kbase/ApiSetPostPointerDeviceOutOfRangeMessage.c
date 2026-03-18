/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C020ECC8
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C014E310 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C014E340 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  PDEVICE_OBJECT v2; // rcx
  char v3; // bl
  char v4; // dl
  char v5; // r8
  __int64 v6; // rcx
  char v7; // dl

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      72,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart((__int64)v2);
    if ( qword_1C029CBB8 && (int)qword_1C029CBB8() >= 0 && qword_1C029CBC0 )
      qword_1C029CBC0(a1, 0LL, 0LL);
    EtwTracePointerDeviceOutOfRangeMessageStop(v6);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v7 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v7 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      73,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
}
