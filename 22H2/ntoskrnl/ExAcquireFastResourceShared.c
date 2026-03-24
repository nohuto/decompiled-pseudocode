/*
 * XREFs of ExAcquireFastResourceShared @ 0x14038EC80
 * Callers:
 *     SeSecurityAttributePresent @ 0x14024E430 (SeSecurityAttributePresent.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402CE330 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x1402CEFB0 (SepMandatoryIntegrityCheck.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402F01D0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     ExpWaitForResource @ 0x1402C2A60 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14032A0DC (ExpPrepareToWaitForResourceShared.c)
 *     ExpTryAcquireResourceShared @ 0x14038EF8C (ExpTryAcquireResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038EFC0 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038F33C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
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
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // r15
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  ULONG_PTR *v22; // rax
  __int64 v23; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  ULONG_PTR *v28; // rcx
  __int64 v29; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v41[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+30h]

  v6 = 0LL;
  v7 = 2 - (a3 != 0);
  memset(v41, 0, sizeof(v41));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v42 = (__int64)CurrentThread;
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
      v28 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v29 = FastOwnerEntryForThread + 40;
      if ( *v28 == v29 )
      {
        *(_QWORD *)a2 = v29;
        v19 = 1;
        *(_QWORD *)(a2 + 8) = v28;
        *v28 = a2;
        *(_QWORD *)(v29 + 8) = a2;
LABEL_20:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v13 <= 0xFu && v31 >= v15 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v33 = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (v13 + 1));
              v35 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        goto LABEL_22;
      }
      goto LABEL_36;
    }
  }
  v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = v16;
  if ( v16 )
    *(_BYTE *)(a2 + 16) = (2 * ((v16 - *(_QWORD *)(v16 - 16LL * *(unsigned __int8 *)(v16 + 24) + 800)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v19 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v19 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 56);
    v21 = (_QWORD *)(a2 + 56);
    if ( *v20 == BugCheckParameter2 + 48 )
    {
      *v21 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v20;
      *v20 = v21;
      *(_QWORD *)(BugCheckParameter2 + 56) = v21;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      v22 = (ULONG_PTR *)(v42 + 1576);
      v23 = *(_QWORD *)(v42 + 1576);
      if ( *(_QWORD *)(v23 + 8) == v42 + 1576 )
      {
        *(_QWORD *)a2 = v23;
        *(_QWORD *)(a2 + 8) = v22;
        *(_QWORD *)(v23 + 8) = a2;
        *v22 = a2;
LABEL_19:
        v15 = 2;
        goto LABEL_20;
      }
    }
    goto LABEL_36;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_19;
  }
  if ( v6 )
    KeAbPreWait(v6, v17, v18);
  v25 = *(_QWORD **)(BugCheckParameter2 + 56);
  v26 = (_QWORD *)(a2 + 56);
  if ( *v25 != BugCheckParameter2 + 48 )
LABEL_36:
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v25;
  *v26 = BugCheckParameter2 + 48;
  *v25 = v26;
  *(_QWORD *)(BugCheckParameter2 + 56) = v26;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, v42, (__int64)v41);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(v42, v27, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && v13 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v35 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v41, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, v6, 0LL);
  v19 = 1;
LABEL_22:
  if ( v6 )
  {
    if ( v19 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v19;
}
