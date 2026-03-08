/*
 * XREFs of MiCanBatchHardFaultPages @ 0x140284A30
 * Callers:
 *     MiAddPageToInsertList @ 0x1402848D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140287110 (MiIsPageEligibleForProtectedStandby.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140654060 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiCanBatchHardFaultPages(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  char v6; // r11
  _QWORD *v7; // rcx
  __int16 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // r10
  char v11; // r11
  unsigned __int64 CachedCommit; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct _KPRCB *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  struct _KPRCB *v22; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v24; // zf
  signed __int32 v25; // eax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v5 = *(_DWORD *)(*a1 + 112LL);
  if ( (v5 & 1) != 0 && HIWORD(v5) )
    *(_WORD *)(v2 + 114) = HIWORD(v5) - 1;
  *(_BYTE *)(a2 + 34) &= ~0x20u;
  *(_QWORD *)a2 = 0LL;
  if ( a1[7] && !(unsigned int)MiIsPageEligibleForProtectedStandby() )
    return 2LL;
  if ( (*(_BYTE *)(a2 + 34) & 0x18) != 0 )
    return 2LL;
  if ( (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0LL) )
    return 2LL;
  v6 = *(_BYTE *)(a2 + 35);
  if ( (v6 & 0x40) != 0 )
    return 2LL;
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    return 2LL;
  if ( (v6 & 0x10) != 0 )
    return 2LL;
  if ( *(int *)(v2 + 80) < 0 )
    return 2LL;
  v7 = (_QWORD *)a1[2];
  if ( (unsigned __int64)v7 >= a1[3] )
    return 2LL;
  if ( (*(_DWORD *)(v2 + 192) & 0x8000) != 0 )
  {
    *v7 |= 0x8000000000000000uLL;
    return 0LL;
  }
  v8 = *(_WORD *)(a2 + 32);
  if ( v8 == 1 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = (v9 >> 53) & 1;
    if ( ((v9 >> 53) & 1) != 0 || (*(_WORD *)(a2 + 32) = 0, (unsigned int)MiAreChargesNeededToLockPage(a2)) )
    {
      *(_WORD *)(a2 + 32) = v8 - 1;
      if ( v8 == 1 && v10 || !(unsigned int)MiAreChargesNeededToLockPage(a2) )
        return 1LL;
      CachedCommit = 0xFFFFF68000000000uLL;
      v13 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
      if ( (v13 > 0xFFFFF6BFFFFFFF78uLL || v13 < 0xFFFFF68000000000uLL) && (v11 & 0x20) != 0 )
      {
        *(_BYTE *)(a2 + 35) = v11 & 0xDF;
        return 1LL;
      }
      v14 = *(_QWORD *)(qword_140C67048 + 8 * ((v9 >> 43) & 0x3FF));
      if ( (v9 & 0x8000000000000000uLL) != 0LL && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0
        || (unsigned int)MiIsPfnCommitNotCharged(a2) )
      {
        v15 = 1LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( !*(_QWORD *)(v14 + 16440) )
          goto LABEL_70;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 16424), &LockHandle);
        v15 = MiRestockOverCommit(v14, 1LL);
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v31 & SchedulerAssist[5]) == 0;
            CachedCommit = (unsigned int)v31 & SchedulerAssist[5];
            SchedulerAssist[5] = CachedCommit;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        if ( v15 )
        {
LABEL_70:
          if ( (_UNKNOWN *)v14 == &MiSystemPartition )
          {
            v16 = KeGetCurrentPrcb();
            _m_prefetchw((const void *)&v16->CachedCommit);
            CachedCommit = v16->CachedCommit;
            if ( v15 + CachedCommit <= 0x100 )
            {
              while ( 1 )
              {
                v17 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v16->CachedCommit,
                        v15 + CachedCommit,
                        CachedCommit);
                if ( v17 == CachedCommit )
                  break;
                CachedCommit = v17;
                if ( v17 + v15 > 0x100 )
                  goto LABEL_28;
              }
              v18 = 1LL;
LABEL_31:
              v22 = KeGetCurrentPrcb();
              CachedResidentAvailable = (int)v22->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable == -1 )
              {
                v18 = 1LL;
              }
              else
              {
                if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                {
                  do
                  {
                    v25 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v22->CachedResidentAvailable,
                            CachedResidentAvailable + 1,
                            CachedResidentAvailable);
                    v24 = (_DWORD)CachedResidentAvailable == v25;
                    LODWORD(CachedResidentAvailable) = v25;
                    if ( v24 )
                      return 1LL;
                  }
                  while ( v25 != -1 && (unsigned __int64)(v25 + 1LL) <= 0x100 );
                }
                if ( (int)CachedResidentAvailable > 192
                  && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                          (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                                          192,
                                                          CachedResidentAvailable) )
                {
                  v18 = (int)CachedResidentAvailable - 192 + 1LL;
                }
                if ( !v18 )
                  return 1LL;
              }
LABEL_41:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 17280), v18);
              return 1LL;
            }
          }
LABEL_28:
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 17576), -v15);
          v20 = *(_QWORD *)(v14 + 16416);
          if ( v19 >= v20 && v19 - v15 < v20 || (v21 = *(_QWORD *)(v14 + 16408), v19 >= v21) && v19 - v15 < v21 )
            MiSyncCommitSignals(v14, 0LL, CachedCommit);
        }
      }
      v18 = 1LL;
      if ( (_UNKNOWN *)v14 != &MiSystemPartition )
        goto LABEL_41;
      goto LABEL_31;
    }
    *(_WORD *)(a2 + 32) = v8;
    return 2LL;
  }
  MiRemoveLockedPageCharge(a2);
  return 0LL;
}
