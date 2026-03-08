/*
 * XREFs of KiAndAffinityEx @ 0x140237720
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x140237838 (KiComputeCpuSetAffinity.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x1402A9990 (KiTryPopulateLogicalProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KiGetDeepIdleProcessors @ 0x1402AF0A0 (KiGetDeepIdleProcessors.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     PpmParkReportParkedCores @ 0x1402E3AE0 (PpmParkReportParkedCores.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     HalSendNMI @ 0x14036B5E0 (HalSendNMI.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAndAffinityEx @ 0x14056CD60 (KeAndAffinityEx.c)
 *     KeAndAffinityEx2 @ 0x14056CD80 (KeAndAffinityEx2.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     PspSetEffectiveJobLimits @ 0x14078B504 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x140971EAC (KeInitializeProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
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
