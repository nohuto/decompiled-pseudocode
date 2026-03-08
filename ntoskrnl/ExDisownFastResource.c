/*
 * XREFs of ExDisownFastResource @ 0x1403C6EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x1403C4DC8 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403C7520 (KeAbMarkCrossThreadReleasable.c)
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // r12d
  char v7; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v9; // rcx
  ULONG_PTR v10; // r9
  unsigned __int8 v11; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  _BYTE *v14; // r14
  signed __int64 *v15; // rdx
  struct _LIST_ENTRY *p_Blink; // rax
  struct _LIST_ENTRY *Blink; // rdi
  _BYTE *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  struct _KTHREAD *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  struct _LIST_ENTRY **v28; // rdi
  ULONG_PTR *v29; // rax
  _QWORD *v30; // r15
  volatile __int64 *v31; // rcx
  signed __int64 *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  ULONG_PTR *v38; // rax
  struct _LIST_ENTRY **v39; // rdi
  unsigned __int8 v40; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v42; // r8
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // r8
  _QWORD *v50; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int64 *v56[3]; // [rsp+48h] [rbp-28h] BYREF
  struct _KTHREAD *Object; // [rsp+A0h] [rbp+30h]

  v56[2] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( FeatureFastResource2 )
    return ExDisownFastResource2(BugCheckParameter2, a2);
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0;
  Object = CurrentThread;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v9 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v9->MiscFlags & 0x400) == 0 && !v9->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v10 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v10 != v9 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v10, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v11 == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (v11 + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v14 = (_BYTE *)(a2 + 18);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*v14 || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v56[1] = (volatile signed __int64 *)&CurrentThread[1].QueueListEntry;
  v56[0] = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v56, &CurrentThread[1].QueueListEntry);
  }
  else
  {
    v15 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CurrentThread[1].QueueListEntry, (__int64)v56);
    if ( v15 )
      KxWaitForLockOwnerShip((signed __int64)v56, v15);
  }
  p_Blink = (struct _LIST_ENTRY *)&CurrentThread[1].QueueListEntry.Blink;
  Blink = CurrentThread[1].QueueListEntry.Blink;
  if ( Blink == p_Blink )
  {
LABEL_28:
    v18 = (_BYTE *)(a2 + 18);
    goto LABEL_29;
  }
  while ( Blink[1].Blink != (struct _LIST_ENTRY *)BugCheckParameter2 )
  {
    Blink = Blink->Flink;
    if ( Blink == p_Blink )
      goto LABEL_28;
  }
  v18 = (_BYTE *)(a2 + 18);
  if ( !Blink )
  {
LABEL_29:
    if ( *v18 )
    {
      v47 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v47 == v47 )
      {
        v48 = *(unsigned __int8 *)(a2 + 16);
        *v14 = 0;
        v49 = *(_QWORD *)a2;
        v50 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v50 == a2 )
        {
          *v50 = v49;
          *(_QWORD *)(v49 + 8) = v50;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v14 = 1;
          *(_QWORD *)(a2 + 48) = a2 + 40;
          *v47 = v47;
          Flink = p_Blink->Flink;
          if ( p_Blink->Flink->Blink == p_Blink )
          {
            *(_QWORD *)a2 = Flink;
            *(_QWORD *)(a2 + 8) = p_Blink;
            Flink->Blink = (struct _LIST_ENTRY *)a2;
            p_Blink->Flink = (struct _LIST_ENTRY *)a2;
            KxReleaseQueuedSpinLock(v56);
            v7 = 1;
            if ( (_BYTE)v48 )
              KeAbMarkCrossThreadReleasable(v52, v48);
            goto LABEL_53;
          }
        }
        goto LABEL_78;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
      ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v53 = *(_QWORD *)a2;
      v7 = 1;
      v54 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v54 != a2 )
        goto LABEL_78;
      *v54 = v53;
      *(_QWORD *)(v53 + 8) = v54;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      v19 = *(_QWORD *)a2;
      v20 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_78;
      if ( *v20 != a2 )
        goto LABEL_78;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v21 = *(_QWORD **)(BugCheckParameter2 + 56);
      v22 = (_QWORD *)(a2 + 56);
      if ( *v21 != BugCheckParameter2 + 48 )
        goto LABEL_78;
      *v22 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v21;
      *v21 = v22;
      *(_QWORD *)(BugCheckParameter2 + 56) = v22;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v7 = 1;
    }
    v24 = a2;
    v25 = Object;
    ExpAddFastOwnerEntryToThreadList((__int64)Object, v23, 1, v24);
    KxReleaseQueuedSpinLock(v56);
    goto LABEL_54;
  }
  if ( *v14 )
  {
    v30 = (_QWORD *)(a2 + 40);
    v31 = (volatile __int64 *)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v30 == v30 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, BugCheckParameter2 + 96);
      }
      else
      {
        v32 = (signed __int64 *)_InterlockedExchange64(v31, (__int64)&LockHandle);
        if ( v32 )
          KxWaitForLockOwnerShip((signed __int64)&LockHandle, v32);
      }
      --*(_DWORD *)(BugCheckParameter2 + 64);
      v33 = (_QWORD *)(a2 + 56);
      v34 = *(_QWORD *)(a2 + 56);
      v35 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v34 + 8) != a2 + 56 )
        goto LABEL_78;
      if ( (_QWORD *)*v35 != v33 )
        goto LABEL_78;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      *v33 = 0LL;
      *(_QWORD *)(a2 + 64) = 0LL;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      *v14 = 0;
      v36 = *(_QWORD *)a2;
      v37 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v37 != a2 )
        goto LABEL_78;
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      *v30 = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      v6 = *(unsigned __int8 *)(a2 + 16);
      *(_BYTE *)(a2 + 16) = 0;
    }
    else
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v31, &LockHandle);
      ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v45 = *(_QWORD *)a2;
      v46 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v46 != a2 )
        goto LABEL_78;
      *v46 = v45;
      *(_QWORD *)(v45 + 8) = v46;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    v38 = (ULONG_PTR *)Blink[3].Flink;
    v39 = &Blink[2].Blink;
    if ( (struct _LIST_ENTRY **)*v38 == v39 )
    {
      *(_QWORD *)a2 = v39;
      *(_QWORD *)(a2 + 8) = v38;
      *v38 = a2;
      v39[1] = (struct _LIST_ENTRY *)a2;
      KxReleaseQueuedSpinLock(v56);
      v7 = 0;
      goto LABEL_53;
    }
LABEL_78:
    __fastfail(3u);
  }
  v26 = *(_QWORD *)a2;
  v27 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_78;
  if ( *v27 != a2 )
    goto LABEL_78;
  *v27 = v26;
  v28 = &Blink[2].Blink;
  *(_QWORD *)(v26 + 8) = v27;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v29 = (ULONG_PTR *)v28[1];
  if ( (struct _LIST_ENTRY **)*v29 != v28 )
    goto LABEL_78;
  *(_QWORD *)a2 = v28;
  *(_QWORD *)(a2 + 8) = v29;
  *v29 = a2;
  v28[1] = (struct _LIST_ENTRY *)a2;
  KxReleaseQueuedSpinLock(v56);
LABEL_53:
  v25 = Object;
LABEL_54:
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v11 <= 0xFu && v40 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v42 = CurrentPrcb->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << (v11 + 1));
      v44 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v44 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = v11;
  __writecr8(v11);
  if ( v7 )
    result = ObfReferenceObjectWithTag(v25, 0x746C6644u);
  if ( v6 )
    return KeAbPostReleaseEx(BugCheckParameter2, v6);
  return result;
}
