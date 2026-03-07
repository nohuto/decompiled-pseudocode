void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v2; // r12
  struct _WORK_QUEUE_ITEM *v3; // r14
  _QWORD *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int16 **v6; // r13
  char v7; // di
  NTSTATUS v8; // eax
  struct _KDPC *v9; // r9
  int v10; // ebx
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KDPC *v15; // rcx
  __int64 j; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 i; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int PoolDelayed; // eax
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r8
  int WorkerThread; // eax
  char v31; // [rsp+48h] [rbp-C0h]
  char v32; // [rsp+49h] [rbp-BFh]
  unsigned __int16 v33; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KTHREAD *v34; // [rsp+50h] [rbp-B8h]
  _QWORD v35[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v36[68]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp+70h] BYREF

  v2 = 0;
  v33 = 0;
  memset(v36, 0, 0x108uLL);
  v32 = 1;
  v3 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1817671749LL);
  if ( Pool2 )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1817671749LL);
    if ( v3 )
    {
      v32 = 0;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 12);
  v35[1] = -1LL;
  v35[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v35);
  v6 = (unsigned __int16 **)(a1 + 1);
  v7 = 0;
  v31 = 0;
  v35[0] = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v9 = 0LL;
    if ( !v8 )
      break;
    v21 = v8 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        v22 = v35[0];
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + i);
          if ( (v24 & 1) == 0 )
          {
            if ( v24 )
            {
              if ( (*(_DWORD *)(v24 + 712) & 0x4000) == 0 && !*(_DWORD *)(v24 + 4) )
              {
                v25 = (*(_DWORD *)(v24 + 712) & 0x3FFF) - ((2 * *(_DWORD *)(v24 + 716)) >> 1);
                if ( v25 )
                {
                  KeTimeOutQueueWaiters(v24, v22, v25);
                  v9 = 0LL;
                }
              }
            }
          }
        }
        v7 = v31;
        CurrentThread = v34;
      }
      LOBYTE(v11) = 1;
LABEL_13:
      if ( v7 )
        goto LABEL_23;
      goto LABEL_14;
    }
    v27 = 0LL;
    v11 = 1LL;
    do
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + 8 * v27);
      if ( ((unsigned __int8)v28 & (unsigned __int8)v11) != 0 )
        v28 = (__int64)v9;
      if ( *(_DWORD *)(v28 + 704) == *(_DWORD *)(v28 + 708) && ExpNewThreadNecessary(v28, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v9);
        if ( v27 == v11 && v32 == (_BYTE)v9 )
        {
          *(_DWORD *)Pool2 = v11;
          Pool2[1] = v28;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = Pool2;
          v3->List.Flink = (struct _LIST_ENTRY *)v9;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v32 = 1;
        }
        WorkerThread = ExpCreateWorkerThread((_QWORD *)v28, (int)a1 + 276, v29, (int)v9);
        v9 = 0LL;
        v11 = 1LL;
        if ( WorkerThread < 0 )
          v2 = 1;
      }
      v27 += v11;
    }
    while ( v27 <= v11 );
    v7 = 0;
LABEL_14:
    v14 = (__int64)v9;
    do
    {
      v15 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + v14);
      if ( ((unsigned __int8)v15 & (unsigned __int8)v11) != 0 )
        v15 = v9;
      *((_DWORD *)&v15[11].0 + 1) = v15[11].TargetInfoAsUlong;
      if ( ((__int64)v15[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v15[11].ProcessorHistory) || v2 )
        v7 = v11;
      v14 += 8LL;
    }
    while ( v14 <= 8 );
    v31 = v7;
    if ( v7 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v9);
    CurrentThread = v34;
LABEL_23:
    v36[0] = 2097153;
    memset(&v36[1], 0, 0x104uLL);
    KeQueryNodeActiveAffinityEx(**v6, (unsigned __int16 *)v36, &v33);
    v2 = 0;
    if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)v36, &CurrentThread->UserAffinity->Count) )
      KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)v36);
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + j);
      if ( (v17 & 1) == 0 && v17 && *(_DWORD *)(v17 + 664) != v33 )
        KeSetMaximumCountPriQueue(v17, v33);
    }
    v7 = v31;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v10 = 0;
    LODWORD(v11) = 1;
    v12 = 0LL;
    do
    {
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + v12) & (unsigned __int8)v11) != 0
        && (PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, *v6, (unsigned int)v10, v9),
            v9 = 0LL,
            LODWORD(v11) = 1,
            PoolDelayed < 0) )
      {
        v2 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + v12);
        if ( ((unsigned __int8)v13 & (unsigned __int8)v11) == 0 )
        {
          if ( v13 )
          {
            if ( ExpNewThreadNecessary(v13, *(_DWORD *)(v13 + 720)) )
            {
              v20 = ExpCreateWorkerThread(v18, (int)a1 + 276, v19, (int)v9);
              v9 = 0LL;
              LODWORD(v11) = 1;
              if ( v20 < 0 )
                v2 = 1;
            }
          }
        }
      }
      v10 += v11;
      v12 += 8LL;
    }
    while ( v10 < 8 );
    v7 = v31;
    CurrentThread = v34;
    goto LABEL_13;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
