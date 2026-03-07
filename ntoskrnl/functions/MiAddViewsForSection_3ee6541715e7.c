__int64 __fastcall MiAddViewsForSection(ULONG_PTR a1, unsigned __int64 a2, __int16 a3)
{
  volatile signed __int32 *v3; // r15
  ULONG_PTR v5; // rbp
  unsigned int v6; // r13d
  unsigned __int8 CurrentIrql; // r12
  int active; // eax
  unsigned __int64 v9; // rax
  int PrototypePtes; // eax
  unsigned int v12; // ecx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct _KTHREAD *v16; // r12
  __int64 v17; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v19; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  volatile signed __int64 *v25; // rcx
  struct _KTHREAD *v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  unsigned int v29; // ecx
  struct _KPRCB *v30; // rcx
  signed __int32 *v31; // r10
  __int64 v32; // rcx
  int v33; // eax
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  _DWORD *v36; // r8
  __int64 v37; // rax
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // edx
  struct _KTHREAD *v42; // r10
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned int v45; // ecx
  struct _KPRCB *v46; // rcx
  signed __int32 *v47; // r8
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  __int64 v50; // rcx
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // edx
  unsigned __int8 v56; // dl
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // edx
  unsigned __int8 v60; // dl
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // edx
  ULONG_PTR v64; // r12
  unsigned __int8 v65; // cl
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // edx
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // edx
  unsigned __int64 v73; // rbp
  __int64 v74; // rdi
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r9
  int v77; // eax
  _DWORD *v78; // r8
  KIRQL v79; // al
  ULONG_PTR v80; // [rsp+30h] [rbp-B8h]
  __int64 v81; // [rsp+30h] [rbp-B8h]
  char v82; // [rsp+38h] [rbp-B0h]
  __int64 v83; // [rsp+40h] [rbp-A8h]
  __int64 v84; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2b; // [rsp+48h] [rbp-A0h]
  __int64 v88; // [rsp+60h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-80h]
  unsigned int v90; // [rsp+70h] [rbp-78h]
  int v91; // [rsp+74h] [rbp-74h] BYREF
  unsigned int v92; // [rsp+78h] [rbp-70h]
  unsigned int v93; // [rsp+7Ch] [rbp-6Ch]
  ULONG_PTR v94; // [rsp+98h] [rbp-50h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  int FileExtents; // [rsp+100h] [rbp+18h]

  v3 = *(volatile signed __int32 **)a1;
  v5 = a1;
  v80 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 64LL) )
  {
    v6 = 1;
    CurrentThread = 0LL;
    v88 = 0LL;
  }
  else
  {
    v6 = 0;
    v14 = *(_QWORD *)v3;
    v15 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v88 = v14;
    --CurrentThread->SpecialApcDisable;
    v16 = KeGetCurrentThread();
    v17 = v14 + 40;
    _disable();
    AbEntrySummary = v16->AbEntrySummary;
    if ( v16->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v14 + 40, v16)) != 0 )
    {
      _BitScanForward(&v19, AbEntrySummary);
      v90 = v19;
      v16->AbEntrySummary = AbEntrySummary & ~(1 << v19);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v23 = *SchedulerAssist;
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
        }
        while ( v24 != v23 );
        if ( (v23 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v15 = (__int64)(&v16[1].Process + 12 * v90);
      if ( (unsigned __int64)(v17 - qword_140C65668) < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v16->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v15 + 8) = SessionId;
      *(_QWORD *)v15 = v17 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v17, v15, v17);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v36 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v37) = 4;
    else
      v37 = (-1LL << (CurrentIrql + 1)) & 4;
    v36[5] |= v37;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 18, CurrentIrql);
  }
  else
  {
    v91 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v91 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18);
    while ( (v3[18] & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3[18] & 0x40000000) == 0 )
        _InterlockedOr(v3 + 18, 0x40000000u);
      KeYieldProcessorEx(&v91);
    }
    v5 = a1;
  }
  if ( (a3 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++*((_DWORD *)v3 + 22);
    a3 |= 4u;
  }
  v82 = CurrentIrql + 1;
  while ( 1 )
  {
    v94 = v5;
    if ( !*(_QWORD *)(v5 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( KiIrqlFlags )
      {
        v38 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << v82);
          v13 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      __writecr8(CurrentIrql);
      if ( !v6 )
      {
        v25 = (volatile signed __int64 *)(v88 + 40);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v25);
          v25 = (volatile signed __int64 *)(v88 + 40);
        }
        KeAbPostRelease((ULONG_PTR)v25);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( (a3 & 2) != 0 )
        return 3221225865LL;
      if ( (*((_BYTE *)v3 + 62) & 0xC) != 0 && (a3 & 0x800) != 0 )
        return 3221226218LL;
      PrototypePtes = MiCreatePrototypePtes(v5);
      FileExtents = PrototypePtes;
      v12 = PrototypePtes;
      if ( PrototypePtes < 0 )
      {
        if ( PrototypePtes != -1073741302 )
          goto LABEL_176;
        if ( v6 )
          goto LABEL_70;
        v92 = 0;
        v83 = 0LL;
        --CurrentThread->SpecialApcDisable;
        v42 = KeGetCurrentThread();
        v43 = v88 + 40;
        BugCheckParameter2b = (ULONG_PTR)v42;
        _disable();
        v44 = v42->AbEntrySummary;
        if ( v42->AbEntrySummary )
        {
LABEL_105:
          _BitScanForward(&v45, v44);
          v92 = v45;
          v42->AbEntrySummary = v44 & ~(1 << v45);
          v46 = KeGetCurrentPrcb();
          v47 = (signed __int32 *)v46->SchedulerAssist;
          if ( v47 )
          {
            _m_prefetchw(v47);
            v48 = *v47;
            do
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange(v47, v48 & 0xFFDFFFFF, v48);
            }
            while ( v49 != v48 );
            if ( (v48 & 0x200000) != 0 )
            {
              KiRemoveSystemWorkPriorityKick(v46);
              v43 = v88 + 40;
              v42 = (struct _KTHREAD *)BugCheckParameter2b;
            }
          }
          _enable();
          v50 = (__int64)(&v42[1].Process + 12 * v92);
          v83 = v50;
          if ( (unsigned __int64)(v43 - qword_140C65668) >= 0x8000000000LL )
          {
            v51 = -1;
          }
          else
          {
            v51 = MmGetSessionIdEx(v42->ApcState.Process);
            v50 = v83;
            v43 = v88 + 40;
          }
          *(_DWORD *)(v50 + 8) = v51;
          *(_QWORD *)v50 = v43 & 0x7FFFFFFFFFFFFFFCLL;
        }
        else
        {
          v44 = KiAbTryReclaimOrphanedEntries(v43, v42);
          v43 = v88 + 40;
          if ( v44 )
          {
            v42 = (struct _KTHREAD *)BugCheckParameter2b;
            goto LABEL_105;
          }
          v50 = 0LL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v43, v50, v43);
          v50 = v83;
        }
        if ( v50 )
          *(_BYTE *)(v50 + 18) = 1;
LABEL_70:
        ExAcquireSpinLockExclusive(v3 + 18);
        goto LABEL_52;
      }
      if ( v6 )
        goto LABEL_30;
      v93 = 0;
      v81 = 0LL;
      --CurrentThread->SpecialApcDisable;
      v26 = KeGetCurrentThread();
      v27 = v88 + 40;
      BugCheckParameter2a = (ULONG_PTR)v26;
      _disable();
      v28 = v26->AbEntrySummary;
      if ( !v26->AbEntrySummary )
      {
        v28 = KiAbTryReclaimOrphanedEntries(v27, v26);
        v27 = v88 + 40;
        if ( !v28 )
        {
          v32 = 0LL;
LABEL_64:
          if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v27, v32, v27);
            v32 = v81;
          }
          if ( v32 )
            *(_BYTE *)(v32 + 18) = 1;
LABEL_30:
          ExAcquireSpinLockExclusive(v3 + 18);
          goto LABEL_17;
        }
        v26 = (struct _KTHREAD *)BugCheckParameter2a;
      }
      _BitScanForward(&v29, v28);
      v93 = v29;
      v26->AbEntrySummary = v28 & ~(1 << v29);
      v30 = KeGetCurrentPrcb();
      v31 = (signed __int32 *)v30->SchedulerAssist;
      if ( v31 )
      {
        _m_prefetchw(v31);
        v34 = *v31;
        do
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange(v31, v34 & 0xFFDFFFFF, v34);
        }
        while ( v35 != v34 );
        if ( (v34 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v30);
          v27 = v88 + 40;
          v26 = (struct _KTHREAD *)BugCheckParameter2a;
        }
      }
      _enable();
      v32 = (__int64)(&v26[1].Process + 12 * v93);
      v81 = v32;
      if ( (unsigned __int64)(v27 - qword_140C65668) < 0x8000000000LL )
      {
        v33 = MmGetSessionIdEx(v26->ApcState.Process);
        v32 = v81;
        v27 = v88 + 40;
      }
      else
      {
        v33 = -1;
      }
      *(_DWORD *)(v32 + 8) = v33;
      *(_QWORD *)v32 = v27 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_64;
    }
    if ( (a3 & 0x400) != 0 )
    {
      FileExtents = -1073741800;
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( KiIrqlFlags )
      {
        v69 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v69 <= 0xFu && CurrentIrql <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << v82);
          v13 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
      __writecr8(CurrentIrql);
      if ( v6 )
        goto LABEL_175;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v88 + 40));
      KeAbPostRelease(v88 + 40);
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v13
        || ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink == &CurrentThread->152 )
      {
        goto LABEL_175;
      }
      goto LABEL_174;
    }
    active = MiReferenceActiveSubsection(v5);
    FileExtents = active;
    if ( active < 0 )
      break;
    if ( v6 && (*(_DWORD *)(v5 + 52) & 0x40000000) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( KiIrqlFlags )
      {
        v52 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << v82);
          v13 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      __writecr8(CurrentIrql);
      if ( (a3 & 0x800) != 0 )
      {
        v12 = -1073741078;
        FileExtents = -1073741078;
LABEL_154:
        v64 = v5;
        goto LABEL_177;
      }
      FileExtents = MiAllocateFileExtents(v5, 0, -1);
      v12 = FileExtents;
      if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
        goto LABEL_154;
      ExAcquireSpinLockExclusive(v3 + 18);
      if ( FileExtents < 0 )
      {
        v84 = MiDecrementSubsections(v5);
        if ( !v84 )
          goto LABEL_52;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
        if ( KiIrqlFlags )
        {
          v56 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && CurrentIrql <= 0xFu && v56 >= 2u )
          {
            v57 = KeGetCurrentPrcb();
            v58 = v57->SchedulerAssist;
            v59 = ~(unsigned __int16)(-1LL << v82);
            v13 = (v59 & v58[5]) == 0;
            v58[5] &= v59;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v57);
          }
        }
        __writecr8(CurrentIrql);
        MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (v3[15] & 0x3FF)), 1LL, v84);
        goto LABEL_70;
      }
    }
