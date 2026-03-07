__int64 __fastcall CcAsyncLazywriteWorker(__int64 a1)
{
  _SLIST_ENTRY *v1; // rsi
  PSLIST_ENTRY v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r15
  char v5; // r12
  PSLIST_ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int Next; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v17; // edi
  int v18; // eax
  struct _KTHREAD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  __int64 result; // rax
  char v26; // [rsp+30h] [rbp-F8h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-F0h]
  __int64 v28; // [rsp+48h] [rbp-E0h]
  _DWORD v29[2]; // [rsp+50h] [rbp-D8h] BYREF
  PSLIST_ENTRY v30; // [rsp+58h] [rbp-D0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-C8h] BYREF
  int v32; // [rsp+78h] [rbp-B0h]
  _QWORD v33[5]; // [rsp+80h] [rbp-A8h] BYREF
  PSLIST_ENTRY v34; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-60h]
  __int128 v37; // [rsp+D0h] [rbp-58h]
  __int64 v38; // [rsp+E0h] [rbp-48h]
  _QWORD *v39; // [rsp+E8h] [rbp-40h] BYREF
  int v40; // [rsp+F0h] [rbp-38h]
  int v41; // [rsp+F4h] [rbp-34h]
  PSLIST_ENTRY *v42; // [rsp+F8h] [rbp-30h] BYREF
  int v43; // [rsp+100h] [rbp-28h]
  int v44; // [rsp+104h] [rbp-24h]

  v1 = 0LL;
  v2 = 0LL;
  v26 = 0;
  v29[1] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v29[0] = 0;
  v30 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 7 )
    KeBugCheckEx(0x34u, 0x239uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v28 = v3;
  v33[2] = v3;
  v4 = *(_QWORD *)(a1 + 72);
  v33[3] = v4;
LABEL_3:
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 832), &LockHandle);
  if ( v26 )
  {
    *(_BYTE *)(v4 + 196) = 0;
    v26 = 0;
    CcReEngageWorkerThreads(v3, v4, *(_DWORD *)(v4 + 180), *(_DWORD *)(v4 + 184));
  }
  if ( v30 == (PSLIST_ENTRY)35422 )
  {
    if ( LODWORD(v2[8].Next) == 7 )
      *(_QWORD *)(*((_QWORD *)&v2[1].Next + 1) + 504LL) = v2;
    v6 = (PSLIST_ENTRY *)*((_QWORD *)&v1->Next + 1);
    if ( *v6 != v1 )
      __fastfail(3u);
    v2->Next = v1;
    *((_QWORD *)&v2->Next + 1) = v6;
    *v6 = v2;
    *((_QWORD *)&v1->Next + 1) = v2;
    v30 = 0LL;
  }
  while ( !v5 )
  {
    v5 = 1;
    v1 = (_SLIST_ENTRY *)(v4 + 312);
    if ( v1->Next == v1 )
      break;
    v33[1] = v4 + 312;
    if ( CcShouldWorkOnThisQueue((_DWORD *)v3, v4, v4 + 312, 0) )
    {
      ListEntry = (PSLIST_ENTRY)CcFindNextWorkQueueEntry(v8, v7, (_QWORD *)(v4 + 312));
      if ( ListEntry )
      {
        v33[4] = v4 + 188;
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 188));
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
        {
          v33[0] = ListEntry;
          v39 = v33;
          v40 = 8;
          v41 = 0;
          EtwTraceKernelEvent((__int64)&v39, 1u, 0x80020000, 0x1601u, 0x401902u);
        }
        Next = (int)ListEntry[8].Next;
        if ( Next == 4 )
        {
          KeSetEvent((PRKEVENT)ListEntry[1].Next, 0, 0);
          v26 = 1;
        }
        else if ( Next == 7 )
        {
          CurrentThread = KeGetCurrentThread();
          *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
          v17 = 0;
          do
          {
            v30 = ListEntry;
            v18 = CcWriteBehindAsync(ListEntry, v29, &v35);
            v32 = v18;
            if ( v17 >= 0xA )
              break;
            ++v17;
          }
          while ( v30 == (PSLIST_ENTRY)35422 );
          if ( v18 == 2 )
          {
            CcRepostToSynchronousLazywriter(ListEntry);
            ListEntry = 0LL;
          }
          v19 = KeGetCurrentThread();
          *((_DWORD *)&v19[1].SwapListEntry + 3) &= ~2u;
        }
        _InterlockedAdd((volatile signed __int32 *)(v4 + 188), 0xFFFFFFFF);
        v2 = ListEntry;
        if ( ListEntry )
        {
          if ( v30 == (PSLIST_ENTRY)35422 )
          {
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
              CcPerfLogWorkItemEnqueue((__int64)v1, (__int64)ListEntry, 1, 0);
          }
          else
          {
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
            {
              v34 = ListEntry;
              v42 = &v34;
              v43 = 8;
              v44 = 0;
              EtwTraceKernelEvent((__int64)&v42, 1u, 0x80020000, 0x1602u, 0x401902u);
            }
            CcFreeWorkQueueEntry(ListEntry);
          }
        }
        v3 = v28;
        goto LABEL_3;
      }
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v14 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  result = v20;
  __writecr8(v20);
  return result;
}
