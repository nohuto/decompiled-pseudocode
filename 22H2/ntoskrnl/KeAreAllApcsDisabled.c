/*
 * XREFs of KeAreAllApcsDisabled @ 0x140215020
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1402107E0 (EtwpTraceImageUnloadApc.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14031E030 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADAFC (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC10 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     CcGetDeviceGuid @ 0x140873A00 (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140AD5ED8 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
