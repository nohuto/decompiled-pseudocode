/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140648D30
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406EADC0 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 *     CmpDestroyVirtualStack @ 0x14086FDF4 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140872804 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872844 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AB88 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpArmDelayedCloseTimer @ 0x140305C58 (CmpArmDelayedCloseTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405EE874 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x14066D340 (CmpFreeKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406EB3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  bool v5; // r8
  ULONG_PTR v6; // rsi
  int v7; // r13d
  ULONG_PTR v8; // rdi
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  signed __int64 v16; // rax
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v19; // dl
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // r13
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  bool v27; // r13
  signed __int32 v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  int v34; // edi
  ULONG_PTR v35; // rcx
  __int128 v36; // [rsp+30h] [rbp-38h] BYREF
  int v37; // [rsp+70h] [rbp+8h]

  v36 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_9:
    v6 = *(_QWORD *)(BugCheckParameter2 + 32);
    v7 = *(_DWORD *)(BugCheckParameter2 + 16) ^ (*(_DWORD *)(BugCheckParameter2 + 16) >> 9);
    v37 = v7;
    v8 = *(_QWORD *)(v6 + 1640)
       + 24
       * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((unsigned int)(101027 * v7) ^ ((unsigned __int64)(unsigned int)(101027 * v7) >> 9)));
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    _m_prefetchw((const void *)(v6 + 4272));
    v9 = *(_DWORD *)(v6 + 4272);
    if ( !v9 )
LABEL_69:
      KeBugCheckEx(0x51u, 0x17uLL, v6, 8uLL, BugCheckParameter2);
    while ( 1 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4272), v9 + 1, v9);
      if ( v10 == v9 )
        break;
      if ( !v9 )
        goto LABEL_69;
    }
    v11 = BugCheckParameter2 + 48;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 48, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
    v12 = 0LL;
    v13 = *(_QWORD *)(BugCheckParameter2 + 192);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      if ( v14 )
      {
        v12 = *(_QWORD *)(v14 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v12);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    v16 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
    if ( v16 == 2 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v15 + 2936) == 1 )
        CmpDoQueueLateUnloadWorker(v15);
    }
    else if ( !v16 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
      {
        v17 = *(_QWORD *)(BugCheckParameter2 + 32);
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v36);
        CurrentThread = KeGetCurrentThread();
        *(_DWORD *)(v17 + 160) |= 0x80u;
        *(_QWORD *)(v17 + 4216) = CurrentThread;
        *(_DWORD *)(v17 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 4276), 1u) & 0x7F) + 4280) = 31;
        if ( (*(_DWORD *)(v17 + 160) & 0x20) == 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 4272), 0xFFFFFFFF) == 1 )
        {
          CmpDeleteHive((PVOID)v17);
        }
      }
      else
      {
        v19 = 0;
        v20 = *(_DWORD *)(BugCheckParameter2 + 8);
        if ( (v20 & 0x20) == 0 )
          v19 = (v20 & 0x20000) == 0;
        if ( CmpHoldLazyFlush
          && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) == 0
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 8) == 0
          || !v19 )
        {
          CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v36);
          if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
            && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
          {
            CmpFreeKeyControlBlock(BugCheckParameter2);
          }
          goto LABEL_54;
        }
        v21 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
        v22 = v21;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v21);
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
        v24 = (_QWORD *)(BugCheckParameter2 + 224);
        if ( (_QWORD *)*v24 != v24 )
          KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
        v25 = CmpDelayedLRUListHead;
        if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
          __fastfail(3u);
        *v24 = CmpDelayedLRUListHead;
        *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
        *(_QWORD *)(v25 + 8) = v24;
        CmpDelayedLRUListHead = BugCheckParameter2 + 224;
        *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
        ++qword_140D2EF88;
        v26 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
        v27 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v28 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v28);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v29 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v33 = (v32 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v32;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v26);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
        if ( v27 )
          CmpArmDelayedCloseTimer();
        v7 = v37;
      }
      v11 = BugCheckParameter2 + 48;
    }
LABEL_54:
    v34 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
    ExReleasePushLockEx(v11, 0LL);
    if ( v34 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
    if ( v12 )
      CmpUnlockKcb(v12);
    v35 = *(_QWORD *)(v6 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v6 + 1648) - 1) & ((unsigned int)(101027 * v7) ^ ((unsigned __int64)(unsigned int)(101027 * v7) >> 9)));
    *(_QWORD *)(v35 + 8) = 0LL;
    ExReleasePushLockEx(v35, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4272), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v6);
    CmpDrainDelayDerefContext((_QWORD **)&v36);
    return;
  }
  while ( 1 )
  {
    v4 = v2 - 1;
    v5 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2936) == 1;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v2);
    if ( v2 == v4 + 1 )
      break;
    if ( v2 <= 1 )
      goto LABEL_9;
  }
  if ( v2 < v4 )
    KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v5 )
    CmpDoQueueLateUnloadWorker(v3);
}
