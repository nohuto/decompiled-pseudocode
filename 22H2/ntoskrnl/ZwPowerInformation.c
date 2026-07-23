/*
 * XREFs of ZwPowerInformation @ 0x1403FA600
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404BE378 (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x14078A454 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14079A92C (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407CEA70 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407CF858 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E0F3C (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC58 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD7C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140908528 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140915590 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409157C0 (RtlRestoreSystemBootStatusDefaults.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
