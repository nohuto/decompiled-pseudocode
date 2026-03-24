/*
 * XREFs of KeInsertSchedulingGroup @ 0x1402DB0E8
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x14065C6DC (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14071EDDC (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x140908D78 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1402DDCF0 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1402DE080 (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x1403CBA9C (KiEnableGroupScheduling.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  bool v7; // zf
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v22; // r15
  __int64 v23; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  struct _KPRCB *v27; // rcx
  unsigned int v28; // ecx
  int v29; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  int v32; // eax
  __int64 v33; // r8
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v45; // [rsp+80h] [rbp+8h] BYREF
  __int64 v46; // [rsp+88h] [rbp+10h]
  __int64 v47; // [rsp+90h] [rbp+18h]

  v46 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling(a1, a2);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeMaximumProcessors == 0;
  v8 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v9 = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !v7 )
  {
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = KiCycleDivisorShortTerm;
      *(_QWORD *)v10 = KiCycleDivisorShortTerm;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v35 = 424LL * v9 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v35;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v35 + 416);
        v14 = *(_BYTE *)(v35 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        v14 = 0;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v9;
      v10 += 424LL;
    }
    while ( v9 < KeMaximumProcessors );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v36 = *(_QWORD **)(a3 + 88);
    if ( *v36 != a3 + 80 )
      goto LABEL_72;
    *v8 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v36;
    *v36 = v8;
    *(_QWORD *)(a3 + 88) = v8;
  }
  else
  {
    v18 = (_QWORD *)qword_140C31D78;
    if ( *(__int64 **)qword_140C31D78 != &KiSchedulingGroupList )
      goto LABEL_72;
    *v8 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v18;
    *v18 = v8;
    qword_140C31D78 = a1 + 56;
  }
  v19 = KeNumberProcessors_0;
  v20 = 0;
  v47 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = KiProcessorBlock[v20];
      v23 = a1 + 424LL * v20;
      v45 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = SchedulerAssist[6];
            SchedulerAssist[6] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
          break;
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = v34[6] - 1;
            v34[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v45, v15, v16, v17);
        while ( *(_QWORD *)(v22 + 48) );
      }
      v25 = *(_QWORD **)(v22 + 33296);
      v26 = (_QWORD *)(v23 + 200);
      if ( *v25 != v22 + 33288 )
        break;
      v7 = (v46 & 0x400000000LL) == 0;
      *v26 = v22 + 33288;
      *(_QWORD *)(v23 + 208) = v25;
      *v25 = v26;
      *(_QWORD *)(v22 + 33296) = v26;
      if ( !v7 )
      {
        *(_BYTE *)(v23 + 240) |= 0xCu;
        *(_DWORD *)(v23 + 244) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
      v27 = KeGetCurrentPrcb();
      v15 = (__int64)v27->SchedulerAssist;
      if ( v15 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v39 = *(_DWORD *)(v15 + 24) - 1;
          *(_DWORD *)(v15 + 24) = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      if ( *(_QWORD *)(v22 + 33856) )
      {
        if ( *(_BYTE *)(v22 + 209) == *(_BYTE *)(*(_QWORD *)(v22 + 33864) + 593LL) )
        {
          *(_BYTE *)(v23 + 240) |= 0x20u;
          v15 = v23 + 256;
          v47 = v23 + 256;
        }
        else
        {
          v15 = v47;
        }
        *(_QWORD *)(v23 + 248) = v15;
      }
      if ( ++v20 >= v19 )
        goto LABEL_26;
    }
LABEL_72:
    __fastfail(3u);
  }
LABEL_26:
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v28 = *(_DWORD *)(a3 + 12);
      if ( v28 )
      {
        v29 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= v28 )
          goto LABEL_30;
      }
      v33 = a3;
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
LABEL_30:
          *(_DWORD *)(a1 + 8) = (v29 << 7) / v28;
LABEL_31:
          KiUpdateCpuTargetByRate(a1, 0LL);
          goto LABEL_32;
        }
      }
      v33 = 0LL;
      KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
    }
    KiAssignSchedulingGroupWeights(1LL, 0LL, v33);
    goto LABEL_31;
  }
  if ( a3 )
  {
    v40 = *(_DWORD *)(a3 + 16);
    if ( !v40 || (v41 = (unsigned __int16)a2, (unsigned __int16)a2 < v40) )
    {
      v41 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v41;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v32 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v32 = (unsigned __int16)a2;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    }
    KiGroupSchedulingTotalWeight += v32;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL, a3);
LABEL_32:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = ((unsigned int)result & v43[5]) == 0;
        v43[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(v42);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
