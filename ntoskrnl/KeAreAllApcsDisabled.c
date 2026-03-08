/*
 * XREFs of KeAreAllApcsDisabled @ 0x14034C170
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140203EC4 (PnpIsSafeToExamineUserModeTeb.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     EtwpTraceImageUnloadApc @ 0x14035DB50 (EtwpTraceImageUnloadApc.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     PsCallImageNotifyRoutines @ 0x1407D30D0 (PsCallImageNotifyRoutines.c)
 *     PerfLogImageUnload @ 0x1407EA8E0 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 *     CcGetDeviceGuid @ 0x140870B48 (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140AD1ED8 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
