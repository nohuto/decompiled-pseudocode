__int64 __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r10
  ULONG_PTR v8; // rsi
  unsigned __int8 v9; // cl
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v11; // r8
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r9
  unsigned __int8 v14; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  unsigned __int64 *SparePtr; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // r14
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  ULONG_PTR *v23; // rcx
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v35; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-19h] BYREF
  __int128 v38; // [rsp+48h] [rbp-1h] BYREF
  __int128 v39; // [rsp+58h] [rbp+Fh]
  __int128 v40; // [rsp+68h] [rbp+1Fh] BYREF
  ULONG_PTR v41; // [rsp+78h] [rbp+2Fh]
  struct _KTHREAD *v42; // [rsp+C8h] [rbp+7Fh]

  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( FeatureFastResource2 )
    return ExAcquireFastResourceSharedStarveExclusive2(BugCheckParameter2, a2);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v42 = CurrentThread;
  v9 = (a3 == 0) + 1;
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
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v14 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v14 == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (v14 + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr != &CurrentThread[1].Spare19 )
    {
      while ( SparePtr[3] != BugCheckParameter2 )
      {
        SparePtr = (unsigned __int64 *)*SparePtr;
        if ( SparePtr == &CurrentThread[1].Spare19 )
          goto LABEL_24;
      }
      if ( SparePtr )
      {
        v23 = (ULONG_PTR *)SparePtr[6];
        v24 = SparePtr + 5;
        if ( (_QWORD *)*v23 == v24 )
        {
          *(_QWORD *)a2 = v24;
          v19 = 1;
          *(_QWORD *)(a2 + 8) = v23;
          *v23 = a2;
          v24[1] = a2;
          goto LABEL_34;
        }
LABEL_45:
        __fastfail(3u);
      }
    }
  }
LABEL_24:
  v18 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v8 = v18;
  if ( v18 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v18 + 16)) | 1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
  v19 = ExpTryAcquireResourceSharedStarveExclusive(BugCheckParameter2);
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      ExpAddFastOwnerEntryToThreadList(v42, v22, 0LL, a2);
      goto LABEL_34;
    }
    goto LABEL_45;
  }
  if ( a3 )
  {
    if ( v8 )
      KeAbPreWait((__int64 *)v8);
    v30 = *(_QWORD **)(BugCheckParameter2 + 56);
    v31 = (_QWORD *)(a2 + 56);
    if ( *v30 == BugCheckParameter2 + 48 )
    {
      *v31 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v30;
      *v30 = v31;
      *(_QWORD *)(BugCheckParameter2 + 56) = v31;
      ++*(_DWORD *)(BugCheckParameter2 + 72);
      *((_QWORD *)&v38 + 1) = 0LL;
      *((_QWORD *)&v40 + 1) = &v40;
      *(_QWORD *)&v40 = &v40;
      *((_QWORD *)&v39 + 1) = 393217LL;
      *(_QWORD *)&v39 = v42;
      v41 = v8;
      RtlInsertHeadCircularList((__int64 *)(BugCheckParameter2 + 32), &v38);
      *(_BYTE *)(a2 + 19) = 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      ExpAddFastOwnerEntryToThreadList(v42, v32, 0LL, a2);
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v14 <= 0xFu && v33 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (v14 + 1));
          v29 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v14);
      ExpWaitForResource((_DWORD *)BugCheckParameter2, (__int64)&v38, 0x10244u, 0LL);
      *(_BYTE *)(a2 + 19) = 0;
      if ( v8 )
        KeAbPreAcquire(BugCheckParameter2, v8);
      v19 = 1;
      goto LABEL_56;
    }
    goto LABEL_45;
  }
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
LABEL_34:
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v14 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (v14 + 1));
      v29 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v14);
LABEL_56:
  if ( v8 )
  {
    if ( v19 )
      *(_BYTE *)(v8 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v8);
  }
  return v19;
}
