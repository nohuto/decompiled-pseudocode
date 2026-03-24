/*
 * XREFs of ZwPowerInformation @ 0x1403FAF80
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404BE42C (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x14067B7C8 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x14078A554 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x1407906CC (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407CEB50 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407CF938 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E0EEC (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC08 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD2C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409084D8 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140915540 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140915770 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A73F7C (PopCreateIdlePhaseWatchdog.c)
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
