void __fastcall MiProbeUnlockPage(__int64 a1, __int16 a2, __int64 *a3, int *a4)
{
  unsigned __int64 CachedCommit; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  volatile signed __int64 *v14; // r13
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  __int64 v18; // r12
  char v19; // al
  __int16 v20; // ax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  __int16 v23; // ax
  __int64 v24; // rcx
  int v25; // ebp
  __int64 v26; // r14
  signed __int32 v27; // eax
  int v28; // eax
  __int64 *v29; // r15
  unsigned __int8 v30; // bp
  __int64 v31; // r14
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // r15
  struct _KPRCB *v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  __int64 BaseResidentPage; // rax
  __int64 v46; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v48; // [rsp+80h] [rbp+8h]
  int v49; // [rsp+88h] [rbp+10h] BYREF

  CachedCommit = 0xFFFFDE0000000000uLL;
  v9 = 0xFFFFFFFFFFLL;
  if ( (a2 & 0x100) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( (v10 & 0x10000000000LL) == 0 && ((v10 >> 60) & 7) != 1 )
    {
      v11 = v10 & 0xFFFFFFFFFFLL;
      if ( v11 != 0x3FFFFFFFFELL )
      {
        v12 = *a3;
        if ( *a3 != v11 )
        {
          if ( v12 != 0x3FFFFFFFFFLL )
          {
            MiUnlockPageTableCharges(48 * v12 - 0x220000000000LL);
            v9 = 0xFFFFFFFFFFLL;
          }
          if ( *(__int64 *)(a1 + 40) < 0 )
            v28 = 1;
          else
            v28 = 2;
          *a4 = v28;
          *a3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
        }
      }
    }
  }
  v13 = 0LL;
  v49 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v17 = 0x3FFFFFFFFFFFFFFFLL;
  v18 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v19 = *(_BYTE *)(a1 + 34);
  v48 = v18;
  if ( (v19 & 0x20) != 0 && (v19 & 8) == 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v15 = *(_QWORD *)a1 - 32LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v15 + 264));
  }
  if ( (a2 & 0x80u) != 0 )
  {
    v29 = (__int64 *)(a1 + 16);
    if ( !v15 )
    {
      v30 = *(_BYTE *)(a1 + 34);
      v31 = *v29;
      if ( (((*v29 & 0x400) == 0) & (unsigned __int8)~(v30 >> 3)) != 0 && (v31 & 4) != 0 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(a1 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
        *v29 = v31 & 0xFFFFFFFFFFFFFFFBuLL;
        v17 = 0x3FFFFFFFFFFFFFFFLL;
      }
      *(_BYTE *)(a1 + 34) = v30 | 0x10;
    }
    v32 = *(_QWORD *)(a1 + 40);
    if ( (v32 & 0x10000000000LL) == 0 && v32 < 0 )
    {
      v39 = *v29;
      if ( (*v29 & 0x400) != 0 )
      {
        if ( qword_140C657C0 && (v39 & 0x10) == 0 )
          v39 &= ~qword_140C657C0;
        v14 = *(volatile signed __int64 **)(v39 >> 16);
      }
    }
  }
  v20 = *(_WORD *)(a1 + 32);
  if ( !v20 )
    MiBadRefCount(a1, v9, CachedCommit);
  v21 = *(_QWORD *)(a1 + 40);
  v22 = v20 == 1;
  v23 = v20 - 1;
  *(_WORD *)(a1 + 32) = v23;
  if ( v22 && (v21 & 0x20000000000000LL) != 0 )
    goto LABEL_81;
  if ( (v21 & 0x10000000000LL) == 0 && (v21 & 0x20000000000000LL) == 0 )
  {
    CachedCommit = 0LL;
    v24 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        if ( v24 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          CachedCommit = 1LL;
        if ( !(_DWORD)CachedCommit )
          goto LABEL_31;
      }
      else if ( v23 != 2 || !v24 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      {
        goto LABEL_31;
      }
      v25 = 0;
    }
    else
    {
      v25 = 1;
    }
    v17 = 0xFFFFF6BFFFFFFF78uLL;
    CachedCommit = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( CachedCommit > 0xFFFFF6BFFFFFFF78uLL || CachedCommit < 0xFFFFF68000000000uLL )
    {
      v33 = *(_BYTE *)(a1 + 35);
      if ( (v33 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 35) = v33 & 0xDF;
        goto LABEL_30;
      }
    }
    v26 = *(_QWORD *)(qword_140C67048 + 8 * ((v21 >> 43) & 0x3FF));
    if ( (v21 & 0x8000000000000000uLL) != 0LL && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || CachedCommit <= 0xFFFFF6BFFFFFFF78uLL
      && CachedCommit >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(a1 + 35) & 0x20) != 0
      || v25 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v34 = 1LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( !*(_QWORD *)(v26 + 16440) )
        goto LABEL_123;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 16424), &LockHandle);
      v34 = MiRestockOverCommit(v26, 1LL);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = -1LL << (LockHandle.OldIrql + 1);
          v44 = ~(unsigned __int16)v21;
          v22 = (v44 & SchedulerAssist[5]) == 0;
          CachedCommit = (unsigned int)v44 & SchedulerAssist[5];
          SchedulerAssist[5] = CachedCommit;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v18 = v48;
      if ( v34 )
      {
LABEL_123:
        if ( (_UNKNOWN *)v26 == &MiSystemPartition )
        {
          v35 = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&v35->CachedCommit);
          CachedCommit = v35->CachedCommit;
          if ( v34 + CachedCommit <= 0x100 )
          {
            while ( 1 )
            {
              v36 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v35->CachedCommit,
                      v34 + CachedCommit,
                      CachedCommit);
              if ( v36 == CachedCommit )
                break;
              CachedCommit = v36;
              if ( v36 + v34 > 0x100 )
                goto LABEL_72;
            }
            v17 = 1LL;
LABEL_27:
            CachedCommit = (unsigned __int64)KeGetCurrentPrcb();
            v21 = *(int *)(CachedCommit + 34460);
            if ( (_DWORD)v21 == -1 )
            {
              v17 = 1LL;
            }
            else
            {
              if ( v21 + 1 <= 0x100 )
              {
                while ( 1 )
                {
                  v27 = _InterlockedCompareExchange((volatile signed __int32 *)(CachedCommit + 34460), v21 + 1, v21);
                  v22 = (_DWORD)v21 == v27;
                  v21 = v27;
                  if ( v22 )
                    break;
                  if ( v27 == -1 || (unsigned __int64)(v27 + 1LL) > 0x100 )
                    goto LABEL_67;
                }
LABEL_30:
                if ( v25 )
                {
LABEL_81:
                  MiPfnReferenceCountIsZero(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
                  goto LABEL_31;
                }
                goto LABEL_31;
              }
LABEL_67:
              if ( (int)v21 > 192
                && (_DWORD)v21 == _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(CachedCommit + 34460),
                                    192,
                                    v21) )
              {
                v17 = (int)v21 - 192 + 1LL;
              }
              if ( !v17 )
                goto LABEL_30;
            }
LABEL_71:
            v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v17);
            goto LABEL_30;
          }
        }
