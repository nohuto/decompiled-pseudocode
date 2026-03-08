/*
 * XREFs of MiUnlockImageSection @ 0x140225A90
 * Callers:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 * Callees:
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiBadRefCount @ 0x14064B094 (MiBadRefCount.c)
 */

__int64 __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // rdi
  volatile signed __int32 *v7; // rbp
  __int64 CurrentIrql; // rsi
  signed __int32 v9; // ecx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *SchedulerAssist; // r8
  signed __int64 v14; // r15
  signed __int64 v15; // rbx
  unsigned __int8 v16; // r14
  __int16 v17; // cx
  bool v18; // zf
  __int16 v19; // cx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // edx
  int v23; // esi
  unsigned __int64 v24; // rcx
  char v25; // al
  __int64 v26; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r10
  unsigned __int64 v31; // r8
  struct _KPRCB *v32; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v34; // eax
  unsigned __int8 v35; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v37; // r9
  int v38; // eax
  signed __int32 v39[8]; // [rsp+0h] [rbp-78h] BYREF
  int v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h] BYREF
  struct _KTHREAD *v42; // [rsp+40h] [rbp-38h]
  __int64 v43; // [rsp+48h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v9 = _InterlockedDecrement(a1);
  result = (unsigned int)(v9 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(a2 << 25) >> 16, a4, v9);
  if ( v9 == 1 )
  {
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v28 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
            if ( (v28 & 0x20) != 0 )
              v11 |= 0x20uLL;
            if ( (v28 & 0x42) != 0 )
              v11 |= 0x42uLL;
          }
        }
        v41 = v11;
        v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFFLL);
        v15 = v14 - 0x220000000000LL;
        v16 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v16 == 2 )
            LODWORD(v26) = 4;
          else
            v26 = (-1LL << (v16 + 1)) & 4;
          v12 = (unsigned int)v26 | SchedulerAssist[5];
          SchedulerAssist[5] = v12;
        }
        v40 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v40);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        v17 = *(_WORD *)(v15 + 32);
        if ( !v17 )
          MiBadRefCount(v15, v12, SchedulerAssist);
        v18 = v17 == 1;
        v19 = v17 - 1;
        *(_WORD *)(v15 + 32) = v19;
        if ( !v18 || (*(_QWORD *)(v15 + 40) & 0x20000000000000LL) == 0 )
          break;
LABEL_56:
        MiPfnReferenceCountIsZero(v15, 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
LABEL_24:
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v35 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v16 <= 0xFu && v35 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v37 = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v16 + 1));
            v18 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        result = v16;
        __writecr8(v16);
        v6 += 8LL;
        if ( v6 > a3 )
        {
          v7 = a1;
          CurrentThread = v42;
          LOBYTE(CurrentIrql) = v43;
          goto LABEL_27;
        }
      }
      v20 = *(_QWORD *)(v15 + 40);
      if ( (v20 & 0x10000000000LL) != 0 || (v20 & 0x20000000000000LL) != 0 )
        goto LABEL_24;
      v21 = *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v22 = 0;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          if ( v21 || (*(_BYTE *)(v15 + 34) & 8) != 0 )
            v22 = 1;
          if ( !v22 )
            goto LABEL_24;
        }
        else if ( v19 != 2 || !v21 || (*(_BYTE *)(v15 + 34) & 8) == 0 )
        {
          goto LABEL_24;
        }
        v23 = 0;
      }
      else
      {
        v23 = 1;
      }
      v24 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
      if ( v24 > 0xFFFFF6BFFFFFFF78uLL || v24 < 0xFFFFF68000000000uLL )
      {
        v25 = *(_BYTE *)(v15 + 35);
        if ( (v25 & 0x20) != 0 )
        {
          *(_BYTE *)(v15 + 35) = v25 & 0xDF;
          goto LABEL_23;
        }
      }
      v29 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v20 >> 43) & 0x3FF));
      if ( v20 < 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
        || (unsigned int)MiIsPfnCommitNotCharged(v15)
        || v23 && (v30 & 0x4000000000000000LL) != 0 )
      {
        MiReturnCommit(v29, 1LL);
      }
      v31 = 1LL;
      if ( (_UNKNOWN *)v29 == &MiSystemPartition )
      {
        v32 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v32->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v34 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v32->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v18 = (_DWORD)CachedResidentAvailable == v34;
              LODWORD(CachedResidentAvailable) = v34;
              if ( v18 )
                break;
              if ( v34 == -1 || (unsigned __int64)(v34 + 1LL) > 0x100 )
                goto LABEL_73;
            }
LABEL_23:
            if ( !v23 )
              goto LABEL_24;
            goto LABEL_56;
          }
LABEL_73:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v32->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v31 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v31 )
            goto LABEL_23;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 17280), v31);
      goto LABEL_23;
    }
LABEL_27:
    _InterlockedDecrement(v7);
    _InterlockedOr(v39, 0);
    if ( qword_140C655E0 )
      result = ExpUnblockPushLock(&qword_140C655E0, 0LL, 0LL);
  }
  if ( !(_BYTE)CurrentIrql )
    return KeLeaveCriticalRegionThread(CurrentThread);
  return result;
}
