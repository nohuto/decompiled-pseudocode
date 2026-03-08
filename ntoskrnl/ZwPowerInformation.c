/*
 * XREFs of ZwPowerInformation @ 0x140412EF0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140504C10 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1405F0B60 (DifZwPowerInformationWrapper.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     RtlpSystemBootStatusRequest @ 0x14073AEEC (RtlpSystemBootStatusRequest.c)
 *     RtlpRecordBootStatusData @ 0x14073D990 (RtlpRecordBootStatusData.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140757DA8 (PopDisarmIdlePhaseWatchdog.c)
 *     PdcPortOpenCommon @ 0x140852DF8 (PdcPortOpenCommon.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140858A40 (RtlCheckSystemBootStatusIntegrity.c)
 *     HaliAcpiMachineStateInit @ 0x14085A4F0 (HaliAcpiMachineStateInit.c)
 *     PopArmIdlePhaseWatchdog @ 0x14087EFA4 (PopArmIdlePhaseWatchdog.c)
 *     PoGetLightestSystemStateForEject @ 0x14097D470 (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409AC84C (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BACF0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B71E38 (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer);
}
