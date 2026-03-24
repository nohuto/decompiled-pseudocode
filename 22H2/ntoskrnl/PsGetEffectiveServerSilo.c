/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140361880
 * Callers:
 *     PsGetJobServerSilo @ 0x140201820 (PsGetJobServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     PspIsSiloInServerSilo @ 0x140580F00 (PspIsSiloInServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x140605FB0 (PspImplicitAssignProcessToJob.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D7A8 (PspEstimateNewProcessServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x140614404 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14071F434 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpSetSiloDeviceMap @ 0x1407A145C (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo(a1) )
    a1 = *(_QWORD *)(v2 + 1072);
  return v2;
}
