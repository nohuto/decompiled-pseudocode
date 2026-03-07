__int64 __fastcall MiMarkHugePfnBad(ULONG_PTR a1, int a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  _QWORD *v16; // rax
  __int64 v17; // rax
  ULONG_PTR v18; // r12
  struct _KTHREAD *v19; // r13
  __int64 v20; // rsi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  struct _KPRCB *v23; // r8
  signed __int32 *v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  int v27; // eax
  unsigned __int8 v28; // r8
  bool v29; // zf
  unsigned int v30; // esi
  volatile LONG *v31; // rsi
  __int64 *v32; // rdi
  int v33; // eax
  __int64 v34; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v36; // di
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  PVOID Pool; // rdi
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  bool v43; // r8
  _QWORD *v44; // rax
  PVOID *v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  signed __int64 *v48; // rax
  unsigned __int8 v49; // cl
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int8 v52; // al
  unsigned __int8 v53; // di
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  unsigned int v58; // [rsp+20h] [rbp-68h]
  PVOID *P; // [rsp+28h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  volatile LONG *SpinLocka; // [rsp+30h] [rbp-58h]
  _QWORD *v64; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v65; // [rsp+A0h] [rbp+18h]
  unsigned int v66; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v3 = (a1 >> 18) & 0x3FFFFF;
  P = 0LL;
  v4 = MiSearchNumaNodeTable(a1);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = *((unsigned int *)v4 + 2);
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  if ( v8->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C67008, (__int64)v8)) != 0 )
  {
    _BitScanForward(&v10, AbEntrySummary);
    v66 = v10;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (__int64)(&v8[1].Process + 12 * v66);
    if ( (unsigned __int64)&qword_140C67008 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C67008 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C67008, v6, (__int64)&qword_140C67008);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v16 = (_QWORD *)(qword_140C67A70 + 8 * v3);
  v64 = v16;
  while ( 1 )
  {
    v17 = MiHugePfnPartition(v16);
    SpinLock = (PEX_SPIN_LOCK)v17;
    if ( !v17 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
      KeAbPostRelease((ULONG_PTR)&qword_140C67008);
      v29 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v29
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221226548LL;
    }
    --CurrentThread->SpecialApcDisable;
    v18 = v17 + 216;
    v19 = KeGetCurrentThread();
    v20 = 0LL;
    _disable();
    v21 = v19->AbEntrySummary;
    if ( v19->AbEntrySummary || (v21 = KiAbTryReclaimOrphanedEntries(v18, (__int64)v19)) != 0 )
    {
      _BitScanForward(&v22, v21);
      v58 = v22;
      v19->AbEntrySummary = v21 & ~(1 << v22);
      v23 = KeGetCurrentPrcb();
      v24 = (signed __int32 *)v23->SchedulerAssist;
      if ( v24 )
      {
        _m_prefetchw(v24);
        v25 = *v24;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(v24, v25 & 0xFFDFFFFF, v25);
        }
        while ( v26 != v25 );
        if ( (v25 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
      _enable();
      v20 = (__int64)(&v19[1].Process + 12 * v58);
      if ( v18 - qword_140C65668 >= 0x8000000000LL )
        v27 = -1;
      else
        v27 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
      *(_DWORD *)(v20 + 8) = v27;
      *(_QWORD *)v20 = v18 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v18, v20, v18);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    if ( SpinLock == (PEX_SPIN_LOCK)MiHugePfnPartition(v64) )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v18);
    KeAbPostRelease(v18);
    v16 = v64;
    v29 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v29 )
    {
      v16 = v64;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
        v16 = v64;
      }
    }
  }
  if ( ((unsigned __int8)*((_DWORD *)SpinLock + 1) & v28) != 0 )
  {
    v30 = -1073740748;
  }
  else
  {
    v31 = (volatile LONG *)(*((_QWORD *)SpinLock + 2) + 25408 * v7 + 23104);
    SpinLocka = v31;
    while ( 1 )
    {
      v32 = (__int64 *)(qword_140C67A70 + 8 * v3);
      v65 = MiLockHugePfn((__int64)v32);
      ExAcquireSpinLockExclusiveAtDpcLevel(v31);
      LOBYTE(v33) = MiIsPageInHugePfn(a1);
      if ( !v33 )
      {
        v30 = -1073740748;
        P = (PVOID *)(v2 & -(__int64)(v2 != 0));
        goto LABEL_88;
      }
      v34 = *v32;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66F90);
      if ( (v34 & 8) != 0 )
        break;
      if ( v2 )
      {
        v42 = (_QWORD *)qword_140C66FE0;
        v43 = 0;
        if ( !qword_140C66FE0 )
          goto LABEL_66;
        while ( 1 )
        {
          if ( v3 >= (v42[3] & 0x3FFFFFuLL) )
          {
            v44 = (_QWORD *)v42[1];
            if ( !v44 )
            {
              v43 = 1;
LABEL_66:
              RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C66FE0, (unsigned __int64)v42, v43, v2);
              *v32 = v34 | 8;
              goto LABEL_75;
            }
          }
          else
          {
            v44 = (_QWORD *)*v42;
            if ( !*v42 )
              goto LABEL_66;
          }
          v42 = v44;
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
      v31 = SpinLocka;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v32 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v32 - qword_140C67A70) >> 3) & 0x1F)));
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v36 = v65;
        if ( v65 <= 0xFu && CurrentIrql >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v65 + 1));
          v29 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
      else
      {
        v36 = v65;
      }
      __writecr8(v36);
      Pool = MiAllocatePool(64, 0x10000uLL, 0x7048694Du);
      if ( !Pool )
      {
        v30 = -1073741670;
        goto LABEL_98;
      }
      v41 = MiAllocatePool(64, 0x28uLL, 0x7048694Du);
      v2 = (unsigned __int64)v41;
      if ( !v41 )
      {
        ExFreePoolWithTag(Pool, 0);
        v30 = -1073741670;
        goto LABEL_98;
      }
      v41[3] = v3;
      v41[4] = Pool;
    }
    v45 = 0LL;
    if ( v2 )
      v45 = (PVOID *)v2;
    v2 = qword_140C66FE0;
    P = v45;
    while ( v2 )
    {
      v46 = *(_QWORD *)(v2 + 24) & 0x3FFFFFLL;
      if ( v3 <= v46 )
      {
        if ( v3 >= v46 )
          break;
        v2 = *(_QWORD *)v2;
      }
      else
      {
        v2 = *(_QWORD *)(v2 + 8);
      }
    }
