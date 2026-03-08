/*
 * XREFs of XilRegister_WriteUlong @ 0x1C0018428
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0007760 (Interrupter_WdfEvtInterruptIsr.c)
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     Interrupter_InterruptDisable @ 0x1C000F7DC (Interrupter_InterruptDisable.c)
 *     RootHub_D0Exit @ 0x1C0010338 (RootHub_D0Exit.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C00105D0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0013A0C (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0013BD0 (Register_SetClearSSICPortUnused.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C001498C (XilCoreDeviceSlot_Initialize.c)
 *     Register_D0Entry @ 0x1C0014A04 (Register_D0Entry.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014B54 (Interrupter_InterrupterRegisterIntialize.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014E60 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     RootHub_D0Entry @ 0x1C0015520 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015630 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C00186F0 (Register_BiosHandoff.c)
 *     Interrupter_InterruptEnable @ 0x1C0018928 (Interrupter_InterruptEnable.c)
 *     Controller_ClearHSIIWorkaround @ 0x1C001E9C0 (Controller_ClearHSIIWorkaround.c)
 *     Controller_SetHSIIWorkaround @ 0x1C001ED3C (Controller_SetHSIIWorkaround.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032754 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0032A8C (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0032EF4 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034904 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035B60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036680 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036890 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003DCEC (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003E028 (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003F048 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003F190 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003F3E8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F5BC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F964 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003FB14 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0040410 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040618 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052EE4 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007275C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C007A04C (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C003F1E8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 601) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
