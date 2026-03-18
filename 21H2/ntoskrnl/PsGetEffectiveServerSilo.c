/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14020A3D0
 * Callers:
 *     EtwpTraceIo @ 0x14020A0D0 (EtwpTraceIo.c)
 *     EtwpTraceFileIo @ 0x1402AB040 (EtwpTraceFileIo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1402D7D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x140377150 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405E009C (PspIsSiloInServerSilo.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066F8EC (PspEstimateNewProcessServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140682A98 (PspGetMemoryPartitionImplicit.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140687E80 (PspValidateJobAssignmentSiloPolicy.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ObpSetSiloDeviceMap @ 0x14082C6E0 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
