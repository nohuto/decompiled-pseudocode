/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C003A054
 * Callers:
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 *     InputUnInitialize @ 0x1C0094FA8 (InputUnInitialize.c)
 *     InputInitialize @ 0x1C0096C0C (InputInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00C3ACC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     rimDeviceResetApc @ 0x1C01E2FC0 (rimDeviceResetApc.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211320 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F300 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F9D0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetLeaveEditionCrit @ 0x1C00C701C (ApiSetLeaveEditionCrit.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
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
      60,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) )
    ApiSetLeaveEditionCrit();
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
      61,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
}
