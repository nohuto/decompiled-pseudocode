/*
 * XREFs of PsIsServerSilo @ 0x14020A400
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     PspJobIsAppSilo @ 0x1405E00B8 (PspJobIsAppSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140687E80 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetNextSilo @ 0x14068A6A0 (PspGetNextSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x1406CA8B0 (PspTerminateProcessesJobCallback.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     PspDeleteSilo @ 0x1407F8C6C (PspDeleteSilo.c)
 *     PsIsProcessInAppSilo @ 0x1409AB7B0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 *     PspSetJobMemoryPartition @ 0x1409B08E8 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1464) != 0LL;
}
