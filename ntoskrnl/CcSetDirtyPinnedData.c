/*
 * XREFs of CcSetDirtyPinnedData @ 0x140242420
 * Callers:
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x140337D3C (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1406B6780 (CcPreparePinWrite.c)
 * Callees:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     CcChargeDirtyPagesInternal @ 0x1402429A0 (CcChargeDirtyPagesInternal.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140242BEC (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  char *v2; // r8
  __int16 v3; // ax
  __int64 *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  LARGE_INTEGER *v8; // r13
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // r14
  LARGE_INTEGER *v11; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rcx
  LONGLONG v19; // rax
  LONGLONG v20; // rcx
  LONGLONG v21; // rcx
  LARGE_INTEGER v22; // rcx
  unsigned __int64 LowPart_low; // rdi
  signed __int32 v24; // eax
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  int v27; // r14d
  __int64 v28; // rdi
  volatile __int64 *v29; // r8
  unsigned __int8 v30; // dl
  __int64 QuadPart; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned int v34; // r14d
  unsigned __int64 DeepFreezeStartTime; // rcx
  _DWORD *v36; // r11
  __int64 v37; // r9
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v49; // [rsp+30h] [rbp-50h]
  _QWORD v50[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v51; // [rsp+48h] [rbp-38h] BYREF
  __int64 v52; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+B0h] [rbp+30h]

  v52 = 0LL;
  v2 = (char *)BcbVoid;
  v3 = *(_WORD *)BcbVoid;
  v51 = 0LL;
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF1EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v50;
  v50[0] = BcbVoid;
  v50[1] = 0LL;
  if ( v3 == 762 )
  {
    BcbVoid = (PVOID)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)(v2 + 16);
  }
  v6 = *((_QWORD *)BcbVoid + 22);
  v49 = *(_QWORD *)(v6 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v55 = *(_QWORD *)(v6 + 600);
  else
    v55 = 0LL;
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    v7 = *v5;
    while ( *v5 )
    {
      v50[0] = v7;
      ++v5;
      if ( (v7 & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF7FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v8 = *(LARGE_INTEGER **)(v7 + 176);
      v9 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v11 = v8 + 36;
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&v8[36], CurrentThread)) != 0 )
      {
        _BitScanForward(&v13, AbEntrySummary);
        v54 = v13;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v25 = *SchedulerAssist;
          do
          {
            v26 = v25;
            v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
          }
          while ( v26 != v25 );
          if ( (v25 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v9 = (__int64)(&CurrentThread[1].Process + 12 * v54);
        if ( (unsigned __int64)v11 - qword_140C65668 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v9 + 8) = SessionId;
        *(_QWORD *)v9 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
        ExpAcquireFastMutexContended((__int64)&v8[36], v9);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v18 = v50[0];
      v8[37].QuadPart = (LONGLONG)KeGetCurrentThread();
      v8[42].LowPart = CurrentIrql;
      if ( *(_BYTE *)(v18 + 2) )
        goto LABEL_22;
      v27 = *(_DWORD *)(v18 + 4) >> 12;
      *(_BYTE *)(v18 + 2) = 1;
      if ( Lsn )
      {
        *(LARGE_INTEGER *)(v18 + 40) = *Lsn;
        *(LARGE_INTEGER *)(v18 + 48) = *Lsn;
      }
      v28 = v49;
      *(_QWORD *)&v51 = 0LL;
      v29 = (volatile __int64 *)(v49 + 768);
      *((_QWORD *)&v51 + 1) = v49 + 768;
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v30 == 2 )
          LODWORD(v37) = 4;
        else
          v37 = (-1LL << (v30 + 1)) & 4;
        v36[5] |= v37;
      }
      LOBYTE(v52) = v30;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v51, v29);
      }
      else if ( _InterlockedExchange64(v29, (__int64)&v51) )
      {
        KxWaitForLockOwnerShip(&v51);
      }
      if ( !v8[14].LowPart && (v8[19].LowPart & 2) == 0 )
      {
        CcScheduleLazyWriteScan(v28, v55, 0LL, 0LL);
        CcInsertIntoDirtySharedCacheMapList(v8);
      }
      if ( CcEnablePerVolumeLazyWriter )
        QuadPart = v8[75].QuadPart;
      else
        QuadPart = 0LL;
      CcChargeDirtyPagesInternal((_DWORD)v8, 0, 0, v27, v8[67].QuadPart, QuadPart);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v51, retaddr);
      }
      else
      {
        _m_prefetchw(&v51);
        v32 = v51;
        if ( (_QWORD)v51 )
          goto LABEL_70;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v51 + 1),
                           0LL,
                           (signed __int64)&v51) != &v51 )
        {
          v32 = KxWaitForLockChainValid(&v51);
LABEL_70:
          *(_QWORD *)&v51 = 0LL;
          v38 = BYTE8(v51);
          if ( ((v38 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v32 + 8), *((__int64 *)&v51 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v48, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v32 + 8) >> 5) & 0x7F], 0LL));
          }
        }
      }
      v33 = (unsigned __int8)v52;
      if ( KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
          v43 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(v33);
      if ( (v8[19].LowPart & 0x10000000) != 0 )
      {
        v34 = v27 << 12;
        DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          if ( v34 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v34);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
        }
      }
LABEL_22:
      if ( Lsn )
      {
        v19 = Lsn->QuadPart;
        v20 = *(_QWORD *)(v50[0] + 40LL);
        if ( !v20 || v19 < v20 )
        {
          *(_QWORD *)(v50[0] + 40LL) = v19;
          v19 = Lsn->QuadPart;
        }
        v21 = *(_QWORD *)(v50[0] + 48LL);
        if ( !v21 || v19 > v21 )
          *(_QWORD *)(v50[0] + 48LL) = v19;
        if ( Lsn->QuadPart > v8[33].QuadPart )
          v8[33] = *Lsn;
      }
      v22 = *(LARGE_INTEGER *)(v50[0] + 32LL);
      if ( v22.QuadPart > v8[6].QuadPart )
        v8[6] = v22;
      LowPart_low = LOBYTE(v8[42].LowPart);
      v8[37].QuadPart = 0LL;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
      if ( v24 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&v8[36], v24);
      if ( KiIrqlFlags )
      {
        v44 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)LowPart_low <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)LowPart_low + 1));
          v43 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(LowPart_low);
      KeAbPostRelease((ULONG_PTR)&v8[36]);
      v7 = *v5;
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (__int64 *)v2 + 1, *((_DWORD *)v2 + 1), 0LL);
  }
}
