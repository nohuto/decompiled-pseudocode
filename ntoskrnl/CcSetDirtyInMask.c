__int64 __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // rax
  struct _SLIST_ENTRY *v8; // rsi
  int v9; // r12d
  int v10; // r8d
  __int64 result; // rax
  int v12; // r8d
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  signed __int64 v16; // r14
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v18; // r13
  unsigned int AbEntrySummary; // eax
  unsigned int v20; // ecx
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  int SessionId; // eax
  unsigned __int8 v24; // si
  __int64 v25; // rbx
  __int64 v26; // rdx
  signed __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rsi
  signed __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  volatile __int64 *v33; // r8
  unsigned __int8 v34; // dl
  __int64 v35; // r8
  _DWORD *v36; // rdx
  int v37; // ebx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r15
  _QWORD *v42; // rsi
  _BYTE *v43; // r14
  _BYTE *v44; // r9
  _QWORD *v45; // r11
  _QWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v50; // rsi
  ULONG_PTR v51; // rbx
  __int64 v52; // rcx
  bool v53; // zf
  unsigned __int64 v54; // rdi
  unsigned __int32 v55; // eax
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  _DWORD *v58; // r11
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rcx
  PSLIST_ENTRY v62; // rbx
  struct _KTHREAD *v63; // r10
  unsigned __int64 DeepFreezeStartTime; // rcx
  unsigned __int8 Lock; // cl
  PSLIST_ENTRY v66; // rsi
  struct _SLIST_ENTRY *v67; // rax
  __int64 v68; // rax
  __int64 **v69; // rdx
  __int64 *v70; // rcx
  __int64 *v71; // rdx
  __int64 **v72; // r8
  unsigned __int8 v73; // cl
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  __int64 v77; // r14
  int v78; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v83; // eax
  unsigned __int64 v84; // rdi
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  unsigned __int8 v87; // cl
  struct _KPRCB *v88; // r9
  int v89; // eax
  _DWORD *v90; // r8
  signed __int32 v91[8]; // [rsp+0h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v94; // [rsp+50h] [rbp-19h]
  unsigned int v95; // [rsp+58h] [rbp-11h]
  int v96; // [rsp+5Ch] [rbp-Dh]
  __int64 v97; // [rsp+60h] [rbp-9h]
  __int64 v98; // [rsp+68h] [rbp-1h]
  signed __int64 v99; // [rsp+70h] [rbp+7h]
  signed __int64 v100; // [rsp+78h] [rbp+Fh]
  __int64 v101; // [rsp+88h] [rbp+1Fh]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v104; // [rsp+E0h] [rbp+77h]

  v4 = 0LL;
  v5 = a3;
  ListEntry = 0LL;
  v7 = *a2;
  v104 = 0;
  v101 = a3;
  v8 = 0LL;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v7 ^ (v7 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xCECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_DWORD *)(a1 + 152);
  result = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  *(_DWORD *)(a1 + 556) = result;
  v12 = v10 & 0x40000000;
  if ( v12 && v5 + *a2 <= *(_QWORD *)(a1 + 48) )
    return result;
  v13 = *a2 >> 12;
  v14 = *a2 - 1;
  v99 = v13;
  v15 = *(_QWORD *)(a1 + 32);
  v16 = (v5 + v14) >> 12;
  v100 = v16;
  if ( v15 / 4096 <= v16 )
    KeBugCheckEx(0x34u, 0xD15uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v98 = *(_QWORD *)(a1 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v97 = *(_QWORD *)(a1 + 600);
  else
    v97 = 0LL;
  if ( v12 )
  {
    v18 = a1 + 288;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
LABEL_71:
    v51 = v18;
    v52 = *a2 + v101;
    if ( v52 > *(_QWORD *)(a1 + 48) )
    {
      v53 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
      *(_QWORD *)(a1 + 48) = v52;
      if ( !v53 )
      {
        v77 = v98;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v98 + 768), &LockHandle);
        v78 = *(_DWORD *)(a1 + 152);
        if ( (v78 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v78 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(a1);
        CcScheduleLazyWriteScan(v77, v97, 0LL, 0LL);
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v83 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v53 = (v83 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v83;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v51 = v18;
      }
    }
    goto LABEL_73;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
      {
        ++dword_140CF8414;
        result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !result )
        {
          ++dword_140CF8418;
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CF8430)(
                     (unsigned int)dword_140CF8424,
                     (unsigned int)dword_140CF842C,
                     (unsigned int)dword_140CF8428);
          if ( !result )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            v18 = a1 + 288;
            goto LABEL_163;
          }
        }
        ListEntry = (PSLIST_ENTRY)result;
      }
      CurrentThread = KeGetCurrentThread();
      v9 = 1;
      v96 = 1;
      v18 = a1 + 288;
      v95 = 0;
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 288, CurrentThread)) != 0 )
      {
        _BitScanForward(&v20, AbEntrySummary);
        v95 = v20;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v20);
        v21 = KeGetCurrentPrcb();
        v22 = (signed __int32 *)v21->SchedulerAssist;
        if ( v22 )
        {
          _m_prefetchw(v22);
          v56 = *v22;
          do
          {
            v57 = v56;
            v56 = _InterlockedCompareExchange(v22, v56 & 0xFFDFFFFF, v56);
          }
          while ( v57 != v56 );
          if ( (v56 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
        _enable();
        v4 = (__int64)(&CurrentThread[1].Process + 12 * v95);
        if ( v18 - qword_140C65668 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v4 + 8) = SessionId;
        *(_QWORD *)v4 = v18 & 0x7FFFFFFFFFFFFFFCLL;
      }
      v24 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v18, 0) )
        ExpAcquireFastMutexContended(a1 + 288, v4);
      if ( v4 )
        *(_BYTE *)(v4 + 18) = 1;
      *(_QWORD *)(a1 + 296) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 336) = v24;
      v25 = *(_QWORD *)(a1 + 168);
      v94 = v25;
      if ( !v25 )
      {
        result = CcAllocateInitializeMbcb();
        v94 = result;
        v25 = result;
        if ( !result )
          goto LABEL_163;
        *(_QWORD *)(a1 + 168) = result;
      }
      if ( v13 == v16 && v13 == *(_QWORD *)(v25 + 40) )
        goto LABEL_70;
      if ( (unsigned __int64)v16 < 0x300 || *(_WORD *)v25 == 761 )
        break;
      v66 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v25 + 80) )
      {
        v67 = *(struct _SLIST_ENTRY **)(v25 + 88);
        *v66 = *v67;
        v66[1] = v67[1];
        v66[2] = v67[2];
        v66[3] = v67[3];
        v66[4] = v67[4];
        v66[5] = v67[5];
        memset(*(void **)(v25 + 88), 0, 0x60uLL);
      }
      v68 = v25 + 16;
      *(_QWORD *)(v25 + 88) = v66;
      v69 = *(__int64 ***)(v25 + 24);
      v70 = (__int64 *)(v25 + 96);
      ListEntry = 0LL;
      if ( *v69 != (__int64 *)(v25 + 16) )
        goto LABEL_151;
      *(_QWORD *)(v25 + 104) = v69;
      *v70 = v68;
      *v69 = v70;
      v71 = (__int64 *)(v25 + 144);
      *(_QWORD *)(v25 + 24) = v70;
      *(_QWORD *)(v25 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v25 + 120) = -1;
      v72 = *(__int64 ***)(v25 + 24);
      if ( *v72 != (__int64 *)v68 )
        goto LABEL_151;
      *v71 = v68;
      *(_QWORD *)(v25 + 152) = v72;
      *v72 = v71;
      *(_QWORD *)(v25 + 24) = v71;
      *(_QWORD *)(v25 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v25 + 168) = -1;
      *(_WORD *)v25 = 761;
      ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
      v4 = 0LL;
      v9 = 0;
    }
    result = *(_QWORD *)(v25 + 16);
    v26 = v25 + 16;
    v27 = v13 & 0xFFFFFFFFFFFFE000uLL;
    v28 = 0LL;
    v29 = v26;
    while ( 1 )
    {
      v30 = *(_QWORD *)(result + 16);
      if ( v27 == v30 )
      {
        v28 = result;
        goto LABEL_27;
      }
      if ( *(_DWORD *)(result + 32) || v28 )
      {
        if ( v27 > v30 )
          v29 = result;
      }
      else
      {
        v28 = result;
      }
      result = *(_QWORD *)result;
      if ( result == v26 )
        break;
      if ( v27 < *(_QWORD *)(result + 16) && v28 )
        goto LABEL_95;
    }
    if ( v28 )
    {
LABEL_95:
      v60 = *(_QWORD *)v28;
      result = *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) == v28 && *(_QWORD *)result == v28 )
      {
        *(_QWORD *)result = v60;
        *(_QWORD *)(v60 + 8) = result;
        goto LABEL_98;
      }
