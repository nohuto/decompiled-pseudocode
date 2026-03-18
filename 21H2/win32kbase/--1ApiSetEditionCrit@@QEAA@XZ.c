/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C
 * Callers:
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00475F0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C004949C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C009E774 (InputUnInitialize.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00E75AE (RIMApplyPTPConfigRemedy.c)
 *     rimDeviceResetApc @ 0x1C01B88C0 (rimDeviceResetApc.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1D50 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE470 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetLeaveEditionCrit @ 0x1C0047720 (ApiSetLeaveEditionCrit.c)
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
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
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
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
}
