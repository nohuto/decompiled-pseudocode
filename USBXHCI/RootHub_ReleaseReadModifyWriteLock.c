/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0
 * Callers:
 *     RootHub_D0Exit @ 0x1C0010338 (RootHub_D0Exit.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C00105D0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014E60 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_D0Entry @ 0x1C0015520 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015630 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036680 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036890 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003F3E8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F5BC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F964 (RootHub_ForceU3.c)
 *     RootHub_SetPortResumeTime @ 0x1C003FC7C (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0040410 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040618 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049D80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 */

char __fastcall RootHub_ReleaseReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  char v4; // bl
  char result; // al

  v3 = *(_QWORD *)(a1 + 48) + 120LL * a2;
  v4 = *(_BYTE *)(v3 + 32);
  *(_BYTE *)(v3 + 32) = 0;
  result = DynamicLock_Release(*(_QWORD *)(v3 + 24));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
