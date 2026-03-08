/*
 * XREFs of ExAcquireFastResourceShared @ 0x1403C3C70
 * Callers:
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C33D4 (ExpFastResourceLegacyAcquireShared.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     RtlInsertHeadCircularList @ 0x1402E22E4 (RtlInsertHeadCircularList.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForResource @ 0x140342994 (ExpWaitForResource.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpTryAcquireResourceShared @ 0x1403C42DC (ExpTryAcquireResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x1403C4DC8 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExAcquireFastResourceShared2 @ 0x14040D7F0 (ExAcquireFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v7; // r14
  unsigned __int8 v8; // dl
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  unsigned __int64 *SparePtr; // rax
  struct _KTHREAD *v17; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v19; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  int SessionId; // eax
  ULONG_PTR *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 v27; // r15
  signed __int64 *v28; // rdx
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  unsigned __int8 v32; // cl
  ULONG_PTR *p_Spare19; // rax
  struct _KTHREAD **v34; // rcx
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  struct _KTHREAD *v42; // r15
  __int64 v43; // rdx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-69h] BYREF
  struct _KTHREAD *v49; // [rsp+30h] [rbp-39h]
  __int128 v50; // [rsp+40h] [rbp-29h] BYREF
  __int64 v51; // [rsp+50h] [rbp-19h]
  __int128 v52; // [rsp+58h] [rbp-11h] BYREF
  __int128 v53; // [rsp+68h] [rbp-1h]
  __int128 v54; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+88h] [rbp+1Fh]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v58; // [rsp+E8h] [rbp+7Fh]

  v52 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  if ( FeatureFastResource2 )
    return ExAcquireFastResourceShared2(BugCheckParameter2, a2);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v49 = CurrentThread;
  v8 = (a3 == 0) + 1;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v8, 0LL);
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
    if ( v13 == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (-1LL << (v13 + 1)) & 4;
    SchedulerAssist[5] |= v15;
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
        v25 = (ULONG_PTR *)SparePtr[6];
        v26 = SparePtr + 5;
        if ( (_QWORD *)*v25 == v26 )
        {
          *(_QWORD *)a2 = v26;
          v27 = 1;
          *(_QWORD *)(a2 + 8) = v25;
          *v25 = a2;
          v26[1] = a2;
          goto LABEL_57;
        }
LABEL_68:
        __fastfail(3u);
      }
    }
  }
LABEL_24:
  v17 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v17->AbEntrySummary;
  if ( v17->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)v17)) != 0 )
  {
    _BitScanForward(&v19, AbEntrySummary);
    v58 = v19;
    v17->AbEntrySummary = AbEntrySummary & ~(1 << v19);
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      _m_prefetchw(v21);
      v22 = *v21;
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange(v21, v22 & 0xFFDFFFFF, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v17[1].Process + 12 * v58);
    if ( BugCheckParameter2 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v17->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( v7 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v7 + 16)) | 1;
  *(_QWORD *)&v50 = 0LL;
  *((_QWORD *)&v50 + 1) = BugCheckParameter2 + 96;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v50, BugCheckParameter2 + 96);
  }
  else
  {
    v28 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(BugCheckParameter2 + 96), (__int64)&v50);
    if ( v28 )
      KxWaitForLockOwnerShip((signed __int64)&v50, v28);
  }
  v27 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v27 )
  {
    v29 = *(_QWORD **)(BugCheckParameter2 + 56);
    v30 = (_QWORD *)(a2 + 56);
    if ( *v29 != BugCheckParameter2 + 48 )
      goto LABEL_68;
    *v30 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v29;
    *v29 = v30;
    *(_QWORD *)(BugCheckParameter2 + 56) = v30;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
LABEL_53:
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      p_Spare19 = &v49[1].Spare19;
      v34 = (struct _KTHREAD **)v49[1].WaitBlock[3].SparePtr;
      if ( v34[1] != (struct _KTHREAD *)&v49[1].Spare19 )
        goto LABEL_68;
      *(_QWORD *)a2 = v34;
      *(_QWORD *)(a2 + 8) = p_Spare19;
      v34[1] = (struct _KTHREAD *)a2;
      *p_Spare19 = a2;
      goto LABEL_57;
    }
    _m_prefetchw(&v50);
    v31 = v50;
    if ( !(_QWORD)v50 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v50 + 1), 0LL, (signed __int64)&v50) == &v50 )
        goto LABEL_53;
      v31 = KxWaitForLockChainValid((__int64 *)&v50);
    }
    *(_QWORD *)&v50 = 0LL;
    v32 = BYTE8(v50);
    if ( ((v32 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v31 + 8), *((__int64 *)&v50 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v48, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v31 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_53;
  }
  if ( a3 )
  {
    if ( v7 )
      KeAbPreWait((__int64 *)v7);
    v40 = *(_QWORD **)(BugCheckParameter2 + 56);
    v41 = (_QWORD *)(a2 + 56);
    if ( *v40 == BugCheckParameter2 + 48 )
    {
      v42 = v49;
      *v41 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v40;
      *v40 = v41;
      *(_QWORD *)(BugCheckParameter2 + 56) = v41;
      ++*(_DWORD *)(BugCheckParameter2 + 72);
      *((_QWORD *)&v54 + 1) = &v54;
      *(_QWORD *)&v54 = &v54;
      *((_QWORD *)&v52 + 1) = 0LL;
      *((_QWORD *)&v53 + 1) = 393217LL;
      *(_QWORD *)&v53 = v42;
      v55 = v7;
      RtlInsertHeadCircularList((__int64 *)(BugCheckParameter2 + 32), &v52);
      *(_BYTE *)(a2 + 19) = 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v50);
      ExpAddFastOwnerEntryToThreadList(v42, v43, 0LL, a2);
      if ( KiIrqlFlags )
      {
        v44 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v13 <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v39 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(v13);
      ExpWaitForResource((_DWORD *)BugCheckParameter2, (__int64)&v52, 0x10244u, 0LL);
      *(_BYTE *)(a2 + 19) = 0;
      if ( v7 )
        KeAbPreAcquire(BugCheckParameter2, v7);
      v27 = 1;
      goto LABEL_79;
    }
    goto LABEL_68;
  }
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v50);
LABEL_57:
  if ( KiIrqlFlags )
  {
    v35 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v13 <= 0xFu && v35 >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v39 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  __writecr8(v13);
LABEL_79:
  if ( v7 )
  {
    if ( v27 )
      *(_BYTE *)(v7 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v27;
}
