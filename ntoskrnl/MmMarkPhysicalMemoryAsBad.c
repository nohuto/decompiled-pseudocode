__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rbx
  int v8; // esi
  struct _KTHREAD *v9; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  __int64 v17; // r13
  int v18; // eax
  signed __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  bool v22; // zf
  int v23; // eax
  int v24; // esi
  struct _KTHREAD *v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  struct _KPRCB *v29; // rcx
  signed __int32 *v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  __int64 v39; // r12
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  PVOID Pool; // rbx
  unsigned __int64 v49; // rdi
  __int64 v50; // r8
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int64 v55; // r8
  struct _KPRCB *v56; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  char v59; // al
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int64 v64; // r8
  struct _KPRCB *v65; // r9
  __int64 v66; // rdx
  signed __int32 v67; // eax
  unsigned __int64 v68; // r15
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int64 v73; // r8
  struct _KPRCB *v74; // r9
  __int64 v75; // rdx
  signed __int32 v76; // eax
  BOOL v77; // ebx
  unsigned __int8 v78; // cl
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v82; // rbx
  int ContiguousPages; // esi
  struct _KTHREAD *v84; // rdi
  unsigned int v85; // eax
  __int64 v86; // r8
  unsigned int v87; // ecx
  struct _KPRCB *v88; // rcx
  signed __int32 v89; // eax
  signed __int32 v90; // ett
  int v91; // eax
  unsigned __int64 v92; // rbx
  ULONG_PTR v93; // rcx
  char v94; // cl
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  unsigned __int64 v103; // rax
  unsigned int v104; // ebx
  unsigned int v105; // edi
  int v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+74h] [rbp-8Ch]
  unsigned int v108; // [rsp+78h] [rbp-88h]
  unsigned int v109; // [rsp+7Ch] [rbp-84h]
  unsigned int v110; // [rsp+80h] [rbp-80h]
  int v111; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v112; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v115; // [rsp+C8h] [rbp-38h]
  _QWORD *v116; // [rsp+D0h] [rbp-30h]
  _QWORD v117[12]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = *a1;
  v116 = a2;
  v114 = 0LL;
  if ( (v3 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  v5 = *(_QWORD *)a1 >> 12;
  v115 = *(_QWORD *)a2 >> 12;
  v112 = v5 + v115;
  if ( v5 >= v5 + v115 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v106 = 0;
  v7 = 0LL;
  v8 = (((v2 & 1) == 0) << 28) + 739246080;
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  v107 = v8;
  v111 = 0;
  v113 = CurrentThread;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v9)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v108 = v11;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v9[1].Process + 12 * v108);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v7, (__int64)&qword_140C6B198);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v17 = 48 * v5 - 0x220000000000LL;
  while ( 1 )
  {
    LOBYTE(v18) = MiIsPageInHugePfn(v5);
    if ( v18 )
    {
      if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, v19) )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
      KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v23 = MiMarkHugePfnBad(v5, v8);
      --CurrentThread->SpecialApcDisable;
      v24 = v23;
      v106 = v23;
      v25 = KeGetCurrentThread();
      v26 = 0LL;
      _disable();
      v27 = v25->AbEntrySummary;
      if ( v25->AbEntrySummary || (v27 = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v25)) != 0 )
      {
        _BitScanForward(&v28, v27);
        v109 = v28;
        v25->AbEntrySummary = v27 & ~(1 << v28);
        v29 = KeGetCurrentPrcb();
        v30 = (signed __int32 *)v29->SchedulerAssist;
        if ( v30 )
        {
          _m_prefetchw(v30);
          v31 = *v30;
          do
          {
            v32 = v31;
            v31 = _InterlockedCompareExchange(v30, v31 & 0xFFDFFFFF, v31);
          }
          while ( v32 != v31 );
          if ( (v31 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
        _enable();
        v26 = (__int64)(&v25[1].Process + 12 * v109);
        if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
          v33 = -1;
        else
          v33 = MmGetSessionIdEx((__int64)v25->ApcState.Process);
        *(_DWORD *)(v26 + 8) = v33;
        *(_QWORD *)v26 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v26, (__int64)&qword_140C6B198);
      if ( v26 )
        *(_BYTE *)(v26 + 18) = 1;
      v22 = v24 == -1073740748;
      v8 = v107;
      if ( v22 )
      {
        --v5;
        v17 -= 48LL;
      }
      goto LABEL_124;
    }
    if ( v5 > qword_140C65820 || (v21 & *(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL)) == 0 )
    {
      v106 = -1073741584;
      goto LABEL_124;
    }
    if ( (v20 & *(_QWORD *)(v17 + 40)) != 0 )
    {
      v8 = v107;
      v106 = MiMarkFileOnlyPfnBad(v17);
      if ( v106 == -1073740748 )
      {
        --v5;
        v17 -= 48LL;
      }
      goto LABEL_124;
    }
    v34 = (unsigned __int8)MiLockPageInline(v17);
    if ( (*(_QWORD *)(v17 + 40) & 0x20000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v22 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v36);
        }
      }
      __writecr8(v34);
      --v5;
      v17 -= 48LL;
      goto LABEL_124;
    }
    v39 = MiReferencePagePartition(v17, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v39 )
    {
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v22 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v41);
        }
      }
      __writecr8(v34);
      v106 = -1073741558;
      goto LABEL_124;
    }
    if ( KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
        v22 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v45);
      }
    }
    __writecr8(v34);
    if ( (int)MiAcquireNonPagedResources(v39, 2uLL, 0LL, 0) < 0 )
    {
      v104 = -1073741670;
      v105 = -1073741670;
      PsDereferencePartition(*(_QWORD *)(v39 + 200));
      goto LABEL_214;
    }
    Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
    v49 = (unsigned __int8)MiLockPageInline(v17);
    if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) != v39 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
          v22 = (v54 & v53[5]) == 0;
          v50 = (unsigned int)v54 & v53[5];
          v53[5] = v50;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      __writecr8(v49);
      MiReturnCommit(v39, 2LL, v50);
      v55 = 2LL;
      if ( (unsigned __int16 *)v39 != MiSystemPartition )
        goto LABEL_95;
      v56 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v56->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_95;
      if ( (unsigned __int64)(CachedResidentAvailable + 2) <= 0x100 )
      {
        do
        {
          v58 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v56->CachedResidentAvailable,
                  CachedResidentAvailable + 2,
                  CachedResidentAvailable);
          v22 = (_DWORD)CachedResidentAvailable == v58;
          LODWORD(CachedResidentAvailable) = v58;
          if ( v22 )
            goto LABEL_96;
        }
        while ( v58 != -1 && (unsigned __int64)(v58 + 2LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v56->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v55 = (int)CachedResidentAvailable - 192 + 2LL;
      }
      if ( v55 )
LABEL_95:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 17280), v55);
LABEL_96:
      PsDereferencePartition(*(_QWORD *)(v39 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      --v5;
      v17 -= 48LL;
      goto LABEL_124;
    }
    if ( (v8 & 0x10000000) != 0 )
    {
      v59 = *(_BYTE *)(v17 + 35);
      if ( v59 >= 0 )
        *(_BYTE *)(v17 + 35) = v59 | 0x80;
    }
    if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v60 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v60 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = v61->SchedulerAssist;
          v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
          v22 = (v63 & v62[5]) == 0;
          v50 = (unsigned int)v63 & v62[5];
          v62[5] = v50;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v61);
        }
      }
      __writecr8(v49);
      MiReturnCommit(v39, 2LL, v50);
      v64 = 2LL;
      if ( (unsigned __int16 *)v39 != MiSystemPartition )
        goto LABEL_120;
      v65 = KeGetCurrentPrcb();
      v66 = (int)v65->CachedResidentAvailable;
      if ( (_DWORD)v66 == -1 )
        goto LABEL_120;
      if ( (unsigned __int64)(v66 + 2) <= 0x100 )
      {
        do
        {
          v67 = _InterlockedCompareExchange((volatile signed __int32 *)&v65->CachedResidentAvailable, v66 + 2, v66);
          v22 = (_DWORD)v66 == v67;
          LODWORD(v66) = v67;
          if ( v22 )
            goto LABEL_121;
        }
        while ( v67 != -1 && (unsigned __int64)(v67 + 2LL) <= 0x100 );
      }
      if ( (int)v66 > 192
        && (_DWORD)v66 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v65->CachedResidentAvailable,
                            192,
                            v66) )
      {
        v64 = (int)v66 - 192 + 2LL;
      }
      if ( v64 )
