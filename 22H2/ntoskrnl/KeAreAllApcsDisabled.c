/*
 * XREFs of KeAreAllApcsDisabled @ 0x14025A4E0
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x14026EEB8 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwpTraceImageUnloadApc @ 0x140316A70 (EtwpTraceImageUnloadApc.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0CC0 (IopCopyCompleteReadIrp.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A8BC (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x14061B690 (PsCallImageNotifyRoutines.c)
 *     PerfLogImageUnload @ 0x14062A070 (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x1409EC804 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
