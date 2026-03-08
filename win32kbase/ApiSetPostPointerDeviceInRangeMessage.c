/*
 * XREFs of ApiSetPostPointerDeviceInRangeMessage @ 0x1C0245C80
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMAddToActiveDevices @ 0x1C01B31F4 (RIMAddToActiveDevices.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C0163D30 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C0163D60 (EtwTracePointerDeviceInRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceInRangeMessage(__int64 a1)
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
      62,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart((__int64)v2);
    if ( qword_1C02D73A0 && (int)qword_1C02D73A0() >= 0 && qword_1C02D73A8 )
      qword_1C02D73A8(a1, 0LL, 0LL);
    EtwTracePointerDeviceInRangeMessageStop(v6);
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
      63,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
}
