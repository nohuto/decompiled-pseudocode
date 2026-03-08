/*
 * XREFs of MiDeleteProcessShadow @ 0x1402A5828
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     KeFlushProcessTb @ 0x1402A566C (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x1402A568C (MiDeleteTopLevelPage.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402A6428 (KeMakeUserDirectoryTableBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 *v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v21; // zf
  signed __int32 v22; // eax
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (MiFlags & 0x600000) != 0 && *(_QWORD *)(a1 + 1928) )
  {
    v5 = a1 + 1664;
    v6 = 1LL;
    v7 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838));
    if ( (_DWORD)a2 )
    {
      SharedVm = MiGetSharedVm(v5, a2, a3, a4);
      v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v10 = v9;
      if ( !*(_QWORD *)(a1 + 1928) )
      {
        MiUnlockWorkingSetExclusive(v5, v9);
        return;
      }
      v11 = 0xFFFFF6FB7DBED000uLL;
      v12 = 256LL;
      do
      {
        v13 = *(_QWORD *)v11;
        if ( (unsigned int)MiPteInShadowRange(v11)
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v26 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
            v27 = v13 | 0x20;
            if ( (v26 & 0x20) == 0 )
              v27 = v13;
            v13 = v27;
            if ( (v26 & 0x42) != 0 )
              v13 = v27 | 0x42;
          }
        }
        v29 = v13;
        if ( (v13 & 1) != 0 )
        {
          v23 = v13;
          do
          {
            if ( v13 >= 0 )
              break;
            v29 = v23 & 0x7FFFFFFFFFFFFFFFLL;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v24 = v23;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v23 & 0x7FFFFFFFFFFFFFFFLL, v23);
            v13 = v23;
            if ( v24 == v23 )
              break;
            v29 = v23;
          }
          while ( (v23 & 1) != 0 );
        }
        v11 += 8LL;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v10 = 17;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
    v14 = (__int64 *)(((*(_QWORD *)(a1 + 1928) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v29 = MI_READ_PTE_LOCK_FREE(v14);
    v15 = MI_READ_PTE_LOCK_FREE(&v29);
    *(_QWORD *)(a1 + 1928) = 0LL;
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    KxReleaseQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(0LL);
    if ( v10 != 17 )
      MiUnlockWorkingSetExclusive(v5, v10);
    MiReleasePtes((__int64)&qword_140C695C0, v14, 1u);
    KeFlushProcessTb(v16 << 12);
    if ( (unsigned int)MiDeleteTopLevelPage(v17, v16) != 3 )
    {
      MiReturnCommit(v7, 1LL, v18);
      if ( (_UNKNOWN *)v7 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v22 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v21 = (_DWORD)CachedResidentAvailable == v22;
              LODWORD(CachedResidentAvailable) = v22;
              if ( v21 )
                return;
            }
            while ( v22 != -1 && (unsigned __int64)(v22 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v6 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v6 )
            return;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17280), v6);
    }
  }
}
