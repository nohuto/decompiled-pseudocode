char __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  __int64 CurrentThread; // r14
  bool v5; // si
  volatile __int64 *v6; // r8
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // dl
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // r11
  unsigned int ThreadResourceHint; // eax
  __int64 v17; // rdx
  int v18; // r11d
  unsigned __int64 EmptyEntry; // r8
  __int64 v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // cl
  unsigned int v33; // r14d
  unsigned int v34; // r14d
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned int v37; // r14d
  unsigned int v38; // r14d
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int8 v41; // cl
  int v42; // eax
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // cl
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  bool v51; // zf
  __int64 v52; // r8
  __int64 v53; // rcx
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  unsigned __int8 v62; // cl
  struct _KPRCB *v63; // r9
  _DWORD *v64; // r8
  int v65; // eax
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  unsigned __int8 v70; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v72; // r8
  int v73; // eax
  signed __int32 v74[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v75; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v76; // [rsp+28h] [rbp-48h]
  __int64 v77; // [rsp+30h] [rbp-40h]
  __int128 v78; // [rsp+38h] [rbp-38h] BYREF
  __int128 v79; // [rsp+48h] [rbp-28h]
  __int128 v80; // [rsp+58h] [rbp-18h] BYREF
  __int64 v81; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  v77 = 0LL;
  v81 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8A8Cu);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  v76 = (volatile signed __int64 *)(a1 + 96);
  v75 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (unsigned __int8)v75 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (v9 << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  LOBYTE(v77) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v75, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&v75) )
  {
    KxWaitForLockOwnerShip(&v75);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
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
            KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
            goto LABEL_9;
          }
          _m_prefetchw(&v75);
          v11 = v75;
          if ( !v75 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
              goto LABEL_9;
            v11 = KxWaitForLockChainValid(&v75);
          }
          v75 = 0LL;
          v41 = (unsigned __int8)v76;
          if ( ((v41 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), (__int64)v76)) & 4) != 0 )
          {
            _InterlockedOr(v74, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
          }
LABEL_9:
          v12 = (unsigned __int8)v77;
          if ( KiIrqlFlags )
          {
            v70 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v70 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v70 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v72 = CurrentPrcb->SchedulerAssist;
              v73 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
              v51 = (v73 & v72[5]) == 0;
              v72[5] &= v73;
              if ( v51 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v12);
          __incgsdword(0x8A94u);
          __incgsdword(0x8A64u);
          if ( v5 )
            goto LABEL_135;
          return 1;
        }
        if ( *(char *)(a1 + 26) >= 0 )
          break;
        if ( *(_QWORD *)(a1 + 48) == CurrentThread )
        {
          v33 = *(_DWORD *)(a1 + 56) + 8;
          *(_DWORD *)(a1 + 56) = v33;
          v34 = v33 >> 3;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
            goto LABEL_63;
          }
          _m_prefetchw(&v75);
          v35 = v75;
          if ( !v75 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
              goto LABEL_63;
            v35 = KxWaitForLockChainValid(&v75);
          }
          v75 = 0LL;
          v46 = (unsigned __int8)v76;
          if ( ((v46 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v35 + 8), (__int64)v76)) & 4) != 0 )
          {
            _InterlockedOr(v74, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v35 + 8) >> 5) & 0x7F], 0LL));
          }
LABEL_63:
          v36 = (unsigned __int8)v77;
          if ( KiIrqlFlags )
          {
            v47 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v49 = v48->SchedulerAssist;
              v50 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
              v51 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v51 )
                KiRemoveSystemWorkPriorityKick(v48);
            }
          }
          __writecr8(v36);
          __incgsdword(0x8A90u);
          __incgsdword(0x8A64u);
          if ( v5 )
          {
            v52 = v34;
            v53 = 65585LL;
            goto LABEL_136;
          }
          return 1;
        }
        EmptyEntry = ExpFindEmptyEntry(a1, &v75);
        if ( EmptyEntry )
          goto LABEL_32;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = a1 + 48;
      v20 = ThreadResourceHint;
      v21 = *(_QWORD *)(a1 + 48);
      if ( v21 != CurrentThread )
      {
        v22 = 0LL;
        v23 = 0LL;
        if ( v21 )
        {
          v22 = 1LL;
        }
        else
        {
          v23 = a1 + 48;
          if ( v18 )
            v23 = 0LL;
        }
        if ( !(_DWORD)v20 )
          break;
        v24 = *(_QWORD *)(a1 + 16);
        if ( !v24 )
          break;
        if ( (unsigned int)v20 >= *(_DWORD *)(v24 + 8) )
          break;
        EmptyEntry = v24 + 16 * v20;
        if ( *(_QWORD *)EmptyEntry != CurrentThread )
          break;
      }
