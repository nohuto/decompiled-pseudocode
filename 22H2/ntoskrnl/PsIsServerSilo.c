/*
 * XREFs of PsIsServerSilo @ 0x14020C040
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14020C010 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405A39E8 (PspJobIsAppSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x1406A31F4 (PspGetNextSilo.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767E50 (IopAllocateFoExtensionsOnCreate.c)
 *     PsIsProcessInAppSilo @ 0x1409AC720 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1409AC950 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACC94 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1409AD10C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x1409B2CD4 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1488) != 0LL;
}
