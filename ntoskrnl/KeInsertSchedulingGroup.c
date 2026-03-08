/*
 * XREFs of KeInsertSchedulingGroup @ 0x1402F161C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1407833A8 (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishDfssHierarchy @ 0x1409AF340 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiAssignSchedulingGroupWeights @ 0x1402F1A84 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1402F1E28 (KiUpdateCpuTargetByRate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiEnableGroupScheduling @ 0x1403AA6A4 (KiEnableGroupScheduling.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rsi
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // al
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // r13
  unsigned int v17; // r15d
  __int64 v18; // rbp
  __int64 v19; // rsi
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  bool v22; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // eax
  __int64 v30; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]

  v35 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling(a1, a2);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter(0LL);
  v6 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  v7 = 0;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  for ( *(_QWORD *)(a1 + 48) = 0LL; v7 < KeMaximumProcessors; *(_BYTE *)(v9 + 113) = v13 )
  {
    v8 = 424LL * v7;
    v9 = v8 + a1 + 128;
    memset((void *)v9, 0, 0x88uLL);
    v10 = (_QWORD *)(v9 + 136);
    v11 = 16LL;
    do
    {
      v10[1] = v10;
      *v10 = v10;
      v10 += 2;
      --v11;
    }
    while ( v11 );
    v12 = KiCycleDivisorShortTerm;
    *(_QWORD *)(v9 + 8) = KiCycleDivisorShortTerm;
    *(_QWORD *)(v9 + 16) = v12;
    v13 = 0;
    *(_QWORD *)(v9 + 392) = 0LL;
    *(_QWORD *)(v9 + 400) = 0LL;
    if ( a3 )
    {
      v25 = v8 + a3 + 128;
      *(_QWORD *)(v9 + 408) = v25;
      *(_QWORD *)(v9 + 416) = *(_QWORD *)(v25 + 416);
      v13 = *(_BYTE *)(v25 + 113) + 1;
    }
    else
    {
      *(_QWORD *)(v9 + 408) = 0LL;
      *(_QWORD *)(v9 + 416) = v9;
    }
    ++v7;
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v26 = *(_QWORD **)(a3 + 88);
    if ( *v26 != a3 + 80 )
      goto LABEL_58;
    *v6 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v26;
    *v26 = v6;
    *(_QWORD *)(a3 + 88) = v6;
  }
  else
  {
    v14 = (_QWORD *)qword_140C41F28;
    if ( *(__int64 **)qword_140C41F28 != &KiSchedulingGroupList )
      goto LABEL_58;
    *v6 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v14;
    *v14 = v6;
    qword_140C41F28 = a1 + 56;
  }
  v15 = KeNumberProcessors_0;
  v16 = 0LL;
  v17 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v18 = KiProcessorBlock[v17];
      v19 = a1 + 424LL * v17;
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)(v18 + 48) );
      }
      v20 = *(_QWORD **)(v18 + 34192);
      v21 = (_QWORD *)(v19 + 200);
      if ( *v20 != v18 + 34184 )
        break;
      v22 = (v35 & 0x400000000LL) == 0;
      *v21 = v18 + 34184;
      *(_QWORD *)(v19 + 208) = v20;
      *v20 = v21;
      *(_QWORD *)(v18 + 34192) = v21;
      if ( !v22 )
      {
        *(_BYTE *)(v19 + 240) |= 0xCu;
        *(_DWORD *)(v19 + 244) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
      if ( *(_QWORD *)(v18 + 34880) )
      {
        if ( *(_BYTE *)(v18 + 209) == *(_BYTE *)(*(_QWORD *)(v18 + 34888) + 657LL) )
        {
          *(_BYTE *)(v19 + 240) |= 0x40u;
          v16 = v19 + 256;
        }
        *(_QWORD *)(v19 + 248) = v16;
      }
      if ( ++v17 >= v15 )
        goto LABEL_23;
    }
LABEL_58:
    __fastfail(3u);
  }
LABEL_23:
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v28 = *(_DWORD *)(a3 + 12);
      if ( v28 )
      {
        v29 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= v28 )
          goto LABEL_41;
      }
      v30 = a3;
      *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
    }
    else
    {
      v28 = KiGroupSchedulingMinimumRate;
      if ( KiGroupSchedulingMinimumRate )
      {
        v29 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= (unsigned int)KiGroupSchedulingMinimumRate )
        {
LABEL_41:
          *(_DWORD *)(a1 + 8) = (v29 << 7) / v28;
LABEL_42:
          KiUpdateCpuTargetByRate(a1, 0LL);
          goto LABEL_29;
        }
      }
      v30 = 0LL;
      KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
    }
    KiAssignSchedulingGroupWeights(1LL, 0LL, v30);
    goto LABEL_42;
  }
  if ( a3 )
  {
    v27 = *(_DWORD *)(a3 + 16);
    if ( !v27 || (unsigned __int16)a2 < v27 )
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    *(_DWORD *)(a3 + 20) += (unsigned __int16)a2;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight || (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight )
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    KiGroupSchedulingTotalWeight += (unsigned __int16)a2;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL, a3);
LABEL_29:
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v22 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v22 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
