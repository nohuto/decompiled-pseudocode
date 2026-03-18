/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x1C0018344
 * Callers:
 *     RootHub_D0Exit @ 0x1C0010368 (RootHub_D0Exit.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0010600 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014EB0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_D0Entry @ 0x1C0015570 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015680 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0015740 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016FA0 (RootHub_UcxEvtSetPortFeature.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036580 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036790 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003F2E8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F4BC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F864 (RootHub_ForceU3.c)
 *     RootHub_SetPortResumeTime @ 0x1C003FB7C (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0040310 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040518 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049C80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074EC (Controller_LowerAndTrackIrql.c)
 *     DynamicLock_Acquire @ 0x1C000A948 (DynamicLock_Acquire.c)
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
