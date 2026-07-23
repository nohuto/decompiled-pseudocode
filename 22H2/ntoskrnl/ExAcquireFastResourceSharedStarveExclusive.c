/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14038E9B0
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B485C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     ExpWaitForResource @ 0x1402C2A60 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14031B2F0 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14032A0DC (ExpPrepareToWaitForResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038EFC0 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038F33C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r14
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v15; // r11
  ULONG_PTR *v16; // rcx
  __int64 v17; // rax
  char v18; // r15
  __int64 v20; // rax
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v38[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+30h]

  v6 = 0LL;
  v7 = 2 - (a3 != 0);
  memset(v38, 0, sizeof(v38));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v39 = (__int64)CurrentThread;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v7 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v7, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v16 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v17 = FastOwnerEntryForThread + 40;
      if ( *v16 == v17 )
      {
        *(_QWORD *)a2 = v17;
        v18 = 1;
        *(_QWORD *)(a2 + 8) = v16;
        *v16 = a2;
        *(_QWORD *)(v17 + 8) = a2;
        goto LABEL_15;
      }
LABEL_51:
      __fastfail(3u);
    }
  }
  v20 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = v20;
  if ( v20 )
    *(_BYTE *)(a2 + 16) = (2 * ((v20 - *(_QWORD *)(v20 - 16LL * *(unsigned __int8 *)(v20 + 24) + 800)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v18 = ExpTryAcquireResourceSharedStarveExclusive(BugCheckParameter2);
  if ( v18 )
  {
    v21 = *(_QWORD **)(BugCheckParameter2 + 56);
    v22 = (_QWORD *)(a2 + 56);
    if ( *v21 != BugCheckParameter2 + 48 )
      goto LABEL_51;
    *v22 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v21;
    *v21 = v22;
    *(_QWORD *)(BugCheckParameter2 + 56) = v22;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(v39, v23, 0LL, a2);
LABEL_24:
    v15 = 2;
LABEL_15:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v13 <= 0xFu && v28 >= v15 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v32 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    goto LABEL_17;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_24;
  }
  if ( v6 )
    KeAbPreWait(v6);
  v24 = *(_QWORD **)(BugCheckParameter2 + 56);
  v25 = (_QWORD *)(a2 + 56);
  if ( *v24 != BugCheckParameter2 + 48 )
    goto LABEL_51;
  *(_QWORD *)(a2 + 64) = v24;
  *v25 = BugCheckParameter2 + 48;
  *v24 = v25;
  *(_QWORD *)(BugCheckParameter2 + 56) = v25;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, v39, (__int64)v38);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(v39, v26, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && v13 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v32 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v38, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, v6, 0);
  v18 = 1;
LABEL_17:
  if ( v6 )
  {
    if ( v18 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v18;
}
