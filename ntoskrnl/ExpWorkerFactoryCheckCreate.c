/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x140340CC0
 * Callers:
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1402FA7F4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14038AA00 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     ExpCheckThreadHistory @ 0x1402E9174 (ExpCheckThreadHistory.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExpWorkerFactoryCreateThread @ 0x1403679CC (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140367ED0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140792310 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(PSLIST_ENTRY ListEntry, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rdi
  unsigned int v6; // r14d
  _SLIST_ENTRY *Next; // r8
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v9; // rdx
  _SLIST_ENTRY *v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  unsigned int *v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 v21; // rbp
  int v22; // ebp
  unsigned int v23; // ecx
  __int64 Lock; // rcx
  unsigned int v25; // ecx
  char v26; // bp
  unsigned __int64 v27; // rbx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  bool v30; // cf
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  bool v33; // zf
  unsigned int v34; // ecx
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // cl
  _DWORD *v45; // r8
  signed __int32 v46[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+20h] [rbp-38h] BYREF
  __int64 v48; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = LockHandle;
  v47 = 0LL;
  v48 = 0LL;
  v6 = 2;
  if ( !LockHandle )
  {
    Next = ListEntry[1].Next;
    v4 = (PKLOCK_QUEUE_HANDLE)&v47;
    *((_QWORD *)&v47 + 1) = Next;
    *(_QWORD *)&v47 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v15) = 4;
      else
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v15;
    }
    LOBYTE(v48) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v47, Next);
    }
    else
    {
      v9 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)Next, (__int64)&v47);
      if ( v9 )
        KxWaitForLockOwnerShip((signed __int64)&v47, v9);
    }
  }
  if ( a3 )
  {
    v28 = *((_DWORD *)&ListEntry[25].Next + 2);
    if ( (((unsigned __int8)v28 | (unsigned __int8)((v28 | (v28 >> 6)) >> 2)) & 0x30) == 0 && (v28 & 0x100) == 0 )
    {
      result = KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
      OldIrql = v4->OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_14;
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || (unsigned __int8)result > 0xFu || (unsigned __int8)OldIrql > 0xFu )
        goto LABEL_14;
      v30 = (unsigned __int8)result < 2u;
      goto LABEL_77;
    }
  }
  if ( LODWORD(ListEntry[25].Next)
    || LODWORD(ListEntry[24].Next) >= *((_DWORD *)&ListEntry[23].Next + 3)
    || (v10 = ListEntry[1].Next, *((_DWORD *)&v10[1].Next + 3))
    || (v16 = *((_QWORD *)&v10->Next + 1), !*(_DWORD *)(v16 + 4)) && !*((_DWORD *)&v10[1].Next + 2) )
  {
    *((_DWORD *)&ListEntry[25].Next + 2) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_13;
    }
    _m_prefetchw(v4);
    v11 = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
        goto LABEL_13;
      v11 = KxWaitForLockChainValid((__int64 *)v4);
    }
    v4->LockQueue.Next = 0LL;
    Lock = (__int64)v4->LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), Lock)) & 4) != 0 )
    {
      _InterlockedOr(v46, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_13:
    result = (unsigned int)KiIrqlFlags;
    OldIrql = v4->OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_14;
    v44 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_14;
    if ( v44 > 0xFu )
      goto LABEL_14;
    if ( (unsigned __int8)OldIrql > 0xFu )
      goto LABEL_14;
    if ( v44 < 2u )
      goto LABEL_14;
    CurrentPrcb = KeGetCurrentPrcb();
    result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
    v45 = CurrentPrcb->SchedulerAssist;
    v33 = ((unsigned int)result & v45[5]) == 0;
    v45[5] &= result;
    if ( !v33 )
      goto LABEL_14;
    goto LABEL_107;
  }
  v17 = (unsigned int *)(&ListEntry[25].Next + 1);
  if ( !a3 || (*v17 & 0xC0) != 0x80 )
  {
    v18 = (unsigned int *)(&ListEntry[25].Next + 1);
    if ( *(_DWORD *)(v16 + 40) >= (unsigned int)KeNumberProcessors_0 )
    {
      v25 = *v17;
      if ( (*v17 & 0xC0) == 0 )
      {
        v6 = 3;
        v23 = v25 & 0xFFFFFF3F | 0x40;
        *v17 = v23;
        goto LABEL_47;
      }
      if ( (v25 & 0xC0) == 0x40 && a3 )
      {
        v23 = v25 & 0xFFFFFF3F | 0x80;
        *v17 = v23;
        goto LABEL_47;
      }
LABEL_59:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = v4->OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_14;
      v43 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || v43 > 0xFu || (unsigned __int8)OldIrql > 0xFu )
        goto LABEL_14;
      v30 = v43 < 2u;
LABEL_77:
      if ( v30 )
        goto LABEL_14;
      CurrentPrcb = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v32 = CurrentPrcb->SchedulerAssist;
      v33 = ((unsigned int)result & v32[5]) == 0;
      v32[5] &= result;
      if ( !v33 )
        goto LABEL_14;
LABEL_107:
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_14:
      __writecr8(OldIrql);
      return result;
    }
  }
  v18 = (unsigned int *)(&ListEntry[25].Next + 1);
  if ( !a3 || (*v17 & 0x30) != 0x20 )
  {
    if ( ExpCheckThreadHistory((__int64)ListEntry) )
    {
      v29 = *v18;
      if ( (*v18 & 0x30) == 0 )
      {
        v6 = 3;
        v23 = v29 & 0xFFFFFFCF | 0x10;
        *v18 = v23;
        goto LABEL_47;
      }
      if ( (v29 & 0x30) == 0x10 && a3 )
      {
        v23 = v29 & 0xFFFFFFCF | 0x20;
        *v18 = v23;
        goto LABEL_47;
      }
      goto LABEL_59;
    }
    if ( !a3 )
      goto LABEL_27;
  }
  if ( (*v18 & 0x3000) != 0x2000 )
  {
LABEL_27:
    v19 = *((_DWORD *)&ListEntry[24].Next + 3);
    if ( v19 && LODWORD(ListEntry[24].Next) > v19 )
    {
      v34 = *v18;
      if ( (*v18 & 0x3000) == 0 )
      {
        v6 = 3;
        v23 = v34 & 0xFFFFCFFF | 0x1000;
        *v18 = v23;
        goto LABEL_47;
      }
      if ( (*v18 & 0x3000) == 0x1000 && a3 )
      {
        v23 = v34 & 0xFFFFCFFF | 0x2000;
        *v18 = v23;
        goto LABEL_47;
      }
      goto LABEL_59;
    }
  }
  if ( (*v18 & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(ListEntry);
  v20 = *v18;
  ++LODWORD(ListEntry[25].Next);
  *v18 = v20 & 0xFFFFCE0F;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
  v21 = v4->OldIrql;
  if ( KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v33 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  __writecr8(v21);
  result = ExpWorkerFactoryCreateThread(ListEntry);
  v22 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)ListEntry[1].Next, v4);
    --LODWORD(ListEntry[25].Next);
    if ( v22 != -1073741558 && v22 != -1073741814 && v22 != -1073741582 && v22 != -1073741823 )
    {
      *v18 |= 0x100u;
      v6 = 1;
      v23 = *v18;
LABEL_47:
      v26 = 0;
      if ( (v23 & 8) == 0 )
      {
        v26 = 1;
        *v18 = v23 | 8;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
      v27 = v4->OldIrql;
      if ( KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v42 = v40->SchedulerAssist;
          v33 = (v41 & v42[5]) == 0;
          v42[5] &= v41;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(v27);
      if ( v26 )
      {
        ObfReferenceObjectWithTag(ListEntry, 0x746C6644u);
        RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, ListEntry);
      }
      return ExpSetWorkerFactoryDeferredCreateTimer(v6);
    }
    goto LABEL_59;
  }
  return result;
}
