/*
 * XREFs of KiQueueReadyThread @ 0x140257C00
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140226178 (KiDeferredReadyThread.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402ADF34 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckPrcbAffinityEx @ 0x1402ADF54 (KiCheckPrcbAffinityEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402AE63C (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402AEDD4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402AF340 (KiRecomputeGroupSchedulingRank.c)
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 *     KiCheckThreadAffinity @ 0x1402DD370 (KiCheckThreadAffinity.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiEnterDeferredReadyState @ 0x140341110 (KiEnterDeferredReadyState.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KiComputeNewPriority @ 0x140369CB0 (KiComputeNewPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405FA980 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(__int64 a1, __int64 *a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // rdi
  int v6; // r12d
  unsigned int v8; // r15d
  int v9; // ebp
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _WORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 *v27; // r14
  int v28; // edx
  __int64 result; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned __int64 *v33; // r14
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // [rsp+20h] [rbp-48h]
  unsigned __int64 v37; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a3 + 72);
  v4 = a3;
  v6 = *(unsigned __int8 *)(a3 + 565);
  if ( *(_QWORD *)(a3 + 568) != KiCpuSetSequence && (*(_DWORD *)(a3 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a3 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xCu);
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 588);
      if ( v3 >= *(_QWORD *)(a3 + 32) )
      {
        v9 = (char)KiComputeNewPriority(a3, 1LL);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(v4) )
          KiUpdateThreadPriority(0, v10, v4, v9, 0);
        v11 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
        *(_QWORD *)(v4 + 32) = v11;
        KiTryScheduleNextForegroundBoost(v4);
        v6 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v4, a2)
        && (unsigned int)KiComputeThreadAffinity(v12)
        && !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v4 + 576), a1) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
      }
      v13 = *(unsigned int *)(v4 + 588);
      *(_QWORD *)(v4 + 64) = 0LL;
      if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(v4, 1350LL, v8, v13, v36);
    }
  }
  v14 = *(_QWORD *)(v4 + 104);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(a1 + 216) + v14;
    if ( v16 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v16 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v16, v15) )
          {
            if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v16, a3);
            }
          }
          else if ( *(_QWORD *)v16 >= *(_QWORD *)(v16 + 24) && (*(_BYTE *)(v16 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v15, v16, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v15, a1, a3, v16);
        }
        v17 += *(_DWORD *)(v16 + 116);
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
          break;
        v15 = v16 - *(unsigned int *)(a1 + 216);
      }
      if ( KiIsThreadConstrainedBySchedulingGroup(v4)
        && (unsigned __int8)KiShouldPreemptionBeDeferred(v18)
        && v17
        && (*(_DWORD *)(v4 + 120) & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xBu);
      }
    }
  }
  v19 = 0LL;
  if ( *(char *)(v4 + 195) >= KiRebalanceMinPriority || (*(_BYTE *)(a1 + 35) & 8) != 0 )
  {
    v20 = *(_QWORD *)(v4 + 104);
    if ( !v20 || (v21 = *(unsigned int *)(a1 + 216) + v20) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v21) )
    {
      v22 = *(_WORD **)(v4 + 576);
      v23 = *(unsigned __int8 *)(a1 + 208);
      if ( (unsigned __int16)v23 >= *v22 )
        v24 = 0LL;
      else
        v24 = *(_QWORD *)&v22[4 * v23 + 4];
      v19 = v24 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    }
  }
  if ( (*(_DWORD *)(v4 + 120) & 0x1000) == 0 && !v19 )
  {
    *(_BYTE *)(v4 + 565) = 0;
    KiAddThreadToReadyQueue(a1, 0, v4, 0, v6);
    v25 = *a2;
    v26 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v37 = v26;
    if ( (v25 & 1) != 0 )
    {
      v27 = (unsigned __int64 *)(*(_QWORD *)(v26 + 34904) + 8LL);
      v28 = **(unsigned __int8 **)(v26 + 34904);
      if ( !**(_BYTE **)(v26 + 34904) )
      {
LABEL_52:
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
    }
    else
    {
      v27 = &v37;
      v28 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v27[--v28] + 48), 0LL);
    while ( v28 );
    goto LABEL_52;
  }
  v30 = *(_QWORD *)(a1 + 16);
  KiEnterDeferredReadyState(v4);
  v31 = *a2;
  v32 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v38 = v32;
  if ( (v31 & 1) != 0 )
  {
    v33 = (unsigned __int64 *)(*(_QWORD *)(v32 + 34904) + 8LL);
    v34 = **(unsigned __int8 **)(v32 + 34904);
    if ( !**(_BYTE **)(v32 + 34904) )
      goto LABEL_58;
  }
  else
  {
    v33 = &v38;
    v34 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v33[--v34] + 48), 0LL);
  while ( v34 );
LABEL_58:
  *a2 = 0LL;
  _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 0xCu);
  *(_BYTE *)(v4 + 565) = v6;
  result = KiDeferredReadyThread(a1, v4);
  if ( !v30 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v35) = 2;
        return KiRequestSoftwareInterrupt(a1, v35);
      }
    }
  }
  return result;
}
