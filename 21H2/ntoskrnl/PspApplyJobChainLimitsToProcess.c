/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x1406F487C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406F519C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1402F6760 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x1402F67A0 (PsUpdateComponentPower.c)
 *     PspNotifyProcessBackgroundTransition @ 0x1402FB964 (PspNotifyProcessBackgroundTransition.c)
 *     PspSetProcessSchedulingGroup @ 0x14060A5F0 (PspSetProcessSchedulingGroup.c)
 *     PspRequestProcessExecutionState @ 0x1406F5050 (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x1406F509C (PspApplyJobLimitsToProcess.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  PspApplyJobLimitsToProcess(a3, 0LL);
  v6 = *(_QWORD *)(a1 + 1016);
  if ( v6 )
  {
    if ( a2 && *(_QWORD *)(a2 + 1016) || PsCpuFairShareEnabled )
    {
      PspSetProcessSchedulingGroup(a3, 0LL);
      v6 = *(_QWORD *)(a1 + 1016);
    }
    PspSetProcessSchedulingGroup(a3, v6);
  }
  v7 = (*(_DWORD *)(a1 + 864) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 856) )
    v7 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  PspRequestProcessExecutionState(a3, v7, 0LL);
  if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
    PspNotifyProcessBackgroundTransition(a3, 1);
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 632), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8, *(_QWORD *)(a1 + 1576));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 1120), 4, 32);
}
