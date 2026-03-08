/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14020C61C
 * Callers:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     KiUpdateProcessConcurrencyCount @ 0x14022B7A0 (KiUpdateProcessConcurrencyCount.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1402B2CD4 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1403889B4 (CmSiSetProcessWorkingSetMaximum.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405C9B48 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405C9DA4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmAdjustWorkingSetSize @ 0x14061A080 (MmAdjustWorkingSetSize.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     MiCheckWsLimits @ 0x14020C974 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x14020D064 (PsReturnProcessQuota.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetCurrentMultiplexedVm @ 0x1402998AC (MiGetCurrentMultiplexedVm.c)
 *     PsChargeProcessQuota @ 0x1402A61D8 (PsChargeProcessQuota.c)
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r14
  int v9; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 CurrentMultiplexedVm; // rdi
  __int64 v12; // r13
  __int64 SharedVm; // rbx
  KIRQL v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 CachedResidentAvailable; // rdx
  __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r15
  int v24; // esi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  bool v28; // zf
  signed __int32 v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v33; // ebx
  int v34; // eax
  char v35; // al
  __int64 v36; // rcx
  signed __int32 v37; // eax
  __int64 v38; // [rsp+30h] [rbp-30h]
  __int16 v39; // [rsp+30h] [rbp-30h]
  unsigned __int64 v40; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  KIRQL v43; // [rsp+B0h] [rbp+50h]

  Process = 0LL;
  v9 = a3;
  *a6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !(_DWORD)a3 )
  {
    Process = CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
    goto LABEL_3;
  }
  if ( (_DWORD)a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm(0LL, CurrentThread);
    if ( CurrentMultiplexedVm )
    {
LABEL_3:
      if ( a1 == -1LL && a2 == -1LL )
        return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL);
      v12 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
      SharedVm = MiGetSharedVm(CurrentMultiplexedVm, CurrentThread, a3, -1LL);
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v43 = v14;
      v18 = MiGetSharedVm(CurrentMultiplexedVm, v15, v16, v17);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v18 + 64));
      if ( !v9 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v24 = -1073741558;
        goto LABEL_25;
      }
      if ( a1 )
        v22 = a1 >> 12;
      else
        v22 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      v41 = v22;
      if ( a2 )
        v23 = a2 >> 12;
      else
        v23 = *(_QWORD *)(CurrentMultiplexedVm + 120);
      v40 = v23;
      v24 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v41, (unsigned int)&v40, a5, 0);
      if ( (v24 & 0xC0000000) == 0xC0000000 )
        goto LABEL_25;
      v25 = *(_QWORD *)(CurrentMultiplexedVm + 112);
      CachedResidentAvailable = *(_QWORD *)(CurrentMultiplexedVm + 16);
      v38 = CachedResidentAvailable;
      if ( v41 > v25 )
      {
        v26 = v41 - v25;
        *a6 = 1;
        if ( !a4 )
        {
          v24 = -1073741727;
          goto LABEL_25;
        }
        if ( !v9 )
        {
          v24 = PsChargeProcessQuota(Process, CachedResidentAvailable, v26);
          if ( v24 < 0 )
            goto LABEL_25;
        }
        if ( !(unsigned int)MiChargeResident(v12, v26, 512LL) )
        {
          if ( !v9 )
            PsReturnProcessQuota(Process, CachedResidentAvailable, v26);
          v24 = -1073741670;
          goto LABEL_25;
        }
        CachedResidentAvailable = v38;
      }
      else
      {
        v26 = v25 - v41;
        if ( v41 < *(_QWORD *)(CachedResidentAvailable + 32) )
        {
          v24 = -1073741748;
          goto LABEL_25;
        }
      }
      v27 = v40;
      if ( v40 < *(_QWORD *)(CurrentMultiplexedVm + 128) )
      {
        if ( *(_QWORD *)(CachedResidentAvailable + 32) + 6LL >= v40 )
        {
          v24 = -1073741748;
          if ( *a6 )
          {
            if ( !v9 )
              PsReturnProcessQuota(Process, CachedResidentAvailable, v26);
            if ( (_UNKNOWN *)v12 == &MiSystemPartition )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = 0xFFFFFFFFLL;
              CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable != -1 )
              {
                if ( v26 + CachedResidentAvailable <= 0x100 && v26 < 0x80000 )
                {
                  do
                  {
                    v37 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                            v26 + CachedResidentAvailable,
                            CachedResidentAvailable);
                    v28 = (_DWORD)CachedResidentAvailable == v37;
                    CachedResidentAvailable = v37;
                    if ( v28 )
                      goto LABEL_25;
                  }
                  while ( v37 != -1 && v26 + v37 <= 0x100 );
                }
                if ( (int)CachedResidentAvailable > 192
                  && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                          192,
                                                          CachedResidentAvailable) )
                {
                  v26 += (int)CachedResidentAvailable - 192;
                }
              }
            }
            if ( v26 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 17280), v26);
          }
