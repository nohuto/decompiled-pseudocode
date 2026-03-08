/*
 * XREFs of CmpDeleteKeyObject @ 0x1406E5C50
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpArmDelayedCloseTimer @ 0x140243848 (CmpArmDelayedCloseTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402BF844 (CmpWaitForLateUnloadWorker.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpFreeCallbackObjectContexts @ 0x140738AB4 (CmpFreeCallbackObjectContexts.c)
 *     CmpFlushNotify @ 0x14074B6C4 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x14074C060 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     CmpFireCleanupNotifications @ 0x14078CDC4 (CmpFireCleanupNotifications.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKeyBodyFromMemory @ 0x140A14C9C (CmpUnlockKeyBodyFromMemory.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A21354 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int i; // ecx
  signed __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 *v18; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  struct _PRIVILEGE_SET *v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // r15
  unsigned __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r13
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rcx
  signed __int64 v36; // rax
  __int64 v37; // r13
  struct _KTHREAD *v38; // rax
  bool v39; // dl
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // r12
  bool v47; // r13
  signed __int32 v48; // eax
  unsigned __int8 v49; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v52; // eax
  bool v53; // zf
  __int64 *v54; // rdi
  signed __int64 v55; // rax
  signed __int64 v56; // rdx
  __int64 v57; // rtt
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r9
  struct _WORK_QUEUE_ITEM *v61; // rcx
  struct _KEVENT *v62; // rcx
  struct _KTHREAD *v63; // rcx
  _QWORD v65[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v66[2]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v67; // [rsp+60h] [rbp-69h] BYREF
  __int128 v68; // [rsp+70h] [rbp-59h] BYREF
  __int128 v69; // [rsp+80h] [rbp-49h] BYREF
  __int128 v70; // [rsp+90h] [rbp-39h] BYREF
  __int128 *v71; // [rsp+A0h] [rbp-29h]
  int v72; // [rsp+A8h] [rbp-21h]
  __int128 v73; // [rsp+ACh] [rbp-1Dh]
  __int64 v74; // [rsp+BCh] [rbp-Dh]
  int v75; // [rsp+C4h] [rbp-5h]
  __int128 v76[5]; // [rsp+C8h] [rbp-1h] BYREF
  char v77; // [rsp+130h] [rbp+67h]
  unsigned int v78; // [rsp+138h] [rbp+6Fh]
  __int64 v79; // [rsp+140h] [rbp+77h]

  v1 = 0LL;
  v77 = 0;
  v69 = 0LL;
  memset(v76, 0, 32);
  v68 = 0LL;
  CmpInitializeThreadInfo((__int64)&v69);
  v66[1] = v66;
  v66[0] = v66;
  CmpInitializeDelayDerefContext(&v68);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((__int64 *)&v69);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v76[0] = a1;
      CmpCallCallBacksEx(0xEu, v76, 0LL, 1, 0x19u, a1, (__int64)v66);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
  v65[1] = v65;
  v65[0] = v65;
  CmpLockRegistry(v7, v3, v4, v5);
  BugCheckParameter4 = *(_QWORD *)(a1 + 8);
  if ( BugCheckParameter4 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        CmpFlushNotify(a1, 0LL, v65);
        CmpUnlockKcb(BugCheckParameter4);
      }
      LOBYTE(v11) = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_14:
        for ( i = 0; i < 4; ++i )
        {
          v8 = i;
          v10 = *(_QWORD *)(a1 + 8) + 8LL * i;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 136), 0LL, a1);
          if ( a1 == v14 )
            goto LABEL_29;
          if ( (unsigned __int64)(v14 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            LOBYTE(v11) = 1;
            goto LABEL_14;
          }
        }
        if ( !(_BYTE)v11 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          v16 = KeAbPreAcquire(v15 + 48, 0LL);
          v17 = v16;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 + 48), v16, v15 + 48);
          if ( v17 )
            *(_BYTE *)(v17 + 18) = 1;
          LOBYTE(v11) = 1;
          *(_QWORD *)(v15 + 56) = KeGetCurrentThread();
        }
        v8 = *(_QWORD *)(a1 + 32);
        v18 = *(unsigned __int64 **)(a1 + 40);
        if ( *(_QWORD *)(v8 + 8) != a1 + 32 || *v18 != a1 + 32 )
          __fastfail(3u);
        *v18 = v8;
        *(_QWORD *)(v8 + 8) = v18;
LABEL_29:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v11 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v1 = *(_QWORD *)(BugCheckParameter4 + 32);
      _m_prefetchw((const void *)(v1 + 4232));
      v19 = *(_DWORD *)(v1 + 4232);
      if ( v19 )
      {
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4232), v19 + 1, v19);
        }
        while ( v20 != v19 && v19 );
      }
      if ( *(_BYTE *)(v1 + 2944) == 1 )
      {
        v77 = 1;
        *(_DWORD *)(v1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v21 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v21 )
      {
        CmpKeyEnumStackFreeResumeContext(v21);
        CmpDrainDelayDerefContext((_QWORD **)&v68);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
        CmpUnlockKeyBodyFromMemory(a1, v8, v10, v11);
      v67 = 0LL;
      CmpInitializeDelayDerefContext(&v67);
      v9 = *(_QWORD *)BugCheckParameter4;
      v22 = *(_QWORD *)(BugCheckParameter4 + 32);
      if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
      {
LABEL_49:
        v24 = *(_QWORD *)(BugCheckParameter4 + 32);
        v78 = 101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9));
        v25 = (unsigned __int64 *)(*(_QWORD *)(v24 + 1648)
                                 + 24
                                 * ((unsigned int)(*(_DWORD *)(v24 + 1656) - 1) & (v78 ^ ((unsigned __int64)v78 >> 9))));
        v26 = KeAbPreAcquire((__int64)v25, 0LL);
        v27 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
          ExfAcquirePushLockExclusiveEx(v25, v26, (__int64)v25);
        if ( v27 )
          *(_BYTE *)(v27 + 18) = 1;
        v25[1] = (unsigned __int64)KeGetCurrentThread();
        _m_prefetchw((const void *)(v24 + 4232));
        v28 = *(_DWORD *)(v24 + 4232);
        if ( !v28 )
LABEL_143:
          KeBugCheckEx(0x51u, 0x17uLL, v24, 8uLL, BugCheckParameter4);
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 4232), v28 + 1, v28);
          if ( v29 == v28 )
            break;
          if ( !v28 )
            goto LABEL_143;
        }
        v30 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v30, BugCheckParameter4 + 48);
        if ( v31 )
          *(_BYTE *)(v31 + 18) = 1;
        *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
        v32 = *(_QWORD *)(BugCheckParameter4 + 192);
        v79 = 0LL;
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 24);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            v79 = v34;
            CmpUnlockKcb(BugCheckParameter4);
            CmpLockKcbExclusive(v34);
            CmpLockKcbExclusive(BugCheckParameter4);
          }
        }
        v35 = *(_QWORD *)(BugCheckParameter4 + 32);
        v36 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
        if ( v36 == 2 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v35 + 2944) == 1 )
            CmpDoQueueLateUnloadWorker(v35);
        }
        else if ( !v36 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
          {
            v37 = *(_QWORD *)(BugCheckParameter4 + 32);
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
            v38 = KeGetCurrentThread();
            *(_DWORD *)(v37 + 160) |= 0x80u;
            *(_QWORD *)(v37 + 4176) = v38;
            *(_DWORD *)(v37 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4236), 1u) & 0x7F) + 4240) = 31;
            if ( (*(_DWORD *)(v37 + 160) & 0x20) == 0
              && _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4232), 0xFFFFFFFF) == 1 )
            {
              CmpDeleteHive((PVOID)v37);
            }
          }
          else
          {
            v39 = 0;
            v40 = *(_DWORD *)(BugCheckParameter4 + 8);
            if ( (v40 & 0x20) == 0 )
              v39 = (v40 & 0x20000) == 0;
            if ( (!CmpHoldLazyFlush
               || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
               || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
              && v39 )
            {
              v41 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
              v42 = v41;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v41);
              if ( v42 )
                *(_BYTE *)(v42 + 18) = 1;
              *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
              *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
              v44 = (_QWORD *)(BugCheckParameter4 + 224);
              if ( (_QWORD *)*v44 != v44 )
                KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
              v45 = CmpDelayedLRUListHead;
              if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
LABEL_127:
                __fastfail(3u);
              *v44 = CmpDelayedLRUListHead;
              *(_QWORD *)(BugCheckParameter4 + 232) = &CmpDelayedLRUListHead;
              *(_QWORD *)(v45 + 8) = v44;
              CmpDelayedLRUListHead = BugCheckParameter4 + 224;
              *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
              ++qword_140D552E8;
              v46 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
              v47 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
              *(&CmpDelayedCloseTableLock + 1) = 0LL;
              v48 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
              if ( v48 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v48);
              if ( KiIrqlFlags )
              {
                v49 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v49 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
                  v53 = (v52 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v52;
                  if ( v53 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(v46);
              KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
              if ( v47 )
                CmpArmDelayedCloseTimer();
            }
            else
            {
              CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
              if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
                && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
              {
                CmpFreeKeyControlBlock(BugCheckParameter4);
              }
            }
          }
        }
        CmpUnlockKcb(BugCheckParameter4);
        if ( v79 )
          CmpUnlockKcb(v79);
        v54 = (__int64 *)(*(_QWORD *)(v24 + 1648)
                        + 24 * ((unsigned int)(*(_DWORD *)(v24 + 1656) - 1) & (v78 ^ ((unsigned __int64)v78 >> 9))));
        v54[1] = 0LL;
        _m_prefetchw(v54);
        v55 = *v54;
        v56 = *v54 - 16;
        if ( (*v54 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v56 = 0LL;
        if ( (v55 & 2) != 0 || (v57 = *v54, v57 != _InterlockedCompareExchange64(v54, v56, v55)) )
          ExfReleasePushLock(v54);
        KeAbPostRelease((ULONG_PTR)v54);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 4232), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v24);
        CmpDrainDelayDerefContext((_QWORD **)&v67);
      }
      else
      {
        while ( 1 )
        {
          v8 = v9 - 1;
          v11 = v9;
          if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v22 + 2944) == 1 )
            v10 = 1LL;
          else
            LOBYTE(v10) = 0;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v8, v9);
          v9 = v23;
          if ( v23 == v11 )
            break;
          if ( v23 <= 1 )
            goto LABEL_49;
        }
        if ( v23 < v8 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( (_BYTE)v10 )
          CmpDoQueueLateUnloadWorker(v22);
      }
    }
    else
    {
      v1 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpReferenceHive(v1);
      if ( *(_BYTE *)(v1 + 2944) == 1 )
      {
        v77 = 1;
        *(_DWORD *)(v1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
  }
  CmpUnlockRegistry(v9, v8, v10, v11);
  while ( 1 )
  {
    v58 = v65[0];
    if ( (_QWORD *)v65[0] == v65 )
      break;
    v59 = *(_QWORD *)v65[0];
    if ( *(_QWORD **)(v65[0] + 8LL) != v65 || *(_QWORD *)(v59 + 8) != v65[0] )
      goto LABEL_127;
    v65[0] = *(_QWORD *)v65[0];
    *(_QWORD *)(v59 + 8) = v65;
    v60 = *(_QWORD *)(v58 + 48);
    if ( (unsigned __int16)*(_DWORD *)(v58 + 40) != 3 )
    {
      v62 = *(struct _KEVENT **)v60;
LABEL_125:
      KeSetEvent(v62, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v58 + 48));
      goto LABEL_126;
    }
    v61 = *(struct _WORK_QUEUE_ITEM **)(v60 + 8);
    if ( v61 )
      ExQueueWorkItem(v61, *(WORK_QUEUE_TYPE *)(v60 + 16));
    v62 = **(struct _KEVENT ***)(v58 + 48);
    if ( v62 )
      goto LABEL_125;
LABEL_126:
    CmpFreePostBlock((PVOID)(v58 - 16));
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v66[0] != v66 )
  {
    v71 = v76;
    v74 = 0LL;
    v75 = 0;
    v73 = 0LL;
    v70 = 0uLL;
    v72 = 0;
    CmpCallCallBacksEx(0x19u, &v70, 0LL, 0, 0x19u, 0LL, (__int64)v66);
  }
  if ( v77 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v1);
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)v1);
  v63 = KeGetCurrentThread();
  v53 = v63->KernelApcDisable++ == -1;
  if ( v53
    && ($C71981A45BEB2B45F82C232A7085991E *)v63->ApcState.ApcListHead[0].Flink != &v63->152
    && !v63->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return CmCleanupThreadInfo((__int64 *)&v69);
}
