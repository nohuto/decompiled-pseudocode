/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x1406FF27C
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140797010 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x140294B08 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x140294B40 (PsUpdateComponentPower.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     PspComputeExecutionStateOld @ 0x14067CD7C (PspComputeExecutionStateOld.c)
 *     PspRequestProcessExecutionStateOld @ 0x14067CE2C (PspRequestProcessExecutionStateOld.c)
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PspRequestProcessExecutionState @ 0x1406FF388 (PspRequestProcessExecutionState.c)
 *     PspComputeExecutionState @ 0x1406FF3AC (PspComputeExecutionState.c)
 *     PspSetProcessSchedulingGroup @ 0x1407DCF7C (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx

  PspApplyJobLimitsToProcess(a3, 0);
  if ( *(_QWORD *)(a1 + 1232) )
  {
    if ( a2 && *(_QWORD *)(a2 + 1232) || PsCpuFairShareEnabled )
      PspSetProcessSchedulingGroup(a3, 0LL);
    PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1232));
  }
  if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
  {
    LOBYTE(v6) = PspComputeExecutionState(a1);
    PspRequestProcessExecutionState(a3, v6, 0LL);
  }
  else
  {
    v7 = PspComputeExecutionStateOld(a1);
    PspRequestProcessExecutionStateOld(a3, v7, 0);
  }
  if ( a2 )
    v8 = *(unsigned int *)(a2 + 1068);
  else
    v8 = 5LL;
  if ( (_DWORD)v8 != *(_DWORD *)(a1 + 1068) )
    PspNotifyProcessEffectiveIoLimitChanged(a3, v8, 0);
  if ( (*(_DWORD *)(a1 + 1536) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 632), 4u);
  PsUpdateComponentPower((struct _KPROCESS *)a3, 8, *(_QWORD *)(a1 + 1792));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 1120), 4, 32);
}
