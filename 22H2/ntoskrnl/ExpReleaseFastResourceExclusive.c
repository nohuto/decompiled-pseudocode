/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14038F4C0
 * Callers:
 *     ExReleaseFastResource @ 0x14038E1F0 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x1405B4380 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x1405B44B0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038E448 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14038F698 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char result; // al
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF
  __int64 v28; // [rsp+90h] [rbp+50h] BYREF
  __int64 *v29; // [rsp+98h] [rbp+58h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( *(_BYTE *)(a2 + 18) )
  {
    v5 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v5 == v5 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
      ExpPrepareToWakeResourceExclusive(
        BugCheckParameter2,
        &v29,
        &v28,
        &v27,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
      v7 = (_QWORD *)(a2 + 56);
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v8 + 8) == a2 + 56 && (_QWORD *)*v9 == v7 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeWakeWaitChain(&v29, 0LL, 2 * (unsigned int)(v28 != 0) + 1, v10);
        *(_BYTE *)(a2 + 18) = 0;
        v11 = *(_QWORD *)a2;
        v12 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v12 == a2 )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v5 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v22 = KeGetCurrentIrql();
              if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v24 = CurrentPrcb->SchedulerAssist;
                v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v21 = (v25 & v24[5]) == 0;
                v24[5] &= v25;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          result = *(_BYTE *)(a2 + 16);
          if ( result )
            result = KeAbPostReleaseEx(BugCheckParameter2, *(unsigned __int8 *)(a2 + 16));
          goto LABEL_11;
        }
      }
LABEL_18:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v15 != a2 )
      goto LABEL_18;
  }
  else
  {
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v15 != a2 )
      goto LABEL_18;
  }
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
