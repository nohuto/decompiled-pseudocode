/*
 * XREFs of ZwPowerInformation @ 0x1403FB160
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x1404BE66C (HalpSetShutdownResetHandler.c)
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x14078A714 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140791C7C (RtlpSystemBootStatusRequest.c)
 *     HaliAcpiMachineStateInit @ 0x1407CECC0 (HaliAcpiMachineStateInit.c)
 *     PdcPortOpenCommon @ 0x1407CFAA8 (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E104C (PoGetLightestSystemStateForEject.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFD68 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFE8C (PopDisarmIdlePhaseWatchdog.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140908638 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1409156A0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1409158D0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A74F7C (PopCreateIdlePhaseWatchdog.c)
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
