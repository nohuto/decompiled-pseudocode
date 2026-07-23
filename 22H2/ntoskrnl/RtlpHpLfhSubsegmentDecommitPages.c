/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140287294 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x1402873F4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1402882B0 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpScheduleCompaction @ 0x140288968 (RtlpHpScheduleCompaction.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140314C60 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  ULONG_PTR v17; // r15
  unsigned __int8 v18; // bl
  KIRQL v19; // bl
  char v20; // cl
  unsigned int v21; // esi
  unsigned int v22; // edi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // bp
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int8 v34; // r14
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  int v38; // eax
  _DWORD *v39; // r8
  KIRQL v40; // [rsp+30h] [rbp-58h]
  unsigned int v41; // [rsp+34h] [rbp-54h] BYREF
  int v42; // [rsp+38h] [rbp-50h]
  char v43; // [rsp+A0h] [rbp+18h]

  v40 = -1;
  v41 = 0;
  v5 = a4;
  v43 = -1;
  v6 = a3;
  v9 = 0;
  if ( a3 < 0 )
  {
    v10 = 1;
    v6 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v10 )
  {
    v11 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v12 = *(__int16 *)(v11 + 22);
      result = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 11);
      if ( result <= 8 )
        result = 8LL;
      v14 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24);
      if ( v15 <= result || (result = RtlpHpScheduleCompaction(*(_QWORD *)(v11 + 56)), (result & 0x80000000) == 0LL) )
      {
        if ( v15 <= v14 )
          return result;
      }
      v5 = a4;
    }
  }
  result = *(unsigned __int8 *)(a2 + 45);
  if ( v6 < (unsigned int)result )
  {
    do
    {
      result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v6, &v41);
      v6 = result;
      if ( (_DWORD)result == -1 )
        break;
      result = v41;
      if ( v41 < v5 )
      {
        if ( !v10 )
          break;
        v6 += v41;
      }
      else if ( v9 )
      {
        v20 = *(_BYTE *)(a2 + 44);
        v21 = v6 << v20;
        v22 = v41 << v20;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
          *(_QWORD *)a1,
          a2 + (v6 << v20),
          v41 << v20);
        result = RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v21, v22);
        if ( !v10 )
          break;
        v6 += v41;
        v5 = a4;
      }
      else
      {
        if ( (a5 & 1) == 0 )
          v40 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
        v9 = 2;
        v43 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57), v16);
      }
      result = *(unsigned __int8 *)(a2 + 45);
    }
    while ( v6 < (unsigned int)result );
    if ( v9 )
    {
      v17 = a2 + 24;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v17);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v18 = v43;
          if ( (unsigned __int8)v43 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (v43 + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v18 = v43;
        }
        result = v18;
        __writecr8(v18);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v17);
        v42 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v30 = ++CurrentThread->AbAllocationRegionCount;
        v31 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v29 = !_BitScanReverse((unsigned int *)&v32, v31);
        if ( v29 )
          goto LABEL_54;
        while ( 1 )
        {
          v33 = (__int64)&CurrentThread->LockEntries[v32];
          v31 &= ~(1 << v32);
          if ( (*(_BYTE *)(v33 + 26) & 1) != 0
            && (*(_DWORD *)(v33 + 32) & 1) == 0
            && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v33 + 40) == SessionId )
          {
            *(_BYTE *)(v33 + 26) &= ~1u;
            if ( *(_QWORD *)(v33 + 32) )
              break;
          }
          v29 = !_BitScanReverse((unsigned int *)&v32, v31);
          if ( v29 )
            goto LABEL_54;
        }
        if ( !v33 )
        {
LABEL_54:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v17, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v33 + 32) |= 2u;
          if ( *(__int64 *)(v33 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
          v42 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
          *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v33 + 25) &= ~1u;
          *(_QWORD *)(v33 + 32) = 0LL;
          v34 = 1 << ((signed __int64)(v33 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v30 == 1 )
            CurrentThread->AbEntrySummary |= v34;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v34);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v29 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v29
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v35);
        }
        result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      if ( (a5 & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v36 = KeGetCurrentIrql(), v36 <= 0xFu) )
          {
            v19 = v40;
            if ( v40 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = ~(unsigned __int16)(-1LL << (v40 + 1));
              v39 = v37->SchedulerAssist;
              v29 = (v38 & v39[5]) == 0;
              v39[5] &= v38;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          else
          {
            v19 = v40;
          }
          result = v19;
          __writecr8(v19);
        }
        else
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
          KeAbPostRelease(a1 + 72);
          return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
      }
    }
  }
  return result;
}
