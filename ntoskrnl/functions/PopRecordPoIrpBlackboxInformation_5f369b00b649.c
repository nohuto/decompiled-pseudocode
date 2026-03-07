void PopRecordPoIrpBlackboxInformation()
{
  char v0; // r13
  __int64 v1; // rsi
  int v2; // r12d
  void *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  __int64 Pool2; // rax
  ULONG_PTR v16; // rcx
  __int64 *v17; // r11
  _DWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned __int64 v21; // rsi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A1h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-89h]
  __int128 InputBuffer_8; // [rsp+50h] [rbp-81h] BYREF
  __int128 v29; // [rsp+60h] [rbp-71h]
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  InputBuffer_8 = 0LL;
  InputBuffer = 0LL;
  v29 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v0 = 0;
  v1 = PopIrpList;
  v2 = 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v3 = 0LL;
  v4 = 64LL;
  if ( (__int64 *)PopIrpList == &PopIrpList )
    goto LABEL_33;
  do
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 288));
    if ( *(_DWORD *)(v1 + 296) == 1 )
    {
      v6 = *(_QWORD *)(v1 + 48);
      v0 = 1;
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(v1 + 304) = v6;
    KxReleaseSpinLock((volatile signed __int64 *)(v1 + 288));
    if ( KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu )
    {
      v8 = -1LL;
      if ( CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v8 = -1LL;
    }
    __writecr8(v5);
    if ( v0 )
    {
      v0 = 0;
      if ( PopDiagGetDriverName(*(_QWORD *)(v1 + 32), Src) >= 0 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( Src[v14] );
        v13 = 2 * v14 + 26;
        if ( v13 < 0x18 )
          goto LABEL_33;
      }
      ++v2;
      if ( v4 + v13 < v4 )
        goto LABEL_33;
      v4 += v13;
    }
    else
    {
      v0 = 0;
    }
    v1 = *(_QWORD *)v1;
  }
  while ( (__int64 *)v1 != &PopIrpList );
  if ( !v2 )
  {
LABEL_33:
    v4 = 0LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v4, 1111641936LL);
    v3 = (void *)Pool2;
    if ( Pool2 )
    {
      v16 = ExWorkerQueue;
      v17 = &PopIrpList;
      *(_QWORD *)(Pool2 + 16) = &PopIrpList;
      v18 = (_DWORD *)(Pool2 + 40);
      *(_DWORD *)(Pool2 + 4) = 1;
      *(_DWORD *)Pool2 = v4;
      *(_DWORD *)(Pool2 + 8) = v2;
      *(_QWORD *)(Pool2 + 24) = &PopIrpThreadList;
      *(_QWORD *)(Pool2 + 32) = v16;
      v19 = PopIrpList;
      while ( (__int64 *)v19 != v17 )
      {
        if ( *(_QWORD *)(v19 + 304) )
        {
          v18[2] = *(unsigned __int8 *)(v19 + 184);
          v18[3] = *(_DWORD *)(v19 + 188);
          v18[4] = *(_DWORD *)(v19 + 192);
          v20 = 24LL;
          v18[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(v19 + 304)) / 0x2710uLL;
          if ( PopDiagGetDriverName(*(_QWORD *)(v19 + 32), Src) >= 0 )
          {
            do
              ++v8;
            while ( Src[v8] );
            v20 = 2 * v8 + 26;
            memmove(v18 + 5, Src, 2 * v8);
            v17 = &PopIrpList;
            *((_WORD *)v18 + v8 + 10) = 0;
          }
          *v18 = v20;
          v18 = (_DWORD *)((char *)v18 + v20);
        }
        v19 = *(_QWORD *)v19;
        v8 = -1LL;
      }
    }
  }
  PopIrpLockThread = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
  v21 = (unsigned __int8)InputBuffer;
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)InputBuffer <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)InputBuffer + 1));
      v12 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8(v21);
  if ( v4 )
  {
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = 4LL;
    *(_QWORD *)&InputBuffer_8 = v3;
    *((_QWORD *)&InputBuffer_8 + 1) = (unsigned int)v4;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer_8, 0x20u, 0LL, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x42424F50u);
}
