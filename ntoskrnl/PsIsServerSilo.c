/*
 * XREFs of PsIsServerSilo @ 0x140294E20
 * Callers:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405A14F8 (PspJobIsAppSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x1406F8A00 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x1406FB574 (PspGetNextSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140700C58 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     PsIsProcessInAppSilo @ 0x1409A96A0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1409A98D0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1409AA08C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1488) != 0LL;
}
