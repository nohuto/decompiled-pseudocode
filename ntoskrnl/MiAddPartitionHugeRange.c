/*
 * XREFs of MiAddPartitionHugeRange @ 0x14061CDC4
 * Callers:
 *     MiHotAddHugeRange @ 0x140A2B158 (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140B61968 (MiCreateHugeIoRanges.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 *     MiUpdateHugePageCounts @ 0x14062090C (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiAddPartitionHugeRange(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r10d
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // rdi
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  unsigned int v16; // edx
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // r12
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbx
  __int64 *v23; // rdi
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  bool v26; // zf
  bool i; // zf
  __int64 j; // rbx
  unsigned __int64 v29; // r13
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  unsigned int v35; // edi
  ULONG_PTR v36; // r13
  ULONG_PTR v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rsi
  ULONG_PTR v40; // r13
  unsigned __int64 v41; // r15
  __int64 v42; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  unsigned __int64 v48; // rbx
  unsigned __int8 v49; // cl
  struct _KPRCB *v50; // r8
  _DWORD *v51; // rdi
  int v52; // eax
  unsigned int v53; // [rsp+28h] [rbp-49h]
  ULONG_PTR v54; // [rsp+30h] [rbp-41h]
  ULONG_PTR v55; // [rsp+38h] [rbp-39h]
  ULONG_PTR v56; // [rsp+38h] [rbp-39h]
  volatile LONG *SpinLock; // [rsp+40h] [rbp-31h]
  PEX_SPIN_LOCK SpinLocka; // [rsp+40h] [rbp-31h]
  _QWORD *v59; // [rsp+48h] [rbp-29h]
  struct _KTHREAD *v60; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  __int64 v62; // [rsp+80h] [rbp+Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  v5 = a4;
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v7 = 0LL;
    v8 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v8->AbEntrySummary;
    if ( v8->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v8)) != 0 )
    {
      _BitScanForward(&v10, AbEntrySummary);
      v53 = v10;
      v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v7 = (__int64)(&v8[1].Process + 12 * v53);
      if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
      *(_DWORD *)(v7 + 8) = SessionId;
      *(_QWORD *)v7 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v7, (__int64)&qword_140C6B198);
    v5 = 0;
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
  }
  v16 = 0;
  v17 = *(_QWORD *)(a2 + 32);
  v18 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v19 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v20 = *(v19 - 1);
      if ( *v19 )
      {
        if ( v17 >= v20 )
        {
          if ( v17 < *v19 + v20 )
          {
LABEL_22:
            if ( !v5 )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
              KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
              goto LABEL_92;
            }
            return 3221225496LL;
          }
        }
        else if ( v18 + v17 > v20 )
        {
          goto LABEL_22;
        }
      }
      v19 += 2;
      ++v16;
    }
    while ( v16 < *(_DWORD *)MmPhysicalMemoryBlock );
  }
  v21 = (v17 >> 18) & 0x3FFFFF;
  KeAcquireInStackQueuedSpinLock(&qword_140C67A80, &LockHandle);
  v22 = (v18 >> 18) & 0x3FFFFF;
  if ( v21 < qword_140C67A60 )
  {
    if ( v22 > 1 )
    {
      if ( qword_140C67A60 - v21 >= v22 )
      {
        v23 = (__int64 *)(qword_140C67A68 + 8 * (v21 >> 6));
        v24 = *v23;
        v25 = qword_140C67A68 + 8 * ((v21 + v22 - 1) >> 6);
        if ( v23 == (__int64 *)v25 )
        {
          v26 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v18 >> 18)) << (v17 >> 18)) & v24) == 0;
LABEL_41:
          if ( v26 )
            goto LABEL_42;
        }
        else
        {
          for ( i = ((-1LL << (v17 >> 18)) & v24) == 0; i; i = *v23 == 0 )
          {
            if ( ++v23 == (__int64 *)v25 )
            {
              v26 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)(v17 >> 18) + (unsigned __int8)(v18 >> 18) - 1)) & *v23) == 0;
              goto LABEL_41;
            }
          }
        }
      }
    }
    else if ( v22 == 1
           && !_bittest64(
                 (const signed __int64 *)(qword_140C67A68 + 8 * (((v17 >> 18) & 0x3FFFFF) >> 6)),
                 (v17 >> 18) & 0x3F) )
    {
LABEL_42:
      for ( j = 16403LL; v18; v18 -= v55 )
      {
        v55 = MiRestrictRangeToNode(v17, v18);
        v29 = v55 >> 18;
        SpinLock = (volatile LONG *)(*(_QWORD *)(a1 + 16)
                                   + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v17) + 2)
                                   + 23104);
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        RtlSetBitsEx((__int64)&qword_140C67A60, v21 & 0x3FFFFF, v55 >> 18);
        if ( v55 >> 18 )
          memset64((void *)(qword_140C67A70 + 8 * (v21 & 0x3FFFFF)), 0x4013uLL, v29);
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        v17 += v55;
        v21 ^= ((unsigned int)v21 ^ ((_DWORD)v21 + (_DWORD)v29)) & 0x3FFFFF;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
      __writecr8(OldIrql);
      v35 = 0;
      if ( a3 == 3 )
      {
        j = (16LL * (*(_WORD *)a1 & 0x7FF)) | 3;
      }
      else if ( a3 == 1 )
      {
        v35 = 2;
      }
      v36 = *(_QWORD *)(a2 + 32);
      v37 = *(_QWORD *)(a2 + 40);
      v56 = v36;
      SpinLocka = (PEX_SPIN_LOCK)v37;
      v38 = (v21 ^ (v36 >> 18)) & 0x3FFFFF ^ v21;
      v39 = qword_140C67A70 + 8 * (v38 & 0x3FFFFF);
      v59 = (_QWORD *)v39;
      if ( v37 )
      {
        do
        {
          v54 = MiRestrictRangeToNode(v36, v37);
          v62 = *(_QWORD *)(a1 + 16) + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v36) + 2);
          if ( v54 >> 18 )
          {
            v40 = v54 >> 18;
            do
            {
              v41 = (unsigned __int8)MiLockHugePfn(v39);
              if ( a3 == 3 )
              {
                v42 = v62;
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v62 + 23104));
                *v59 = j;
                MiUpdateHugePageCounts(a1, v38, 1LL, 1LL);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 23104));
                v39 = (__int64)v59;
              }
              else
              {
                MiInsertHugeRangeInList(a1, v38, v35);
              }
              _InterlockedAnd(
                (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v39 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
                ~(1 << (((v39 - qword_140C67A70) >> 3) & 0x1F)));
              if ( KiIrqlFlags )
              {
                v43 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v43 >= 2u )
                {
                  v44 = KeGetCurrentPrcb();
                  v45 = v44->SchedulerAssist;
                  v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
                  v26 = (v46 & v45[5]) == 0;
                  v45[5] &= v46;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick((__int64)v44);
                }
              }
              __writecr8(v41);
              v39 += 8LL;
              v59 = (_QWORD *)v39;
              v38 = ((unsigned int)v38 ^ ((_DWORD)v38 + 1)) & 0x3FFFFF ^ (unsigned __int64)v38;
              --v40;
            }
            while ( v40 );
            v36 = v56;
          }
          v36 += v54;
          v37 = (ULONG_PTR)SpinLocka - v54;
          v26 = SpinLocka == (PEX_SPIN_LOCK)v54;
          SpinLocka = (PEX_SPIN_LOCK)((char *)SpinLocka - v54);
          v56 = v36;
        }
        while ( !v26 );
        CurrentThread = v60;
      }
      if ( !a4 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
        KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
        v26 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v26
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      return 0LL;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v48 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v49 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
    {
      v50 = KeGetCurrentPrcb();
      v51 = v50->SchedulerAssist;
      v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v26 = (v52 & v51[5]) == 0;
      v51[5] &= v52;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick((__int64)v50);
    }
  }
  __writecr8(v48);
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
LABEL_92:
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 3221225496LL;
}