LABEL_72:
        v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17576), -v34);
        v38 = *(_QWORD *)(v26 + 16416);
        if ( v37 >= v38 && v37 - v34 < v38 || (v21 = *(_QWORD *)(v26 + 16408), v37 >= v21) && v37 - v34 < v21 )
          MiSyncCommitSignals(v26, 0LL, CachedCommit);
      }
    }
    v17 = 1LL;
    if ( (_UNKNOWN *)v26 != &MiSystemPartition )
      goto LABEL_71;
    goto LABEL_27;
  }
LABEL_31:
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0
    && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
    && *(_WORD *)(a1 + 32) == 2 )
  {
    *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
    BaseResidentPage = MiGetBaseResidentPage(
                         a1,
                         v21,
                         CachedCommit,
                         v17,
                         LockHandle.LockQueue.Next,
                         LockHandle.LockQueue.Lock);
    v46 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFLL) - 1;
    *(_QWORD *)BaseResidentPage ^= (v46 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFFFFFFLL;
    if ( BaseResidentPage != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v46 )
      BaseResidentPage = 0LL;
    v13 = BaseResidentPage;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
    MiReleasePageFileInfo(v18, v16, 1);
  if ( v13 )
    MiFinishLargePageFree(v13, 1LL, 1LL, 0LL);
  if ( v14 )
    MiDereferenceControlAreaProbe(v14, 1);
  if ( (_UNKNOWN *)v18 != &MiSystemPartition )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v18 + 2432));
}
