/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4
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
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char v4; // di
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 601) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v7);
      v4 = 1;
    }
  }
  v5 = *(_QWORD *)(a1 + 48) + 120 * v2;
  result = DynamicLock_Acquire(*(_QWORD *)(v5 + 24));
  *(_BYTE *)(v5 + 32) = v4;
  return result;
}
