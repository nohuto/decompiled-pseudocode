void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  _BYTE *v1; // r13
  int v3; // r12d
  char v4; // di
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  signed __int64 v11; // rax
  unsigned __int64 i; // rcx
  signed __int64 v13; // rtt
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _BYTE *v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  PSLIST_ENTRY v30; // rcx
  __int64 v31; // rdx
  struct _KLOCK_QUEUE_HANDLE WaitBlockArray_8; // [rsp+48h] [rbp-C0h] BYREF
  PSLIST_ENTRY v33; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v34; // [rsp+68h] [rbp-A0h]
  PVOID Object[7]; // [rsp+70h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A8h] [rbp-60h] BYREF

  v33 = 0LL;
  v1 = StartContext + 123;
  Object[2] = StartContext + 123;
  Object[0] = StartContext + 110;
  v34 = StartContext + 166;
  Object[1] = StartContext + 113;
  Object[5] = StartContext + 166;
  Object[3] = StartContext + 116;
  v3 = 0;
  v4 = 0;
  Object[4] = StartContext + 119;
  memset(&WaitBlockArray_8, 0, sizeof(WaitBlockArray_8));
LABEL_2:
  v5 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v10 = 2;
LABEL_11:
      v4 = 1;
      goto LABEL_16;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            return;
          v10 = v3;
          v4 = 0;
          if ( !v3 )
            return;
          goto LABEL_16;
        }
        v10 = 16;
      }
      else
      {
        v10 = 8;
      }
      goto LABEL_11;
    }
    v10 = 4;
  }
  else
  {
    v10 = 1;
    v4 = 1;
  }
LABEL_16:
  v3 = v10;
  _m_prefetchw(StartContext + 162);
  v11 = StartContext[162];
  for ( i = v11 + 1; i > 1; i = v11 + 1 )
  {
    v13 = v11;
    v11 = _InterlockedCompareExchange64(StartContext + 162, i, v11);
    if ( v13 == v11 )
    {
      v14 = StartContext[14];
      if ( !v14 )
        KeBugCheckEx(0x34u, 0x7A6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( CcNumberOfExternalCaches )
      {
        if ( (__int64 *)CcExternalCacheList != &CcExternalCacheList )
        {
          v15 = (_QWORD *)*((_QWORD *)PspSystemPartition + 1);
          if ( StartContext == v15 )
            CcNotifyExternalCachesInternal(v10, (__int64)v15, 0LL);
        }
      }
      CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v4);
      KeAcquireInStackQueuedSpinLock(StartContext + 96, &WaitBlockArray_8);
      if ( CcIsLazyWriteScanQueuedInternal(v1, v10) )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&WaitBlockArray_8);
LABEL_40:
        OldIrql = WaitBlockArray_8.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
            v22 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
      }
      else
      {
        CcSetLazyWriteScanQueuedInternal(v16, v10, 1);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&WaitBlockArray_8);
        v17 = WaitBlockArray_8.OldIrql;
        if ( KiIrqlFlags )
        {
          v18 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        __writecr8(v17);
        if ( (int)CcAllocateWorkQueueEntry((__int64)StartContext, 0LL, v14, &v33) < 0 )
        {
          ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
          KeAcquireInStackQueuedSpinLock(StartContext + 96, &WaitBlockArray_8);
          *((_BYTE *)StartContext + 1049) = 0;
          CcSetLazyWriteScanQueuedInternal(v1, v10, 0);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&WaitBlockArray_8);
          goto LABEL_40;
        }
        v30 = v33;
        v31 = v14 + 72;
        LODWORD(v33[8].Next) = 3;
        LODWORD(v30[1].Next) = v10;
        if ( v10 != 8 )
          v31 = v14 + 104;
        CcPostWorkQueue(v30, v31, v23, v24);
      }
      v4 = 0;
      CcDereferencePartition((__int64)StartContext);
      goto LABEL_2;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
}
