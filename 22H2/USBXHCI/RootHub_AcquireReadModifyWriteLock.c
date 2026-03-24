/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0
 * Callers:
 *     RootHub_D0Exit @ 0x1C000B838 (RootHub_D0Exit.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0011CC0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_D0Entry @ 0x1C0011F50 (RootHub_D0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_DetectLinkErrorState @ 0x1C001A2AC (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034A20 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034C10 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003D094 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003D268 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003D60C (RootHub_ForceU3.c)
 *     RootHub_SetPortResumeTime @ 0x1C003D924 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E0B0 (RootHub_Update20HardwareLpmParameters.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047300 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rdi
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax

  v4 = a2;
  v6 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 553) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v7);
      v6 = 1;
    }
  }
  v8 = *(_QWORD *)(a1 + 48) + 112 * v4;
  v9 = *(_QWORD *)(v8 + 24);
  if ( *(_DWORD *)v9 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
               WdfDriverGlobals,
               *(_QWORD *)(v9 + 8),
               0LL);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
               WdfDriverGlobals,
               *(_QWORD *)(v9 + 8));
  }
  *(_BYTE *)(v8 + 32) = v6;
  return result;
}