LABEL_31:
      if ( EmptyEntry )
        goto LABEL_32;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v25 = EmptyEntry;
    v26 = v17 + *(unsigned int *)(a1 + 72);
    if ( !EmptyEntry )
    {
      v27 = 0LL;
      goto LABEL_26;
    }
    v27 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
    EmptyEntry += 16LL;
    if ( v22 < v26 )
    {
      do
      {
        if ( *(_QWORD *)EmptyEntry == CurrentThread )
        {
          KeGetCurrentThread()->ResourceIndex = (__int64)(EmptyEntry - v25) >> 4;
          goto LABEL_31;
        }
        if ( *(_QWORD *)EmptyEntry )
        {
          if ( ++v22 == v26 )
          {
            EmptyEntry += 16LL;
            break;
          }
        }
        else if ( !v23 )
        {
          v23 = EmptyEntry;
        }
        EmptyEntry += 16LL;
      }
      while ( EmptyEntry != v27 );
    }
LABEL_26:
    if ( v23 )
      break;
    if ( EmptyEntry < v27 )
    {
      v23 = EmptyEntry;
      if ( EmptyEntry )
        break;
    }
    ExpExpandResourceOwnerTable(a1, &v75, EmptyEntry, v23);
  }
  EmptyEntry = v23;
  KeGetCurrentThread()->ResourceIndex = (__int64)(v23 - v25) >> 4;
LABEL_32:
  if ( *(_QWORD *)EmptyEntry == CurrentThread )
  {
    v37 = *(_DWORD *)(EmptyEntry + 8) + 8;
    *(_DWORD *)(EmptyEntry + 8) = v37;
    v38 = v37 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
      goto LABEL_69;
    }
    _m_prefetchw(&v75);
    v39 = v75;
    if ( !v75 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
        goto LABEL_69;
      v39 = KxWaitForLockChainValid(&v75);
    }
    v75 = 0LL;
    v45 = (unsigned __int8)v76;
    if ( ((v45 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v39 + 8), (__int64)v76)) & 4) != 0 )
    {
      _InterlockedOr(v74, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v39 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_69:
    v40 = (unsigned __int8)v77;
    if ( KiIrqlFlags )
    {
      v54 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
        v51 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    __writecr8(v40);
    __incgsdword(0x8A98u);
    __incgsdword(0x8A64u);
    if ( v5 )
    {
      v52 = v38;
      v53 = 65617LL;
      goto LABEL_136;
    }
    return 1;
  }
  v28 = *(_DWORD *)(a1 + 64);
  if ( !v28 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v28 + 1;
    v29 = *(_DWORD *)(EmptyEntry + 8) & 7;
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v29 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
      goto LABEL_39;
    }
    _m_prefetchw(&v75);
    v30 = v75;
    if ( !v75 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
        goto LABEL_39;
      v30 = KxWaitForLockChainValid(&v75);
    }
    v75 = 0LL;
    v32 = (unsigned __int8)v76;
    if ( ((v32 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v30 + 8), (__int64)v76)) & 4) != 0 )
    {
      _InterlockedOr(v74, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v30 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_39:
    v31 = (unsigned __int8)v77;
    if ( KiIrqlFlags )
    {
      v66 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
        v51 = (v69 & v68[5]) == 0;
        v68[5] &= v69;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
    __writecr8(v31);
LABEL_41:
    __incgsdword(0x8A94u);
    __incgsdword(0x8A64u);
    if ( v5 )
    {
LABEL_135:
      v52 = 1LL;
      v53 = 65601LL;
LABEL_136:
      PerfLogExecutiveResourceAcquire(v53, a1, v52, *(unsigned int *)(a1 + 68));
    }
    return 1;
  }
  if ( a2 )
  {
    v42 = *(_DWORD *)(EmptyEntry + 8);
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v42 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v80 + 1) = &v80;
    *(_QWORD *)&v80 = &v80;
    *((_QWORD *)&v78 + 1) = 0LL;
    *((_QWORD *)&v79 + 1) = 393217LL;
    *(_QWORD *)&v79 = CurrentThread;
    v81 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v78);
    KxReleaseQueuedSpinLock(&v75);
    v43 = (unsigned __int8)v77;
    if ( KiIrqlFlags )
    {
      v62 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v62 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v62 >= 2u )
      {
        v63 = KeGetCurrentPrcb();
        v64 = v63->SchedulerAssist;
        v65 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
        v51 = (v65 & v64[5]) == 0;
        v64[5] &= v65;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
    __writecr8(v43);
    __incgsdword(0x8A9Cu);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v78, 66116LL, ExpApplyRewaitBoost);
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 1120);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    goto LABEL_41;
  }
  KxReleaseQueuedSpinLock(&v75);
  v44 = (unsigned __int8)v77;
  if ( KiIrqlFlags )
  {
    v58 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v58 <= 0xFu && (unsigned __int8)v77 <= 0xFu && v58 >= 2u )
    {
      v59 = KeGetCurrentPrcb();
      v60 = v59->SchedulerAssist;
      v61 = ~(unsigned __int16)(v9 << ((unsigned __int8)v77 + 1));
      v51 = (v61 & v60[5]) == 0;
      v60[5] &= v61;
      if ( v51 )
        KiRemoveSystemWorkPriorityKick(v59);
    }
  }
  __writecr8(v44);
  __incgsdword(0x8AA0u);
  return 0;
}
