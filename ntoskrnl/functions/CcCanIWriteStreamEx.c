bool __fastcall CcCanIWriteStreamEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        _BYTE *a7)
{
  char v7; // si
  int v8; // eax
  _QWORD *v9; // r10
  _QWORD *v10; // r11
  unsigned int v11; // edi
  char v12; // dl
  unsigned int v13; // r14d
  volatile __int64 *v14; // r8
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v16; // rdx
  unsigned __int64 v17; // r13
  char v18; // r12
  __int64 Next; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _DWORD *SchedulerAssist; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  bool v29; // r14
  unsigned __int8 Lock; // cl
  bool IsFileObjectDirectMapped; // al
  unsigned __int8 v32; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v34; // r9
  int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned __int64 v38; // rdi
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int16 **v43; // r8
  unsigned __int16 *v44; // r9
  unsigned int v45; // r10d
  signed __int32 v46[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v47; // [rsp+20h] [rbp-48h]
  _QWORD *v48; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  __int128 v50; // [rsp+48h] [rbp-20h]
  __int64 v51; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v54; // [rsp+C0h] [rbp+58h]
  bool v55; // [rsp+C8h] [rbp+60h]

  v54 = a3;
  v7 = 0;
  v55 = 0;
  v8 = 0;
  v51 = 0LL;
  v50 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    v9 = (_QWORD *)(a2 + 992);
    v10 = (_QWORD *)(a2 + 1016);
  }
  else
  {
    v9 = (_QWORD *)(a1 + 1056);
    v10 = (_QWORD *)(a1 + 1080);
  }
  v48 = v10;
  v47 = v9;
  if ( a7 )
    *a7 = 0;
  v11 = 0x1000000;
  if ( a4 <= 0x1000000 )
  {
    v11 = a4;
    if ( (a4 & 0xFFF) != 0 )
      v8 = 1;
  }
  v12 = a6;
  v13 = v8 + (v11 >> 12);
  if ( (a6 & 8) == 0 )
  {
    v14 = (volatile __int64 *)(a1 + 768);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v26) = 4;
      else
        v26 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v26;
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v14);
    }
    else
    {
      v16 = (signed __int64 *)_InterlockedExchange64(v14, (__int64)&LockHandle);
      if ( !v16 )
      {
LABEL_12:
        a3 = v54;
        v12 = a6;
        goto LABEL_13;
      }
      KxWaitForLockOwnerShip((signed __int64)&LockHandle, v16);
    }
    v10 = v48;
    v9 = v47;
    goto LABEL_12;
  }
LABEL_13:
  v17 = v13 + (unsigned __int64)(((a5 & 0xFFF) != 0) + (a5 >> 12));
  if ( v17 + *v9 < *v10
    || (v18 = 1, a3)
    && (IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(a3, v12 | 1),
        v9 = v47,
        v10 = v48,
        v55 = IsFileObjectDirectMapped) )
  {
    v18 = 0;
  }
  if ( a7
    && CcAzure_SoftThrottleLargeWriteAtPct
    && CcAzure_LargeWriteSize
    && v11
    && v11 >= CcAzure_LargeWriteSize
    && v17 + *v9 >= *v10 * (unsigned __int64)(unsigned int)CcAzure_SoftThrottleLargeWriteAtPct / 0x64 )
  {
    *a7 = 1;
  }
  if ( (a6 & 8) != 0 )
    goto LABEL_23;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_21;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                     (volatile __int64 *)(Next + 8),
                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v46, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_21;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_21:
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v36 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
LABEL_23:
  v21 = 0LL;
  if ( v55 || !v54 )
    goto LABEL_47;
  if ( (a6 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(v54 + 24) + 4LL) & 4) == 0 && !v18 )
    goto LABEL_28;
  if ( (a6 & 8) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v21 = *(_QWORD *)(v54 + 40);
  if ( v21 )
  {
    v27 = *(_QWORD *)(v21 + 8);
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 + 272);
      v29 = v28 && (v37 = *(_DWORD *)(v27 + 112)) != 0 && v13 + v37 > v28;
      if ( *(_QWORD *)(*(_QWORD *)(v27 + 512) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
        && (a6 & 4) == 0 )
      {
        v18 = 0;
      }
    }
    else
    {
      v29 = 0;
    }
    v7 = MmEnoughMemoryForWrite(v21);
  }
  else
  {
    v29 = 0;
  }
  if ( (a6 & 8) == 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v38 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v36 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
    __writecr8(v38);
  }
  if ( !v29 )
  {
LABEL_47:
    if ( !v18 )
    {
      if ( v21 )
        return v7 != 0;
LABEL_28:
      v22 = qword_140C6F400;
      v7 = 0;
      v23 = 450LL;
      if ( (_BYTE)dword_140D1D1EC )
        v23 = 0x4000LL;
      if ( qword_140C6F400 < v23 )
      {
        v43 = (unsigned __int16 **)&unk_140C6CB58;
        while ( 1 )
        {
          v44 = *v43;
          v45 = 0;
          if ( dword_140C6577C )
            break;
LABEL_94:
          if ( (__int64)++v43 > (__int64)&qword_140C6CB60 )
          {
            if ( qword_140C6F580 < (unsigned __int64)(qword_140C6F660 + 800) )
              v7 = (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 80LL) != 0;
            return v7 != 0;
          }
        }
        while ( 1 )
        {
          v22 += *v44;
          if ( v22 >= v23 )
            break;
          ++v45;
          v44 += 8;
          if ( v45 >= dword_140C6577C )
            goto LABEL_94;
        }
      }
      v7 = 1;
      return v7 != 0;
    }
  }
  return 0;
}
