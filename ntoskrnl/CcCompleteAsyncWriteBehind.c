/*
 * XREFs of CcCompleteAsyncWriteBehind @ 0x140539048
 * Callers:
 *     CcCompleteAsyncLazywriteWorker @ 0x140538D80 (CcCompleteAsyncLazywriteWorker.c)
 * Callees:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall CcCompleteAsyncWriteBehind(PSLIST_ENTRY ListEntry, char a2)
{
  _SLIST_ENTRY *Next; // rdi
  __int64 v3; // r13
  char v4; // r15
  _SLIST_ENTRY *v6; // r12
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r14
  unsigned __int8 *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  _SLIST_ENTRY *v28; // [rsp+A0h] [rbp+8h]

  Next = ListEntry[1].Next;
  v3 = *((_QWORD *)&ListEntry[9].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v6 = Next->Next;
  v28 = Next[7].Next;
  if ( a2 )
  {
    v7 = CcWriteBehindPostProcess((__int64)Next, 1);
    v8 = v7;
    v9 = (unsigned __int8 *)&Next[8].Next + 9;
    if ( !v7 || *v9 )
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcCompleteAsyncWriteBehind: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        KeGetCurrentThread()[1].CycleTime,
        *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
        v7,
        *v9,
        ListEntry[9].Next,
        *((_DWORD *)&ListEntry[9].Next[1].Next + 2));
    if ( !v8 && *v9 )
    {
      LODWORD(ListEntry[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v6[52], &LockHandle);
      v10 = (_QWORD *)(v3 + 312);
      v11 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v11 + 8) != v3 + 312 )
        goto LABEL_20;
      ListEntry->Next = (_SLIST_ENTRY *)v11;
      *((_QWORD *)&ListEntry->Next + 1) = v10;
      *(_QWORD *)(v11 + 8) = ListEntry;
      *v10 = ListEntry;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v4 = 1;
    }
  }
  if ( !v4 )
  {
    if ( *((_QWORD *)&v28->Next + 1) == 35422LL && (v18 = *((_DWORD *)&Next[15].Next + 2), v18 < 0xA) )
    {
      *((_DWORD *)&Next[15].Next + 2) = v18 + 1;
      LODWORD(ListEntry[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v6[52], &LockHandle);
      v19 = (_QWORD *)(v3 + 312);
      v20 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v20 + 8) != v3 + 312 )
LABEL_20:
        __fastfail(3u);
      ListEntry->Next = (_SLIST_ENTRY *)v20;
      *((_QWORD *)&ListEntry->Next + 1) = v19;
      *(_QWORD *)(v20 + 8) = ListEntry;
      *v19 = ListEntry;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v21 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      __writecr8(v21);
    }
    else
    {
      ExFreePoolWithTag(Next, 0x42576343u);
      ListEntry[1].Next = 0LL;
      CcFreeWorkQueueEntry(ListEntry);
    }
  }
  return 1;
}
