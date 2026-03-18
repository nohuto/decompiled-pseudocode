/*
 * XREFs of KiAndAffinityEx @ 0x140252320
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CF00 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     KiGetDeepIdleProcessors @ 0x14028F9E0 (KiGetDeepIdleProcessors.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiComputeThreadAffinity @ 0x1402BF804 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0414 (KiComputeCpuSetAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140308B30 (KiTryPopulateLogicalProcessorInformation.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     PpmParkReportParkedCores @ 0x1403507C0 (PpmParkReportParkedCores.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403CB080 (KiForwardTick.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAndAffinityEx @ 0x14056F3D0 (KeAndAffinityEx.c)
 *     KeAndAffinityEx2 @ 0x14056F3F0 (KeAndAffinityEx2.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9D74 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x140974F54 (KeInitializeProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall KiAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdx
  _BYTE v17[272]; // [rsp+20h] [rbp-128h] BYREF

  memset(v17, 0, 0x108uLL);
  v8 = v17;
  v9 = 32;
  if ( a3 )
  {
    v8 = a3;
    v9 = a4;
  }
  v10 = 0;
  *((_WORD *)v8 + 1) = v9;
  v11 = *a1;
  if ( *a1 >= *a2 )
    v11 = *a2;
  *(_WORD *)v8 = v11;
  if ( v11 > v9 )
  {
    *(_WORD *)v8 = v9;
    v11 = v9;
  }
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v13 = 4LL * v12;
      v14 = (*(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4]) == 0LL;
      *(_QWORD *)&v8[v13 * 2 + 8] = *(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4];
      if ( !v14 )
        v10 = 1;
      ++v12;
    }
    while ( v12 < *(_WORD *)v8 );
  }
  if ( v8 != v17 )
  {
    for ( *((_DWORD *)v8 + 1) = 0; v12 < *((_WORD *)v8 + 1); *(_QWORD *)&v8[8 * v15 + 8] = 0LL )
      v15 = v12++;
  }
  return v10;
}
