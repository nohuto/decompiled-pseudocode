/*
 * XREFs of XilRegister_WriteUlong @ 0x1C0018478
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0007790 (Interrupter_WdfEvtInterruptIsr.c)
 *     Register_ControllerStop @ 0x1C000EEE0 (Register_ControllerStop.c)
 *     Interrupter_InterruptDisable @ 0x1C000F80C (Interrupter_InterruptDisable.c)
 *     RootHub_D0Exit @ 0x1C0010368 (RootHub_D0Exit.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0010600 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0013A5C (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0013C20 (Register_SetClearSSICPortUnused.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C00149DC (XilCoreDeviceSlot_Initialize.c)
 *     Register_D0Entry @ 0x1C0014A54 (Register_D0Entry.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014BA4 (Interrupter_InterrupterRegisterIntialize.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0014EB0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_Start @ 0x1C0014F8C (Controller_Start.c)
 *     RootHub_D0Entry @ 0x1C0015570 (RootHub_D0Entry.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015680 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0015740 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016FA0 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_ControllerReset @ 0x1C0018568 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0018740 (Register_BiosHandoff.c)
 *     Interrupter_InterruptEnable @ 0x1C0018978 (Interrupter_InterruptEnable.c)
 *     Controller_ClearHSIIWorkaround @ 0x1C001EA10 (Controller_ClearHSIIWorkaround.c)
 *     Controller_SetHSIIWorkaround @ 0x1C001ED8C (Controller_SetHSIIWorkaround.c)
 *     Controller_D0EntryRestoreState @ 0x1C0032654 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003298C (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0032DF4 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034804 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0036580 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0036790 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003DBEC (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1C003DF28 (Interrupter_InitializeForOffload.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003EF48 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003F090 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003F2E8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F4BC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003F864 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003FA14 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0040310 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040518 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052DE4 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007279C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C007A08C (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C003F0E8 (Register_WriteSecureMmio.c)
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
