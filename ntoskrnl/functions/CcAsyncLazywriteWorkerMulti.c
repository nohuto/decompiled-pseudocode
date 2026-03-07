void __fastcall CcAsyncLazywriteWorkerMulti(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r13
  int v3; // edi
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  ULONG v6; // r14d
  unsigned int v7; // r15d
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  const char *v10; // rcx
  KSPIN_LOCK *v11; // rsi
  __int64 v12; // rcx
  struct _SLIST_ENTRY *NextWorkQueueEntry; // rbx
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  __int64 v21; // r8
  __int64 Next; // r15
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // r8
  void *v38; // rax
  unsigned int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+54h] [rbp-ACh]
  unsigned int v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v45; // [rsp+88h] [rbp-78h]
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v48[64]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v49[64]; // [rsp+300h] [rbp+200h] BYREF
  struct _KWAIT_BLOCK v50; // [rsp+500h] [rbp+400h] BYREF

  if ( !a1 )
    return;
  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = 3;
  v4 = *(_DWORD **)(a1 + 64);
  v41 = *(_DWORD *)(a1 + 40);
  v42 = v1;
  v43 = v2;
  v45 = v4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v41 )
    return;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Starting worker thread(tid-%x, %p)\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    v4[6],
    0,
    KeGetCurrentThread());
  memset(v48, 0, sizeof(v48));
  memset(v49, 0, sizeof(v49));
  LODWORD(v5) = v4[398];
  Object[1] = v4 + 294;
  Object[0] = (PVOID)(v2 + 328);
  v48[0] = (PVOID)(v2 + 328);
  if ( (unsigned int)v5 >= 0x40 )
    LODWORD(v5) = 63;
  v6 = 1;
  v39 = v5;
  while ( 1 )
  {
    v7 = v6 - 1;
    if ( v6 - 1 < (unsigned int)v5 && *(_QWORD *)(v2 + 312) != v2 + 312 )
      break;
    if ( v6 == 1 )
    {
      v8 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             WrFreePage,
             0,
             0,
             &CcAsyncWriteBehindWaitTimeout,
             &WaitBlockArray);
      v9 = v8;
      if ( v8 == 258 )
      {
        v3 = 3;
      }
      else if ( v8 )
      {
        if ( v8 == 1 )
          v3 = 2;
      }
      else
      {
        v3 = 0;
      }
      v40 = v3;
      if ( !v3 )
        goto LABEL_23;
      if ( v3 != 1 )
      {
        if ( v3 != 2 )
          goto LABEL_55;
        v10 = "ExitEvent";
        goto LABEL_68;
      }
    }
    else
    {
      v9 = KeWaitForMultipleObjects(v6, v48, WaitAny, WrFreePage, 0, 0, 0LL, &v50);
      if ( !v9 )
        break;
      v3 = 1;
    }
    LODWORD(v5) = v39;
    if ( v9 < v6 )
    {
      _mm_lfence();
      v31 = v9;
      v32 = v49[v31];
      if ( !v32
        || (v33 = *(_QWORD *)(v32 + 16)) == 0
        || CcFlushCachePostProcessOneRange(*(__int64 **)(v32 + 16))
        && (v35 = CcWriteBehindAsyncFlushOneRange(v33), v5 = v39, v35) )
      {
        v2 = v43;
      }
      else
      {
        v48[v9] = 0LL;
        LOBYTE(v34) = 1;
        v49[v9] = 0LL;
        LOBYTE(v5) = 1;
        CcQueueAsyncLazywriteCompletion(v32, v5, v34);
        if ( v9 < v7 )
        {
          v36 = v9 + 1;
          v37 = v7 - v9;
          v9 = v6 - 1;
          do
          {
            v48[v31++] = v48[v36];
            v38 = (void *)v49[v36];
            v36 = (unsigned int)(v36 + 1);
            v48[v31 + 63] = v38;
            --v37;
          }
          while ( v37 );
        }
        v2 = v43;
        --v6;
        LODWORD(v5) = v39;
        v48[v9] = 0LL;
        v49[v9] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v43 + 352));
      }
LABEL_7:
      v1 = v42;
    }
  }
  v40 = 0;
LABEL_23:
  v11 = (KSPIN_LOCK *)(v1 + 832);
  KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  while ( *(_QWORD *)(v2 + 312) != v2 + 312 && v6 - 1 < v39 )
  {
    NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v12, v2, (_QWORD *)(v2 + 312));
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( LODWORD(NextWorkQueueEntry[8].Next) == 4 )
    {
      KeSetEvent((PRKEVENT)NextWorkQueueEntry[1].Next, 0, 0);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      goto LABEL_35;
    }
    v20 = CcWriteBehindAsyncPreProcess(NextWorkQueueEntry, &NextWorkQueueEntry[3].Next + 1, &NextWorkQueueEntry[2]);
    if ( v20 == 1 )
    {
      v21 = 0LL;
LABEL_42:
      v24 = 0LL;
      goto LABEL_46;
    }
    if ( v20 == 2 )
    {
      CcRepostToSynchronousLazywriter((__int64)NextWorkQueueEntry);
      goto LABEL_35;
    }
    Next = (__int64)NextWorkQueueEntry[1].Next;
    v23 = CcFlushCachePreProcess(Next);
    *(_QWORD *)(Next + 96) = 0LL;
    if ( !v23 )
    {
      LOBYTE(v21) = 1;
      goto LABEL_42;
    }
    if ( (unsigned __int8)CcWriteBehindAsyncFlushOneRange(Next) )
    {
      v25 = v6++;
      v48[v25] = *(PVOID *)(Next + 72);
      v49[v25] = NextWorkQueueEntry;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 4LL * v41 + 352));
      goto LABEL_35;
    }
    LOBYTE(v21) = 1;
    LOBYTE(v24) = 1;
LABEL_46:
    CcQueueAsyncLazywriteCompletion(NextWorkQueueEntry, v24, v21);
LABEL_35:
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v26 = LockHandle.OldIrql;
  v3 = v40;
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v19 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  __writecr8(v26);
LABEL_55:
  if ( v3 != 3 )
  {
    LODWORD(v5) = v39;
    goto LABEL_7;
  }
  v10 = "Inactivity";
LABEL_68:
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Exiting worker thread (tid-%x, %p) due to %s.\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v45[6],
    0,
    KeGetCurrentThread(),
    v10);
}