LABEL_120:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 17280), v64);
LABEL_121:
      PsDereferencePartition(*(_QWORD *)(v39 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      v106 = 259;
      goto LABEL_124;
    }
    if ( (*(_BYTE *)(v17 + 34) & 7) == 5
      && (_bittest64((const signed __int64 *)(v17 + 40), 0x35u) || MiIsPageOnBadList(v17)) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v69 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v69 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
          v22 = (v72 & v71[5]) == 0;
          v50 = (unsigned int)v72 & v71[5];
          v71[5] = v50;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v70);
        }
      }
      __writecr8(v49);
      MiReturnCommit(v39, 2LL, v50);
      v73 = 2LL;
      if ( (unsigned __int16 *)v39 != MiSystemPartition )
        goto LABEL_146;
      v74 = KeGetCurrentPrcb();
      v75 = (int)v74->CachedResidentAvailable;
      if ( (_DWORD)v75 == -1 )
        goto LABEL_146;
      if ( (unsigned __int64)(v75 + 2) <= 0x100 )
      {
        do
        {
          v76 = _InterlockedCompareExchange((volatile signed __int32 *)&v74->CachedResidentAvailable, v75 + 2, v75);
          v22 = (_DWORD)v75 == v76;
          LODWORD(v75) = v76;
          if ( v22 )
            goto LABEL_147;
        }
        while ( v76 != -1 && (unsigned __int64)(v76 + 2LL) <= 0x100 );
      }
      if ( (int)v75 > 192
        && (_DWORD)v75 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v74->CachedResidentAvailable,
                            192,
                            v75) )
      {
        v73 = (int)v75 - 192 + 2LL;
      }
      if ( v73 )