LABEL_151:
      __fastfail(3u);
    }
    result = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x72426343u);
    v28 = result;
    if ( !result )
      break;
LABEL_98:
    v61 = *(_QWORD *)v29;
    if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
      goto LABEL_151;
    *(_QWORD *)v28 = v61;
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)(v61 + 8) = v28;
    *(_QWORD *)v29 = v28;
    v53 = *(_QWORD *)(v28 + 40) == 0LL;
    *(_QWORD *)(v28 + 16) = v27;
    *(_DWORD *)(v28 + 24) = -1;
    *(_DWORD *)(v28 + 28) = 0;
    if ( v53 )
    {
      v62 = ListEntry;
      result = (__int64)memset(ListEntry, 0, 0x400uLL);
      *(_QWORD *)(v28 + 40) = v62;
      ListEntry = 0LL;
    }
LABEL_27:
    if ( !v28 )
      break;
    v31 = *(_QWORD *)(v28 + 16);
    if ( v13 < v31 + *(unsigned int *)(v28 + 24) )
      *(_DWORD *)(v28 + 24) = v13 - v31;
    if ( v16 > v31 + *(unsigned int *)(v28 + 28) )
      *(_DWORD *)(v28 + 28) = v16 - v31;
    v32 = v98;
    LockHandle.LockQueue.Next = 0LL;
    v33 = (volatile __int64 *)(v98 + 768);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v98 + 768);
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
    {
      v58 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v34 == 2 )
        LODWORD(v59) = 4;
      else
        v59 = (-1LL << (v34 + 1)) & 4;
      v58[5] |= v59;
    }
    LockHandle.OldIrql = v34;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v33);
    }
    else if ( _InterlockedExchange64(v33, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    if ( *(_DWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 152) & 2) != 0 )
    {
      v35 = v94;
    }
    else
    {
      CcScheduleLazyWriteScan(v32, v97, 0LL, 0LL);
      CcInsertIntoDirtySharedCacheMapList(a1);
      v35 = v94;
      *(_QWORD *)(v94 + 32) = v13;
    }
    v36 = (_DWORD *)(*(_QWORD *)(v28 + 40) + 4 * ((unsigned __int64)(unsigned int)(v13 - *(_DWORD *)(v28 + 16)) >> 5));
    v37 = 1 << (v13 & 0x1F);
    if ( v13 <= v16 )
    {
      v38 = v104;
      v39 = v16 - v13 + 1;
      v99 = v16 + 1;
      do
      {
        if ( (*v36 & v37) == 0 )
        {
          *v36 |= v37;
          ++v38;
        }
        v40 = 2 * v37;
        if ( !(2 * v37) )
          ++v36;
        v37 = 1;
        if ( v40 )
          v37 = v40;
        --v39;
      }
      while ( v39 );
      v104 = v38;
      v35 = v94;
    }
    v41 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v42 = *(_QWORD **)(a1 + 600);
      *(_QWORD *)(v41 + 1056) += v104;
      v43 = (char *)v42 + 708;
      v44 = (char *)v42 + 1172;
      v45 = v42 + 124;
      if ( v42 )
        v42[124] += v104;
    }
    else
    {
      v42 = 0LL;
      v45 = (_QWORD *)(v41 + 1056);
      *(_QWORD *)(v41 + 1056) += v104;
      v43 = (_BYTE *)(v41 + 780);
      v44 = (_BYTE *)(v41 + 1292);
    }
    if ( v35 )
      *(_DWORD *)(v35 + 8) += v104;
    *(_DWORD *)(v28 + 32) += v104;
    *(_DWORD *)(a1 + 112) += v104;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 32LL), v104);
    v46 = *(_QWORD **)(a1 + 512);
    v46[30] += v46[4];
    v47 = v46[31];
    v48 = *(_QWORD *)(a1 + 512);
    if ( v47 <= *(_QWORD *)(v48 + 32) )
      v47 = *(_QWORD *)(v48 + 32);
    v46[31] = v47;
    if ( v42 )
    {
      v46[32] += v42[127];
      v46[33] = v42[128];
      v46[34] = v42[129];
    }
    ++v46[35];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), v104);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
    if ( *v44 && *v45 >= 0x2000uLL )
    {
      LOBYTE(v46) = 1;
      CcScheduleLazyWriteScan(v41, v42, v46, 0LL);
    }
    if ( *v43 )
    {
      CcScheduleLazyWriteScan(v41, v42, 0LL, 0LL);
      *v43 = 0;
    }
    if ( !CcEnablePerVolumeLazyWriter )
      CcAdjustWriteBehindThreadPoolIfNeeded(v41, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_66;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_66;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                     (volatile __int64 *)&Next->Lock,
                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v91, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
    }