LABEL_25:
          v30 = MiGetSharedVm(CurrentMultiplexedVm, CachedResidentAvailable, v20, CurrentPrcb);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 64));
          LOBYTE(v31) = v43;
          MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v31);
          return (unsigned int)v24;
        }
        *(_BYTE *)(CurrentMultiplexedVm + 187) = HIBYTE(*(_DWORD *)(CurrentMultiplexedVm + 184)) | 0x10;
      }
      if ( *a6 || !v26 )
      {
LABEL_24:
        *(_QWORD *)(CurrentMultiplexedVm + 112) = v41;
        *(_QWORD *)(CurrentMultiplexedVm + 120) = v27;
        if ( !a5 )
          goto LABEL_25;
        memset(&LockHandle, 0, sizeof(LockHandle));
        v33 = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
        v34 = *(_DWORD *)(CurrentMultiplexedVm + 184);
        v39 = v34;
        if ( (a5 & 4) != 0 )
        {
          LOBYTE(v34) = v34 | 0x80;
        }
        else
        {
          if ( (a5 & 8) == 0 )
            goto LABEL_40;
          LOBYTE(v34) = v34 & 0x7F;
        }
        v33 = 1;
        LOBYTE(v39) = v34;
LABEL_40:
        if ( (a5 & 1) != 0 )
        {
          v35 = v34 | 0x40;
        }
        else
        {
          if ( (a5 & 2) == 0 )
          {
            if ( !v33 )
              goto LABEL_44;
            goto LABEL_43;
          }
          v35 = v34 & 0xBF;
        }
        LOBYTE(v39) = v35;
LABEL_43:
        *(_WORD *)(CurrentMultiplexedVm + 184) = v39;
LABEL_44:
        KxReleaseQueuedSpinLock(&LockHandle);
        goto LABEL_25;
      }
      if ( !v9 )
        PsReturnProcessQuota(Process, CachedResidentAvailable, v26);
      if ( (_UNKNOWN *)v12 != &MiSystemPartition )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = 0xFFFFFFFFLL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_28;
      if ( v26 + CachedResidentAvailable <= 0x100 && v26 < 0x80000 )
      {
        do
        {
          v29 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  v26 + CachedResidentAvailable,
                  CachedResidentAvailable);
          v28 = (_DWORD)CachedResidentAvailable == v29;
          CachedResidentAvailable = v29;
          if ( v28 )
            goto LABEL_23;
        }
        while ( v29 != -1 && v26 + v29 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v26 += (int)CachedResidentAvailable - 192;
      }
      if ( v26 )
LABEL_28:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 17280), v26);
LABEL_23:
      v27 = v40;
      goto LABEL_24;
    }
  }
  else
  {
    v36 = (unsigned int)(a3 - 3);
    if ( (_DWORD)a3 == 3 )
    {
      v36 = 2LL;
LABEL_54:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v36, CurrentThread);
      goto LABEL_3;
    }
    if ( (_DWORD)a3 == 4 )
      goto LABEL_54;
  }
  return 3221225713LL;
}
