/*
 * XREFs of ZwPowerInformation @ 0x14041C340
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x14050AA58 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x140623190 (DifZwPowerInformationWrapper.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1406D4270 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlpRecordBootStatusData @ 0x1406D6A74 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x1407EDB2C (RtlpSystemBootStatusRequest.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407F287C (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     PopArmIdlePhaseWatchdog @ 0x140808F30 (PopArmIdlePhaseWatchdog.c)
 *     HaliAcpiMachineStateInit @ 0x14085E510 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x14085F954 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x14098943C (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1409BAB50 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409BAD90 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B30A10 (PopCreateIdlePhaseWatchdog.c)
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
