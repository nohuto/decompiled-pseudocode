/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14020C010
 * Callers:
 *     EtwpTraceFileIo @ 0x14020BEE0 (EtwpTraceFileIo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14022D3F0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x14028C070 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x14036E7B0 (PsGetJobServerSilo.c)
 *     EtwTraceContextSwap @ 0x140388080 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1405A39CC (PspIsSiloInServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E653C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1407E7464 (PspGetMemoryPartitionImplicit.c)
 *     ObpSetSiloDeviceMap @ 0x140859914 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C040 (PsIsServerSilo.c)
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
