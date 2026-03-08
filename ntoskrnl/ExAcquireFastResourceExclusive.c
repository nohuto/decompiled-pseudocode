/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x1403C48B0
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x1403C4310 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x140342994 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x1403C4DA0 (ExpTryAcquireResourceExclusive.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x1403C4DC8 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpFindFastOwnerEntryForThread @ 0x1403C53E4 (ExpFindFastOwnerEntryForThread.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r10
  ULONG_PTR v8; // rsi
  unsigned __int8 v9; // dl
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v11; // r8
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r9
  __int64 v14; // r9
  unsigned __int8 v15; // r15
  _DWORD *SchedulerAssist; // r10
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v18; // r11
  ULONG_PTR *v19; // rcx
  __int64 v20; // rax
  char v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __int128 v42; // [rsp+58h] [rbp-28h]
  __int128 v43; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v44; // [rsp+78h] [rbp-8h]
  struct _KTHREAD *v45; // [rsp+C8h] [rbp+48h]

  v44 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( FeatureFastResource2 )
    return ExAcquireFastResourceExclusive2(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  v45 = CurrentThread;
  v8 = 0LL;
  v9 = 2 - (a3 != 0);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v11 = KeGetCurrentThread();
  if ( CurrentIrql > v9 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v9, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v11->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v11->MiscFlags & 0x400) == 0 && !v11->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v12 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v12 != v11 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v12, 0LL);
  v13 = *(_QWORD *)(a2 + 24);
  if ( v13 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v13, 0LL);
  LODWORD(v14) = 4;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  *(_BYTE *)(a2 + 17) |= 4u;
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v15 != 2 )
      v14 = (-1LL << (v15 + 1)) & 4;
    SchedulerAssist[5] |= v14;
    CurrentThread = v45;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v19 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v20 = FastOwnerEntryForThread + 40;
      if ( *v19 == v20 )
      {
        *(_QWORD *)a2 = v20;
        v21 = 1;
        *(_QWORD *)(a2 + 8) = v19;
        *v19 = a2;
        *(_QWORD *)(v20 + 8) = a2;
        goto LABEL_31;
      }
      goto LABEL_61;
    }
  }
  v22 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v8 = v22;
  if ( v22 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v22 + 16)) | 1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
  v21 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v21 )
  {
    v23 = *(_QWORD **)(BugCheckParameter2 + 56);
    v24 = (_QWORD *)(a2 + 56);
    if ( *v23 != BugCheckParameter2 + 48 )
      goto LABEL_61;
    *v24 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v23;
    *v23 = v24;
    *(_QWORD *)(BugCheckParameter2 + 56) = v24;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    ExpAddFastOwnerEntryToThreadList(v45, v25, 0LL, a2);
  }
  else
  {
    if ( a3 )
    {
      if ( v8 )
        KeAbPreWait((__int64 *)v8);
      v31 = *(_QWORD **)(BugCheckParameter2 + 56);
      v32 = (_QWORD *)(a2 + 56);
      if ( *v31 == BugCheckParameter2 + 48 )
      {
        *v32 = BugCheckParameter2 + 48;
        *(_QWORD *)(a2 + 64) = v31;
        *v31 = v32;
        *(_QWORD *)(BugCheckParameter2 + 56) = v32;
        *((_QWORD *)&v43 + 1) = &v43;
        *(_BYTE *)(a2 + 19) = 1;
        ++*(_DWORD *)(BugCheckParameter2 + 76);
        *(_QWORD *)&v43 = &v43;
        v33 = *(_QWORD *)(BugCheckParameter2 + 40);
        *((_QWORD *)&v41 + 1) = 0LL;
        *((_QWORD *)&v42 + 1) = 393217LL;
        *(_QWORD *)&v42 = v45;
        v44 = v8;
        if ( v33 )
        {
          v34 = *(_QWORD **)(v33 + 8);
          if ( *v34 != v33 )
            goto LABEL_61;
          *((_QWORD *)&v41 + 1) = *(_QWORD *)(v33 + 8);
          *(_QWORD *)&v41 = v33;
          *v34 = &v41;
          *(_QWORD *)(v33 + 8) = &v41;
        }
        else
        {
          *((_QWORD *)&v41 + 1) = &v41;
          *(_QWORD *)&v41 = &v41;
          *(_QWORD *)(BugCheckParameter2 + 40) = &v41;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        ExpAddFastOwnerEntryToThreadList(v45, v35, 0LL, a2);
        if ( KiIrqlFlags )
        {
          v36 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && v15 <= 0xFu && v36 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v38 = CurrentPrcb->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << (v15 + 1));
            v30 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v15);
        ExpWaitForResource((_DWORD *)BugCheckParameter2, (__int64)&v41, 0x10224u, 0LL);
        *(_BYTE *)(a2 + 19) = 0;
        if ( v8 )
          KeAbPreAcquire(BugCheckParameter2, v8);
        v21 = 1;
        goto LABEL_56;
      }
LABEL_61:
      __fastfail(3u);
    }
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  v18 = 2;
LABEL_31:
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && v15 <= 0xFu && v26 >= v18 )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v15);
LABEL_56:
  if ( v8 )
  {
    if ( v21 )
      *(_BYTE *)(v8 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v8);
  }
  return v21;
}
