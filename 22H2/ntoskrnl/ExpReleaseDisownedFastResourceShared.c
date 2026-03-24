/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x14038DEEC
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14038DE70 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1405B4260 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     KeAbCrossThreadRelease @ 0x14038E120 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038E448 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14038E538 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r13
  __int64 *v6; // rcx
  __int64 **v7; // rax
  LONG_PTR result; // rax
  _QWORD *v9; // r14
  volatile __int64 *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  _DWORD *v16; // r9
  __int64 v17; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v32; // [rsp+A8h] [rbp+58h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  v30 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(&v28, 0, sizeof(v28));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = a2[4];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 1592);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 1592));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
    {
LABEL_5:
      *v7 = v6;
      v6[1] = (__int64)v7;
      *a2 = 0LL;
      a2[1] = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_7;
    }
LABEL_19:
    __fastfail(3u);
  }
  v9 = a2 + 5;
  v28.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  v28.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KxAcquireQueuedSpinLock((__int64)&v28, v10);
    LOBYTE(v17) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v17);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
      goto LABEL_5;
    goto LABEL_19;
  }
  KxAcquireQueuedSpinLock((__int64)&v28, v10);
  ExpPrepareToWakeResourceShared(a1, &v32, &v31, &v30, v28.LockQueue.Next, v28.LockQueue.Lock, *(_QWORD *)&v28.OldIrql);
  v11 = a2 + 7;
  v12 = a2[7];
  v13 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 )
    goto LABEL_19;
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_19;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    goto LABEL_19;
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v9 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v32, 0LL, 2 * (unsigned int)(v31 != 0) + 1, v16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( *((_BYTE *)a2 + 16) )
    KeAbCrossThreadRelease(a1, *((unsigned __int8 *)a2 + 16), v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
