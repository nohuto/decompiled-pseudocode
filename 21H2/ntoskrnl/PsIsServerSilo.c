/*
 * XREFs of PsIsServerSilo @ 0x1402F70B0
 * Callers:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x14058121C (PspJobIsAppSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x14060A430 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x140681750 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406F6508 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PsIsProcessInAppSilo @ 0x140905CA0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140905E60 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140906578 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
