/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1403621B0
 * Callers:
 *     PsGetJobServerSilo @ 0x140201820 (PsGetJobServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     PspIsSiloInServerSilo @ 0x140580FC0 (PspIsSiloInServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x140605FB0 (PspImplicitAssignProcessToJob.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D348 (PspEstimateNewProcessServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x140613FA4 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140720064 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpSetSiloDeviceMap @ 0x1407A102C (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x140362250 (PsIsServerSilo.c)
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
