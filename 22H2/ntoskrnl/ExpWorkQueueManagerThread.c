/*
 * XREFs of ExpWorkQueueManagerThread @ 0x1407AFC80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ExpNewThreadNecessary @ 0x140242200 (ExpNewThreadNecessary.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeSetCoalescableTimer @ 0x14025F4D0 (KeSetCoalescableTimer.c)
 *     KeTimeOutQueueWaiters @ 0x1402DCFBC (KeTimeOutQueueWaiters.c)
 *     KeQueryNodeActiveAffinity @ 0x1403544E0 (KeQueryNodeActiveAffinity.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x14052446C (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1406FD7FC (ExpCreateWorkerThread.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140955E28 (ExpPartitionCreatePoolDelayed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v1; // r12
  struct _WORK_QUEUE_ITEM *v3; // r15
  _QWORD *PoolWithTag; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r13
  unsigned __int64 v7; // rsi
  NTSTATUS v8; // eax
  struct _KDPC *v9; // r9
  int v10; // ebx
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rdx
  int PoolDelayed; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _KDPC *v17; // rcx
  __int64 j; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  __int64 i; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // r8
  int WorkerThread; // eax
  char v31; // [rsp+48h] [rbp-29h]
  USHORT Count; // [rsp+4Ch] [rbp-25h] BYREF
  struct _KTHREAD *v33; // [rsp+50h] [rbp-21h]
  unsigned __int64 v34; // [rsp+58h] [rbp-19h]
  _QWORD v35[2]; // [rsp+60h] [rbp-11h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-1h] BYREF
  PVOID Object[3]; // [rsp+80h] [rbp+Fh] BYREF

  v1 = 0;
  v31 = 1;
  Count = 0;
  Affinity = 0LL;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
    if ( v3 )
    {
      v31 = 0;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12);
  v35[1] = -1LL;
  v35[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v35);
  v6 = 0;
  v7 = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  v34 = v7;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v9 = 0LL;
    if ( !v8 )
      break;
    v23 = v8 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + i);
          if ( (v25 & 1) == 0 )
          {
            if ( v25 )
            {
              if ( (*(_DWORD *)(v25 + 712) & 0x4000) == 0 && !*(_DWORD *)(v25 + 4) )
              {
                v26 = (*(_DWORD *)(v25 + 712) & 0x3FFFu) - ((2 * *(_DWORD *)(v25 + 716)) >> 1);
                if ( (_DWORD)v26 )
                {
                  KeTimeOutQueueWaiters(v25, v7, v26, 0LL);
                  v9 = 0LL;
                }
              }
            }
          }
        }
        CurrentThread = v33;
      }
      LOBYTE(v11) = 1;
LABEL_15:
      if ( v6 )
        goto LABEL_25;
      goto LABEL_16;
    }
    v6 = 0;
    v27 = 0LL;
    v11 = 1LL;
    do
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + 8 * v27);
      if ( ((unsigned __int8)v28 & (unsigned __int8)v11) != 0 )
        v28 = (__int64)v9;
      if ( *(_DWORD *)(v28 + 704) == *(_DWORD *)(v28 + 708) && ExpNewThreadNecessary(v28, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v9);
        if ( v27 == v11 && v31 == (_BYTE)v9 )
        {
          *(_DWORD *)PoolWithTag = v11;
          PoolWithTag[1] = v28;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = PoolWithTag;
          v3->List.Flink = (struct _LIST_ENTRY *)v9;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v31 = 1;
        }
        WorkerThread = ExpCreateWorkerThread((_QWORD *)v28, (__int64)a1 + 276, v29, (int)v9);
        v9 = 0LL;
        v11 = 1LL;
        if ( WorkerThread < 0 )
          v1 = 1;
      }
      v27 += v11;
    }
    while ( v27 <= v11 );
LABEL_16:
    v16 = (__int64)v9;
    do
    {
      v17 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v16);
      if ( ((unsigned __int8)v17 & (unsigned __int8)v11) != 0 )
        v17 = v9;
      *((_DWORD *)&v17[11].0 + 1) = v17[11].TargetInfoAsUlong;
      if ( ((__int64)v17[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v17[11].ProcessorHistory) || v1 )
        v6 = v11;
      v16 += 8LL;
    }
    while ( v16 <= 8 );
    if ( v6 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v9);
    CurrentThread = v33;
LABEL_25:
    KeQueryNodeActiveAffinity(*(_WORD *)(a1[1] + 146LL), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity);
    v1 = 0;
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + j);
      if ( (v19 & 1) == 0 && v19 && *(_DWORD *)(v19 + 664) != Count )
        KeSetMaximumCountPriQueue(v19, Count);
    }
    CurrentThread = v33;
    v7 = v34;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v10 = 0;
    LODWORD(v11) = 1;
    v12 = 0LL;
    do
    {
      v13 = a1[1];
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(v13 + 146))
                                       + v12) & (unsigned __int8)v11) != 0 )
      {
        PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, v13, (unsigned int)v10, v9);
        v9 = 0LL;
        LODWORD(v11) = 1;
      }
      else
      {
        PoolDelayed = (int)v9;
      }
      if ( PoolDelayed < 0 )
      {
        v1 = v11;
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v12);
        if ( ((unsigned __int8)v15 & (unsigned __int8)v11) == 0 )
        {
          if ( v15 )
          {
            if ( ExpNewThreadNecessary(v15, *(_DWORD *)(v15 + 720)) )
            {
              v22 = ExpCreateWorkerThread(v20, (__int64)a1 + 276, v21, (int)v9);
              v9 = 0LL;
              LODWORD(v11) = 1;
              if ( v22 < 0 )
                v1 = 1;
            }
          }
        }
      }
      v10 += v11;
      v12 += 8LL;
    }
    while ( v10 < 8 );
    CurrentThread = v33;
    goto LABEL_15;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
