/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14031711C
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1403AEF20 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E4BC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E8C0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     PsReturnProcessQuota @ 0x1402EA088 (PsReturnProcessQuota.c)
 *     MiCheckWsLimits @ 0x1403173DC (MiCheckWsLimits.c)
 *     MiEmptyWorkingSetInitiate @ 0x140317DA0 (MiEmptyWorkingSetInitiate.c)
 *     MiGetCurrentMultiplexedVm @ 0x14033B508 (MiGetCurrentMultiplexedVm.c)
 *     PsChargeProcessQuota @ 0x140357284 (PsChargeProcessQuota.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  ULONG_PTR Process; // r15
  struct _KTHREAD *CurrentThread; // rdx
  char *CurrentMultiplexedVm; // rdi
  LONG *SharedVm; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // r9
  int v16; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  ULONG_PTR v20; // rbx
  int v21; // ebx
  int v22; // eax
  __int64 v24; // rdx
  int v25; // ecx
  ULONG_PTR *v26; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v29; // zf
  signed __int32 v30; // eax
  ULONG_PTR *v31; // rcx
  struct _KPRCB *v32; // r9
  __int64 v33; // rdx
  signed __int32 v34; // eax
  unsigned __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR *v36; // [rsp+38h] [rbp-48h]
  unsigned __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+68h] [rbp-18h] BYREF
  KIRQL v41; // [rsp+D0h] [rbp+50h]
  __int16 v43; // [rsp+E8h] [rbp+68h]

  *(_QWORD *)&v40.OldIrql = 0LL;
  Process = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a6 = 0;
  v40.LockQueue = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (char *)(Process + 1664);
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL, -1LL);
    v36 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *((unsigned __int16 *)CurrentMultiplexedVm + 87));
    SharedVm = MiGetSharedVm((__int64)CurrentMultiplexedVm);
    v41 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v40.LockQueue.Next = 0LL;
    v40.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm((__int64)CurrentMultiplexedVm) + 16);
    KxAcquireQueuedSpinLock((__int64)&v40, (volatile __int64 *)v40.LockQueue.Lock);
    if ( !a3 && (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
    {
      v16 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v13 = a1 >> 12;
    else
      v13 = *((_QWORD *)CurrentMultiplexedVm + 14);
    v35 = v13;
    if ( a2 )
      v14 = a2 >> 12;
    else
      v14 = *((_QWORD *)CurrentMultiplexedVm + 19);
    v37 = v14;
    v16 = MiCheckWsLimits((_DWORD)CurrentMultiplexedVm, (unsigned int)&v35, (unsigned int)&v37, a5, 0);
    if ( (v16 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v17 = *((_QWORD *)CurrentMultiplexedVm + 14);
    v18 = v35;
    v19 = *((_QWORD *)CurrentMultiplexedVm + 2);
    v38 = v19;
    if ( v35 > v17 )
    {
      v20 = v35 - v17;
      *a6 = 1;
      if ( !a4 )
      {
        v16 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v16 = PsChargeProcessQuota(Process, v19, v20);
        if ( v16 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident(v36, v20, 512LL, v15) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v24, v20);
        v16 = -1073741670;
        goto LABEL_29;
      }
      v19 = v38;
    }
    else
    {
      v20 = v17 - v35;
      if ( v35 < *(_QWORD *)(v19 + 32) )
      {
        v16 = -1073741748;
        goto LABEL_29;
      }
    }
    if ( v37 < *((_QWORD *)CurrentMultiplexedVm + 15) )
    {
      if ( *(_QWORD *)(v19 + 32) + 6LL >= v37 )
      {
        v16 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v19, v20);
          v26 = v36;
          if ( v36 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v20 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v20 >= 0x80000 )
                    break;
                  v30 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          v20 + CachedResidentAvailable,
                          CachedResidentAvailable);
                  v29 = (_DWORD)CachedResidentAvailable == v30;
                  LODWORD(CachedResidentAvailable) = v30;
                  if ( v29 )
                    goto LABEL_29;
                }
                while ( v30 != -1 && v20 + v30 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v20 += (int)CachedResidentAvailable - 192;
              }
              v26 = v36;
            }
          }
          if ( v20 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 896, v20);
        }
        goto LABEL_29;
      }
      CurrentMultiplexedVm[187] |= 0x10u;
    }
    if ( !*a6 && v20 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v19, v20);
      v31 = v36;
      if ( v36 == &MiSystemPartition )
      {
        v32 = KeGetCurrentPrcb();
        v33 = (int)v32->CachedResidentAvailable;
        if ( (_DWORD)v33 != -1 )
        {
          if ( v20 + v33 <= 0x100 )
          {
            do
            {
              if ( v20 >= 0x80000 )
                break;
              v34 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v32->CachedResidentAvailable,
                      v20 + v33,
                      v33);
              v29 = (_DWORD)v33 == v34;
              LODWORD(v33) = v34;
              if ( v29 )
                goto LABEL_86;
            }
            while ( v34 != -1 && v20 + v34 <= 0x100 );
          }
          if ( (int)v33 > 192
            && (_DWORD)v33 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v32->CachedResidentAvailable,
                                192,
                                v33) )
          {
            v20 += (int)v33 - 192;
          }
          v31 = v36;
        }
        v18 = v35;
      }
      if ( v20 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 896, v20);
LABEL_86:
        v18 = v35;
      }
    }
    *((_QWORD *)CurrentMultiplexedVm + 19) = v37;
    *((_QWORD *)CurrentMultiplexedVm + 14) = v18;
    if ( !a5 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
      MiUnlockWorkingSetExclusive((__int64)CurrentMultiplexedVm, v41);
      return (unsigned int)v16;
    }
    v21 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
    v22 = *((_DWORD *)CurrentMultiplexedVm + 46);
    v43 = v22;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v22) = v22 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v22) = v22 & 0x7F;
    }
    v21 = 1;
    LOBYTE(v43) = v22;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v43) = v22 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v21 = 1;
        LOBYTE(v43) = v22 & 0xBF;
      }
      if ( !v21 )
        goto LABEL_28;
    }
    *((_WORD *)CurrentMultiplexedVm + 92) = v43;
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = (char *)MiGetCurrentMultiplexedVm(0LL, CurrentThread);
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v25 = a3 - 3;
    if ( a3 == 3 )
    {
      v25 = 2;
LABEL_43:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v25);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
