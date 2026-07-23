/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1402F7010
 * Callers:
 *     PsGetJobServerSilo @ 0x140201820 (PsGetJobServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x140581200 (PspIsSiloInServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x14067DC04 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x14069CDF8 (PspEstimateNewProcessServerSilo.c)
 *     PspImplicitAssignProcessToJob @ 0x1406F519C (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406F6508 (PspValidateJobAssignmentSiloPolicy.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     ObpSetSiloDeviceMap @ 0x1407A122C (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
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