LABEL_146:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 17280), v73);
LABEL_147:
      PsDereferencePartition(*(_QWORD *)(v39 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      goto LABEL_124;
    }
    MiSetPfnRemovalRequested(v17, 1LL, 0LL);
    v77 = 0;
    if ( (unsigned int)MiCheckSlabPfnBitmap(v17, 1LL, 0) )
      v77 = MiCheckSlabPfnBitmap(v17, 1LL, 1) == 0;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v78 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v78 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v78 >= 2u )
      {
        v79 = KeGetCurrentPrcb();
        v80 = v79->SchedulerAssist;
        v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v22 = (v81 & v80[5]) == 0;
        v80[5] &= v81;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v79);
      }
    }
    __writecr8(v49);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v22 = v113->SpecialApcDisable++ == -1;
    if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v113->ApcState.ApcListHead[0].Flink != &v113->152 )
      KiCheckForKernelApcDelivery();
    if ( v77 )
    {
      memset(v117, 0, 0x58uLL);
      v117[0] = v39;
      v117[10] = v5;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)v117);
    }
    v82 = 0LL;
    ContiguousPages = MiFindContiguousPagesEx(v39, v5, v5, 0LL, 0, 1uLL, 1u, 0x80000000, 0x80000000, v8, 0, 0LL, &v114);
    v106 = 0;
    --v113->SpecialApcDisable;
    v84 = KeGetCurrentThread();
    _disable();
    v85 = v84->AbEntrySummary;
    if ( v84->AbEntrySummary || (v85 = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v84)) != 0 )
    {
      _BitScanForward(&v87, v85);
      v110 = v87;
      v84->AbEntrySummary = v85 & ~(1 << v87);
      v88 = KeGetCurrentPrcb();
      v86 = (__int64)v88->SchedulerAssist;
      if ( v86 )
      {
        _m_prefetchw((const void *)v86);
        v89 = *(_DWORD *)v86;
        do
        {
          v90 = v89;
          v89 = _InterlockedCompareExchange((volatile signed __int32 *)v86, v89 & 0xFFDFFFFF, v89);
        }
        while ( v90 != v89 );
        if ( (v89 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v88);
      }
      _enable();
      v82 = (__int64)(&v84[1].Process + 12 * v110);
      if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
        v91 = -1;
      else
        v91 = MmGetSessionIdEx((__int64)v84->ApcState.Process);
      *(_DWORD *)(v82 + 8) = v91;
      *(_QWORD *)v82 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v82, (__int64)&qword_140C6B198);
    if ( v82 )
      *(_BYTE *)(v82 + 18) = 1;
    if ( v5 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v5 - 0x21FFFFFFFFD8LL), 0x36u) )
    {
      v92 = (unsigned __int8)MiLockPageInline(v17);
      if ( ContiguousPages < 0 )
      {
        if ( MiIsPageOnBadList(v17) )
        {
          ContiguousPages = 0;
        }
        else if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
        {
          byte_140C67BC0 = 1;
          ContiguousPages = 0;
          v111 = 1;
          v106 = 259;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v94 = KiIrqlFlags;
        if ( !KiIrqlFlags )
          goto LABEL_191;
      }
      else
      {
        if ( (*(_BYTE *)(v17 + 35) & 0x40) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v99 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v99 <= 0xFu && (unsigned __int8)v92 <= 0xFu && v99 >= 2u )
            {
              v100 = KeGetCurrentPrcb();
              v101 = v100->SchedulerAssist;
              v102 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v92 + 1));
              v22 = (v102 & v101[5]) == 0;
              v101[5] &= v102;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)v100);
            }
          }
          __writecr8(v92);
          MiFreeContiguousPages(v5, 1uLL);
          goto LABEL_209;
        }
        *(_WORD *)(v17 + 32) = 0;
        MiSetPfnPteFrame(v17, 0LL);
        MiInsertPageInList(v93, 0x20u);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v94 = KiIrqlFlags;
        if ( !KiIrqlFlags )
          goto LABEL_191;
      }
      v95 = KeGetCurrentIrql();
      if ( (v94 & 1) != 0 && v95 <= 0xFu && (unsigned __int8)v92 <= 0xFu && v95 >= 2u )
      {
        v96 = KeGetCurrentPrcb();
        v97 = v96->SchedulerAssist;
        v98 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v92 + 1));
        v22 = (v98 & v97[5]) == 0;
        v86 = (unsigned int)v98 & v97[5];
        v97[5] = v86;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v96);
      }
LABEL_191:
      __writecr8(v92);
      goto LABEL_207;
    }
    v106 = -1073741584;
LABEL_207:
    MiReturnCommit(v39, 1LL, v86);
    v103 = MiReturnResavailToPrcb((void *)v39, 1uLL);
    if ( v103 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 17280), v103);
LABEL_209:
    PsDereferencePartition(*(_QWORD *)(v39 + 200));
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v104 = ContiguousPages;
      v105 = ContiguousPages;
LABEL_214:
      v68 = v112;
      goto LABEL_217;
    }
    v8 = v107;
LABEL_124:
    v68 = v112;
    ++v5;
    v17 += 48LL;
    if ( v5 >= v112 )
      break;
    CurrentThread = v113;
  }
  v104 = v106;
  v105 = 0;
LABEL_217:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
  v22 = v113->SpecialApcDisable++ == -1;
  if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v113->ApcState.ApcListHead[0].Flink != &v113->152 )
    KiCheckForKernelApcDelivery();
  if ( v111 )
    ZwUpdateWnfStateData((__int64)&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL);
  v22 = v115 == 1;
  *v116 = (v115 + v5 - v68) << 12;
  if ( v22 )
    return v104;
  return v105;
}