LABEL_75:
    v47 = a1 & 0x3FFFF;
    if ( !_bittest64(*(const signed __int64 **)(v2 + 32), v47) )
    {
      _bittestandset64(*(signed __int64 **)(v2 + 32), v47);
      ++qword_140C66FE8;
    }
    v48 = (signed __int64 *)(*(_QWORD *)(v2 + 32) + 0x8000LL);
    v49 = _bittest64(v48, v47);
    if ( (a2 & 0x10000000) != 0 )
    {
      if ( !v49 )
        _bittestandset64(v48, v47);
    }
    else if ( v49 )
    {
      _bittestandreset64(v48, v47);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
    v50 = *v32 & 7;
    if ( v50 == 1 || v50 == 2 )
    {
      v51 = MiHugePfnPartition(v32);
      MiUnlinkHugeRange(v51, v3);
      MiInsertHugeRangeInList(0LL, v3, 9);
    }
    else if ( v50 != 4 )
    {
      v30 = 259;
      goto LABEL_88;
    }
    v30 = 0;
LABEL_88:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v32 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v32 - qword_140C67A70) >> 3) & 0x1F)));
    if ( KiIrqlFlags && (v52 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v52 <= 0xFu )
    {
      v53 = v65;
      if ( v65 <= 0xFu && v52 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(-1LL << (v65 + 1));
        v29 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)v54);
      }
    }
    else
    {
      v53 = v65;
    }
    __writecr8(v53);
  }
LABEL_98:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v18);
  KeAbPostRelease(v18);
  v29 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v29 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
  KeAbPostRelease((ULONG_PTR)&qword_140C67008);
  v29 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v29 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( P )
  {
    ExFreePoolWithTag(P[4], 0);
    ExFreePoolWithTag(P, 0);
  }
  if ( v30 == -1073740748 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  return v30;
}
