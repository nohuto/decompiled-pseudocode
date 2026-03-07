__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  bool v5; // zf
  __int16 v6; // ax
  __int64 v7; // r9
  __int64 v8; // r11
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // r8d
  unsigned __int64 v12; // rbx
  unsigned __int64 CachedCommit; // r8
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // r9
  struct _KPRCB *v17; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v19; // eax
  __int64 v21; // rbp
  struct _KPRCB *v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_WORD *)(a1 + 32);
  if ( !v3 )
    MiBadRefCount(a1, a1, a3);
  v5 = v3 == 1;
  v6 = v3 - 1;
  *(_WORD *)(a1 + 32) = v6;
  if ( !v5 || !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( (v7 & 0x10000000000LL) == 0 && (v7 & 0x20000000000000LL) == 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v9 = 0;
      v10 = v8 & 0x3FFFFFFFFFFFFFFFLL;
      v11 = 0;
      v12 = 1LL;
      if ( !v6 )
      {
        v9 = 1;
        goto LABEL_10;
      }
      if ( v6 == 1 )
      {
        if ( v10 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          v11 = 1;
        if ( v11 )
        {
LABEL_10:
          CachedCommit = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
          if ( CachedCommit > 0xFFFFF6BFFFFFFF78uLL || CachedCommit < 0xFFFFF68000000000uLL )
          {
            v14 = *(_BYTE *)(a1 + 35);
            if ( (v14 & 0x20) != 0 )
            {
              *(_BYTE *)(a1 + 35) = v14 & 0xDF;
              return v9;
            }
          }
          v15 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v7 >> 43) & 0x3FF));
          if ( v7 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
            || CachedCommit <= 0xFFFFF6BFFFFFFF78uLL
            && CachedCommit >= 0xFFFFF68000000000uLL
            && (*(_BYTE *)(a1 + 35) & 0x20) != 0
            || v9 && (v8 & 0x4000000000000000LL) != 0 )
          {
            v21 = 1LL;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( !*(_QWORD *)(v15 + 16440) )
              goto LABEL_72;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 16424), &LockHandle);
            v21 = MiRestockOverCommit(v15, 1LL);
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
                v5 = (v31 & SchedulerAssist[5]) == 0;
                CachedCommit = (unsigned int)v31 & SchedulerAssist[5];
                SchedulerAssist[5] = CachedCommit;
                if ( v5 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(OldIrql);
            if ( v21 )
            {
LABEL_72:
              if ( (_UNKNOWN *)v15 == &MiSystemPartition )
              {
                v22 = KeGetCurrentPrcb();
                _m_prefetchw((const void *)&v22->CachedCommit);
                CachedCommit = v22->CachedCommit;
                if ( v21 + CachedCommit <= 0x100 )
                {
                  while ( 1 )
                  {
                    v23 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v22->CachedCommit,
                            CachedCommit + v21,
                            CachedCommit);
                    if ( v23 == CachedCommit )
                      break;
                    CachedCommit = v23;
                    if ( v23 + v21 > 0x100 )
                      goto LABEL_35;
                  }
                  v16 = 1LL;
LABEL_16:
                  v17 = KeGetCurrentPrcb();
                  CachedResidentAvailable = (int)v17->CachedResidentAvailable;
                  if ( (_DWORD)CachedResidentAvailable != -1 )
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                    {
                      do
                      {
                        v19 = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v17->CachedResidentAvailable,
                                CachedResidentAvailable + 1,
                                CachedResidentAvailable);
                        v5 = (_DWORD)CachedResidentAvailable == v19;
                        LODWORD(CachedResidentAvailable) = v19;
                        if ( v5 )
                          return v9;
                      }
                      while ( v19 != -1 && (unsigned __int64)(v19 + 1LL) <= 0x100 );
                    }
                    if ( (int)CachedResidentAvailable > 192
                      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                              (volatile signed __int32 *)&v17->CachedResidentAvailable,
                                                              192,
                                                              CachedResidentAvailable) )
                    {
                      v16 = (int)CachedResidentAvailable - 192 + 1LL;
                    }
                    v12 = v16;
                    if ( !v16 )
                      return v9;
                  }
LABEL_49:
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 17280), v12);
                  return v9;
                }
              }
LABEL_35:
              v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 17576), -v21);
              v25 = *(_QWORD *)(v15 + 16416);
              if ( v24 >= v25 && v24 - v21 < v25 || (v26 = *(_QWORD *)(v15 + 16408), v24 >= v26) && v24 - v21 < v26 )
                MiSyncCommitSignals(v15, 0LL, CachedCommit);
            }
          }
          v16 = 1LL;
          if ( (_UNKNOWN *)v15 != &MiSystemPartition )
            goto LABEL_49;
          goto LABEL_16;
        }
      }
      else if ( v6 == 2 && v10 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
        goto LABEL_10;
      }
    }
    return 0LL;
  }
  return 1LL;
}
