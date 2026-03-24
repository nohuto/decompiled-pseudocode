/*
 * XREFs of PsIsServerSilo @ 0x140362250
 * Callers:
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1403621B0 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x140580FDC (PspJobIsAppSilo.c)
 *     PspGetNextSilo @ 0x140617AF0 (PspGetNextSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x1406ABD40 (PspTerminateProcessesJobCallback.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140720064 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
 *     PsIsProcessInAppSilo @ 0x140905B40 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140905D00 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140906418 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14090953C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
