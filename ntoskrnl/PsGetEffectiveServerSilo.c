/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140294DF0
 * Callers:
 *     PsGetThreadServerSilo @ 0x1402637A0 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x140302E10 (PsGetJobServerSilo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140303D00 (UpcaseUnicodeToSingleByteNHelper.c)
 *     EtwpTraceFileIo @ 0x140316AB0 (EtwpTraceFileIo.c)
 *     EtwTraceContextSwap @ 0x140384B80 (EtwTraceContextSwap.c)
 *     PspIsSiloInServerSilo @ 0x1405A14DC (PspIsSiloInServerSilo.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140700C58 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x14070D590 (PspEstimateNewProcessServerSilo.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PspImplicitAssignProcessToJob @ 0x140797010 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140798000 (PspGetMemoryPartitionImplicit.c)
 *     ObpSetSiloDeviceMap @ 0x140855394 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
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
