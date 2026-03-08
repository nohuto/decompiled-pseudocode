/*
 * XREFs of KeIsEqualAffinityEx @ 0x140237260
 * Callers:
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiTestNodeAffinity @ 0x140237190 (KiTestNodeAffinity.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     PpmParkReportMask @ 0x1402EDF00 (PpmParkReportMask.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     KeCpuPartitionMoveCpus @ 0x140572954 (KeCpuPartitionMoveCpus.c)
 *     PspSetEffectiveJobLimits @ 0x14078B504 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140828BE8 (PpmHeteroComputeRelativePerformance.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_7;
    }
    return 0LL;
  }
  else
  {
LABEL_7:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
