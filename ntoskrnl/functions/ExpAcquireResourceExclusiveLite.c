__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // r8
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v8; // si
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v14; // r11
  unsigned int v15; // esi
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rcx
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rcx
  signed __int32 v46[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v47; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v48; // [rsp+28h] [rbp-48h]
  __int64 v49; // [rsp+30h] [rbp-40h]
  __int64 v50; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v51; // [rsp+40h] [rbp-30h]
  struct _KTHREAD *v52; // [rsp+48h] [rbp-28h]
  __int64 v53; // [rsp+50h] [rbp-20h]
  _QWORD v54[3]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v49 = 0LL;
  v51 = 0LL;
  BYTE3(v53) = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8A78u);
  v6 = (volatile __int64 *)(a1 + 96);
  v48 = (volatile signed __int64 *)(a1 + 96);
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v14) = 4;
    else
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  LOBYTE(v49) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v47, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&v47) )
  {
    KxWaitForLockOwnerShip(&v47);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v8 = 1;
    v9 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v9 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v47);
      v10 = v47;
      if ( !v47 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v48, 0LL, (signed __int64)&v47) == &v47 )
          goto LABEL_9;
        v10 = KxWaitForLockChainValid(&v47);
      }
      v47 = 0LL;
      v25 = (unsigned __int8)v48;
      if ( ((v25 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), (__int64)v48)) & 4) != 0 )
      {
        _InterlockedOr(v46, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v10 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_9;
    }
    KiReleaseQueuedSpinLockInstrumented(&v47, retaddr);
LABEL_9:
    v11 = (unsigned __int8)v49;
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v27 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v8;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v15 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v15;
    v16 = v15 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v47);
      v17 = v47;
      if ( !v47 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v48, 0LL, (signed __int64)&v47) == &v47 )
          goto LABEL_22;
        v17 = KxWaitForLockChainValid(&v47);
      }
      v47 = 0LL;
      v26 = (unsigned __int8)v48;
      if ( ((v26 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v17 + 8), (__int64)v48)) & 4) != 0 )
      {
        _InterlockedOr(v46, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v17 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_22;
    }
    KiReleaseQueuedSpinLockInstrumented(&v47, retaddr);
LABEL_22:
    v18 = (unsigned __int8)v49;
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v31 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v18);
    __incgsdword(0x8A80u);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
    v44 = v16;
    v45 = 65585LL;
LABEL_81:
    PerfLogExecutiveResourceAcquire(v45, a1, v44, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v54[1] = v54;
    v54[0] = v54;
    v19 = *(_QWORD *)(a1 + 40);
    v50 = 0LL;
    v51 = 0LL;
    v53 = 393217LL;
    v52 = CurrentThread;
    v54[2] = 0LL;
    if ( v19 )
    {
      v22 = *(_QWORD **)(v19 + 8);
      if ( *v22 != v19 )
        __fastfail(3u);
      v51 = *(__int64 **)(v19 + 8);
      v50 = v19;
      *v22 = &v50;
      *(_QWORD *)(v19 + 8) = &v50;
    }
    else
    {
      v51 = &v50;
      v50 = (__int64)&v50;
      *(_QWORD *)(a1 + 40) = &v50;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v47);
      v20 = v47;
      if ( !v47 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v48, 0LL, (signed __int64)&v47) == &v47 )
          goto LABEL_31;
        v20 = KxWaitForLockChainValid(&v47);
      }
      v47 = 0LL;
      v23 = (unsigned __int8)v48;
      if ( ((v23 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), (__int64)v48)) & 4) != 0 )
      {
        _InterlockedOr(v46, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v20 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_31;
    }
    KiReleaseQueuedSpinLockInstrumented(&v47, retaddr);
LABEL_31:
    v21 = (unsigned __int8)v49;
    if ( KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v31 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    __writecr8(v21);
    __incgsdword(0x8A84u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v50, 66084LL, ExpApplyRewaitBoost);
    ExpBoostIoAfterAcquire(a1, CurrentThread, 0LL);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
    v44 = 1LL;
    v45 = 65569LL;
    goto LABEL_81;
  }
  KxReleaseQueuedSpinLock(&v47);
  v24 = (unsigned __int8)v49;
  if ( KiIrqlFlags )
  {
    v36 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v36 >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
      v31 = (v39 & v38[5]) == 0;
      v38[5] &= v39;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  __writecr8(v24);
  __incgsdword(0x8A88u);
  return 0;
}
