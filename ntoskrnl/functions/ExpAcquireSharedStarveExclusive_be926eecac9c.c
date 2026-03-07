char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // si
  volatile __int64 *v6; // r8
  unsigned int ResourceIndex; // ebx
  unsigned __int8 CurrentIrql; // dl
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // r11
  int ThreadResourceHint; // eax
  __int64 EmptyEntry; // rax
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // r15
  unsigned __int8 v25; // cl
  int v26; // eax
  unsigned __int64 v27; // r15
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  unsigned __int8 v56; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v58; // r8
  int v59; // eax
  signed __int32 v60[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v61; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v62; // [rsp+38h] [rbp-48h]
  __int64 v63; // [rsp+40h] [rbp-40h]
  __int128 v64; // [rsp+48h] [rbp-38h] BYREF
  __int128 v65; // [rsp+58h] [rbp-28h]
  __int128 v66; // [rsp+68h] [rbp-18h] BYREF
  __int64 v67; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v63 = 0LL;
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8AA4u);
  v6 = (volatile __int64 *)(a1 + 96);
  ResourceIndex = 0;
  v62 = (volatile signed __int64 *)(a1 + 96);
  v61 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (unsigned __int8)v61 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (v9 << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  LOBYTE(v63) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v61, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&v61) )
  {
    KxWaitForLockOwnerShip(&v61);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v10 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v10 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v61, retaddr);
        goto LABEL_9;
      }
      _m_prefetchw(&v61);
      v11 = v61;
      if ( !v61 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v62, 0LL, (signed __int64)&v61) == &v61 )
          goto LABEL_9;
        v11 = KxWaitForLockChainValid(&v61);
      }
      v61 = 0LL;
      v25 = (unsigned __int8)v62;
      if ( ((v25 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), (__int64)v62)) & 4) != 0 )
      {
        _InterlockedOr(v60, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
      }
LABEL_9:
      v12 = (unsigned __int8)v63;
      if ( KiIrqlFlags )
      {
        v56 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v56 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v58 = CurrentPrcb->SchedulerAssist;
          v59 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
          v37 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v12);
      __incgsdword(0x8AACu);
      __incgsdword(0x8A64u);
      if ( !v5 )
        return 1;
      goto LABEL_92;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v28 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v28;
        v29 = v28 >> 3;
        KxReleaseQueuedSpinLock(&v61);
        v30 = (unsigned __int8)v63;
        if ( KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
            v37 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        __writecr8(v30);
        __incgsdword(0x8AA8u);
        __incgsdword(0x8A64u);
        if ( v5 )
        {
          v42 = v29;
          v43 = 65585LL;
          goto LABEL_93;
        }
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry(a1, &v61);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     (_DWORD)CurrentThread,
                     (unsigned int)&v61,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v18 = *(_DWORD *)(EmptyEntry + 8) + 8;
    *(_DWORD *)(EmptyEntry + 8) = v18;
    v19 = v18 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v61, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v61);
    v20 = v61;
    if ( !v61 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v62, 0LL, (signed __int64)&v61) == &v61 )
        goto LABEL_23;
      v20 = KxWaitForLockChainValid(&v61);
    }
    v61 = 0LL;
    v32 = (unsigned __int8)v62;
    if ( ((v32 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), (__int64)v62)) & 4) != 0 )
    {
      _InterlockedOr(v60, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v20 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_23:
    v21 = (unsigned __int8)v63;
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
        v37 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(v21);
    __incgsdword(0x8AB0u);
    __incgsdword(0x8A64u);
    if ( v5 )
    {
      v42 = v19;
      v43 = 65617LL;
      goto LABEL_93;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v23 = *(_DWORD *)(v22 + 8) & 7;
    *(_QWORD *)v22 = CurrentThread;
    *(_DWORD *)(v22 + 8) = v23 | 8;
    KxReleaseQueuedSpinLock(&v61);
    v24 = (unsigned __int8)v63;
    if ( KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
        v37 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(v24);
LABEL_29:
    if ( ((unsigned __int8)CurrentThread & 3) == 0 )
      ResourceIndex = CurrentThread->ResourceIndex;
    ExpBoostIoAfterAcquire(a1, CurrentThread, ResourceIndex);
    __incgsdword(0x8AACu);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
LABEL_92:
    v42 = 1LL;
    v43 = 65601LL;
LABEL_93:
    PerfLogExecutiveResourceAcquire(v43, a1, v42, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v26 = *(_DWORD *)(v22 + 8);
    *(_QWORD *)v22 = CurrentThread;
    *(_DWORD *)(v22 + 8) = v26 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v66 + 1) = &v66;
    *(_QWORD *)&v66 = &v66;
    *((_QWORD *)&v64 + 1) = 0LL;
    *((_QWORD *)&v65 + 1) = 393217LL;
    *(_QWORD *)&v65 = CurrentThread;
    v67 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v64);
    KxReleaseQueuedSpinLock(&v61);
    v27 = (unsigned __int8)v63;
    if ( KiIrqlFlags )
    {
      v52 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v52 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v52 >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        v55 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
        v37 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    __writecr8(v27);
    __incgsdword(0x8AB4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v64, 66116LL, ExpApplyRewaitBoost);
    goto LABEL_29;
  }
  KxReleaseQueuedSpinLock(&v61);
  v31 = (unsigned __int8)v63;
  if ( KiIrqlFlags )
  {
    v48 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v48 >= 2u )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(v9 << ((unsigned __int8)v63 + 1));
      v37 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  __writecr8(v31);
  __incgsdword(0x8AB8u);
  return 0;
}