LABEL_66:
    v50 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v73 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v73 <= 0xFu && LockHandle.OldIrql <= 0xFu && v73 >= 2u )
      {
        v74 = KeGetCurrentPrcb();
        v75 = v74->SchedulerAssist;
        v76 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v53 = (v76 & v75[5]) == 0;
        v75[5] &= v76;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
    __writecr8(v50);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v104 )
    {
      v63 = a4;
      if ( !a4 )
      {
        v63 = KeGetCurrentThread();
        a4 = v63;
      }
      DeepFreezeStartTime = v63->Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        if ( v104 << 12 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v104 << 12);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
      }
    }
    if ( v37 )
    {
      *(_QWORD *)(v94 + 40) = v100;
LABEL_70:
      v8 = ListEntry;
      goto LABEL_71;
    }
    v16 = v100;
    v4 = 0LL;
    v13 = v99;
    v9 = v96;
  }
  v9 = v96;
LABEL_163:
  v51 = v18;
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v98 + 768), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    result = KxReleaseQueuedSpinLock(&LockHandle);
    v84 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v85 = KeGetCurrentPrcb();
        v86 = v85->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v53 = ((unsigned int)result & v86[5]) == 0;
        v86[5] &= result;
        if ( v53 )
          result = KiRemoveSystemWorkPriorityKick(v85);
      }
    }
    __writecr8(v84);
  }
  v8 = ListEntry;
  if ( v9 )
  {
LABEL_73:
    v54 = *(unsigned __int8 *)(v51 + 48);
    *(_QWORD *)(v51 + 8) = 0LL;
    v55 = _InterlockedCompareExchange((volatile signed __int32 *)v51, 1, 0);
    if ( v55 )
      ExpReleaseFastMutexContended(v51, v55);
    if ( KiIrqlFlags )
    {
      v87 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v87 >= 2u )
      {
        v88 = KeGetCurrentPrcb();
        v89 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v90 = v88->SchedulerAssist;
        v53 = (v89 & v90[5]) == 0;
        v90[5] &= v89;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v88);
      }
    }
    __writecr8(v54);
    result = KeAbPostRelease(v51);
  }
  if ( v8 )
  {
    ++dword_140CF841C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_140CF8410 )
    {
      ++dword_140CF8420;
      return ((__int64 (__fastcall *)(struct _SLIST_ENTRY *))qword_140CF8438)(v8);
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, v8);
    }
  }
  return result;
}
