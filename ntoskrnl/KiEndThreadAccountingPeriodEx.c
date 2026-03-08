/*
 * XREFs of KiEndThreadAccountingPeriodEx @ 0x140256710
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiEndThreadAccountingPeriod @ 0x1402566F0 (KiEndThreadAccountingPeriod.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiEndCounterAccumulation @ 0x140571E54 (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 */

void __fastcall KiEndThreadAccountingPeriodEx(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // bl
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int FrequencyBucket; // eax
  __int64 v16; // r10
  __int64 v17; // r11
  char v18; // cl
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *i; // rcx
  __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // [rsp+58h] [rbp+10h]

  v5 = *(_BYTE *)(a2 + 2);
  v8 = 0;
  if ( v5 < 0 )
  {
    v9 = *(_QWORD *)(a2 + 544);
    v10 = *(_QWORD *)(a1 + 34480);
    v11 = (*(_QWORD *)(v9 + 1024) >> 4) & 0x1FFLL;
    LODWORD(v9) = ((unsigned int)*(_QWORD *)(v9 + 1024) >> 13) & 0x3FFFF;
    _BitScanReverse(&v12, v9);
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8LL * (v12 - 2)) + 8LL * ((unsigned int)v9 ^ (1 << v12)) + 8);
    *(_QWORD *)(v13 + 8 * v11) += a3;
    v5 &= ~0x80u;
  }
  if ( (v5 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 33160) += a3;
    v5 &= ~0x10u;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 1608) )
    {
      FrequencyBucket = PoGetFrequencyBucket(a1);
      if ( KeHeteroSystem )
        v18 = *(_BYTE *)(a1 + 34056);
      else
        v18 = *(_BYTE *)(a1 + 34059);
      v19 = FrequencyBucket;
      v20 = v17;
      if ( !v18 )
        v20 = 0LL;
      v21 = v20 + 2LL * FrequencyBucket;
      v22 = *(_QWORD *)(v16 + 8 * v21);
      v23 = (_QWORD *)(v16 + 8 * v21);
      v24 = KiTimelineBitmapTime;
      *v23 = a3 + v22;
      v25 = *(_DWORD *)(v16 + 192);
      if ( v24 > v25 )
      {
        LODWORD(v34) = v24;
        if ( v24 - v25 >= 0x20 )
          HIDWORD(v34) = v17;
        else
          HIDWORD(v34) = v17 | (*(_DWORD *)(v16 + 196) << (v24 - v25));
        *(_QWORD *)(v16 + 192) = v34;
      }
      else
      {
        v26 = v25 - v24;
        if ( v26 < 0x20 )
          *(_DWORD *)(v16 + 196) |= (_DWORD)v17 << v26;
      }
      if ( !KiEfficiencyClassSystem )
      {
        v27 = (unsigned __int8)*(_DWORD *)(a2 + 512);
        if ( v27 == 2 || (unsigned int)(v27 - 5) <= 1 )
          *(_QWORD *)(v16 + 16 * v19 + 8) += a3;
      }
      if ( *(_QWORD *)(a2 + 1552) )
      {
        *(_QWORD *)(v16 + 8 * (v20 + 2 * (v19 + 8))) += a3;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1552) + 1608LL) + 8 * (v20 + 2 * (v19 + 4))),
          a3);
      }
    }
    v5 &= ~0x20u;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 968);
    if ( v30 )
      *(_BYTE *)(v30 + 64) = 0;
  }
  if ( KiHgsPlusEnabled )
    KiUpdateThreadHgsFeedback(a1, a2, a3, a4);
  v14 = *(_QWORD *)(a1 + 33200);
  if ( v14 )
  {
    if ( *(_BYTE *)(a2 + 125) )
    {
      v31 = (unsigned __int8)*(_DWORD *)(a2 + 512);
      if ( v31 < 7 )
      {
        v32 = *(_DWORD *)(a2 + 80);
        if ( v32 <= *(_DWORD *)(a2 + 84) )
          v32 = *(_DWORD *)(a2 + 84);
        LOBYTE(v8) = v32 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v33 = *(unsigned __int8 *)(a2 + 516) + (unsigned int)KiHgsPlusConfiguration * (v8 + 2 * v31);
        *(_QWORD *)(v14 + 8 * v33) += a3;
      }
    }
  }
  if ( (v5 & 0xBE) != 0 )
  {
    v28 = *(_QWORD *)(a2 + 104);
    if ( v28 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v28); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0
      && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
    {
      *(_QWORD *)(a1 + 33192) += a3;
    }
    if ( *(_QWORD *)(a2 + 360) )
      KiEndCounterAccumulation(a2);
  }
}
