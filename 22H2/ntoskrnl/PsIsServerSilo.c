/*
 * XREFs of PsIsServerSilo @ 0x140361920
 * Callers:
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x140580F1C (PspJobIsAppSilo.c)
 *     PspGetNextSilo @ 0x140617F50 (PspGetNextSilo.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x14068ECF0 (PspTerminateProcessesJobCallback.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14071F434 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 *     PsIsProcessInAppSilo @ 0x140905B90 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140905D50 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140906468 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14090958C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