LABEL_17:
    if ( a2 )
    {
      v9 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v9 )
        goto LABEL_19;
      a2 -= v9;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v80 = v94;
    if ( !v6 )
      v80 = v94;
LABEL_52:
    if ( !v5 )
    {
LABEL_19:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
      else
        *((_DWORD *)v3 + 18) = 0;
      if ( KiIrqlFlags )
      {
        v65 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v65 <= 0xFu && CurrentIrql <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << v82);
          v13 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
      __writecr8(CurrentIrql);
      if ( !v6 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v88 + 40));
        KeAbPostRelease(v88 + 40);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      return 0LL;
    }
  }
  if ( active == -1073741302 )
    goto LABEL_52;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
  if ( KiIrqlFlags )
  {
    v60 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v60 <= 0xFu && CurrentIrql <= 0xFu && v60 >= 2u )
    {
      v61 = KeGetCurrentPrcb();
      v62 = v61->SchedulerAssist;
      v63 = ~(unsigned __int16)(-1LL << v82);
      v13 = (v63 & v62[5]) == 0;
      v62[5] &= v63;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v61);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v88 + 40));
    KeAbPostRelease(v88 + 40);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
LABEL_174:
      KiCheckForKernelApcDelivery();
  }
LABEL_175:
  v12 = FileExtents;
LABEL_176:
  v64 = v80;
LABEL_177:
  if ( v64 )
  {
    v73 = ExAcquireSpinLockExclusive(v3 + 18);
    v74 = MiDecrementSubsections(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
    if ( KiIrqlFlags )
    {
      v75 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && (unsigned __int8)v73 <= 0xFu && v75 >= 2u )
      {
        v76 = KeGetCurrentPrcb();
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v73 + 1));
        v78 = v76->SchedulerAssist;
        v13 = (v77 & v78[5]) == 0;
        v78[5] &= v77;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
    __writecr8(v73);
    if ( v74 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (v3[15] & 0x3FF)), v6, v74);
    v12 = FileExtents;
  }
  if ( (a3 & 1) != 0 )
  {
    v79 = ExAcquireSpinLockExclusive(v3 + 18);
    --*((_QWORD *)v3 + 5);
    --*((_DWORD *)v3 + 22);
    MiCheckControlArea(v3, v79);
    return (unsigned int)FileExtents;
  }
  return v12;
}
