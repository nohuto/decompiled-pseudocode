__int64 __fastcall MiInsertPartitionPages(__int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  unsigned __int64 *v10; // r13
  int updated; // r12d
  __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r10
  _QWORD *v23; // rcx
  int v24; // ecx
  __int64 v25; // r8
  int v26; // eax
  _QWORD *v27; // rbx
  _QWORD *i; // rax
  __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 v39; // xmm1_8
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdi
  _QWORD *v43; // rcx
  struct _KTHREAD *v44; // rsi
  volatile signed __int32 *v45; // rbx
  __int64 v46; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v48; // ecx
  struct _KPRCB *v49; // rcx
  signed __int32 *v50; // r8
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  int SessionId; // eax
  unsigned __int64 *v54; // rax
  unsigned __int64 *v55; // rsi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  unsigned __int64 **v65; // rdx
  unsigned __int64 *v66; // rcx
  unsigned __int64 *v67; // rcx
  unsigned __int64 *v68; // r8
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  int v73; // r8d
  unsigned __int64 v74; // rbx
  _QWORD *v75; // rdx
  bool v76; // r8
  _QWORD *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rbx
  unsigned __int8 v80; // al
  unsigned __int8 v81; // di
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  unsigned __int64 *v85; // [rsp+30h] [rbp-D0h]
  unsigned int v86; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v87; // [rsp+40h] [rbp-C0h]
  _QWORD *v88; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v90; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  _QWORD *v92; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  __m128i v94[5]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v95[9]; // [rsp+E0h] [rbp-20h] BYREF
  KIRQL v96; // [rsp+180h] [rbp+80h]
  unsigned __int8 v97; // [rsp+180h] [rbp+80h]
  int v98; // [rsp+188h] [rbp+88h]
  int v99; // [rsp+190h] [rbp+90h]
  __int64 v100; // [rsp+198h] [rbp+98h]

  v100 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v94, 0, 0x48uLL);
  memset(v95, 0, 0x48uLL);
  v10 = *(unsigned __int64 **)a3;
  updated = 0;
  v88 = 0LL;
  v12 = 0x3FFFFFFFFFFFFFFFLL;
  v89 = 0LL;
  v94[0].m128i_i64[1] = (__int64)a1;
  v94[0].m128i_i64[0] = a2;
  CurrentThread = KeGetCurrentThread();
  v13 = *(_DWORD *)(a3 + 24) & 0x14;
  v90 = v10;
  if ( v13 == 4 )
  {
    v14 = (_QWORD *)*v10;
    v15 = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      v16 = (_QWORD *)v15[1];
      v17 = v15;
      v18 = v15;
      if ( v16 )
      {
        do
        {
          v15 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v18 )
            break;
          v18 = v15;
        }
      }
      if ( !(unsigned int)MiAddRangeToPartitionTree(&v89, v17[3] & 0x3FFFFFFFFFFFFFFFLL, v17[4], 4) )
        goto LABEL_17;
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
  {
    v19 = (_QWORD *)*v10;
    v20 = 0LL;
    while ( v19 )
    {
      v20 = v19;
      v19 = (_QWORD *)*v19;
    }
    while ( v20 )
    {
      v21 = (_QWORD *)v20[1];
      v22 = (__int64)v20;
      v23 = v20;
      if ( v21 )
      {
        do
        {
          v20 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        while ( 1 )
        {
          v20 = (_QWORD *)(v20[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v20 || (_QWORD *)*v20 == v23 )
            break;
          v23 = v20;
        }
      }
      MiActOnPartitionNodePages(v22, 0xAu, 0, (__int16 **)v94);
    }
  }
  v24 = *(_DWORD *)(a3 + 24) & 0x20;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
  {
    if ( v24 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(a1, v10, v9, v12);
      if ( updated < 0 )
        goto LABEL_107;
    }
  }
  else
  {
    if ( v24 )
    {
      if ( !(unsigned int)MiInitializeHugePfnDatabase() )
      {
LABEL_17:
        updated = -1073741670;
        goto LABEL_107;
      }
      *(_DWORD *)(a3 + 24) |= 4u;
      updated = MiFreePartitionTree((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
      if ( updated < 0 )
      {
        MiFreePartitionTree(a1, v10, 1, 1);
        goto LABEL_107;
      }
      a2 = 0LL;
      v10 = 0LL;
      v90 = 0LL;
    }
    if ( a1 != (__int16 *)MiSystemPartition )
    {
      if ( (*(_DWORD *)(a3 + 24) & 0x20) == 0 )
        MiClearPartitionPageBitMap((__int64)a1, (_QWORD **)v10);
      MiReduceCommitLimits(a1, a4, a4);
      MiReturnCommit((__int64)a1, a4, v25);
    }
  }
  if ( (unsigned __int16 *)a2 != MiSystemPartition )
    goto LABEL_72;
  updated = MiFreePartitionTree((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
  if ( (*(_DWORD *)(a3 + 24) & 4) != 0 )
    MiRemovePhysicalMemoryBatchComplete();
  if ( updated < 0 )
  {
    v26 = *(_DWORD *)(a3 + 24);
    v27 = 0LL;
    if ( (v26 & 0x20) != 0 )
    {
      for ( i = (_QWORD *)*v10; i; i = (_QWORD *)*i )
        v27 = i;
      v29 = (v27[3] >> 18) & 0x3FFFFFLL;
      v30 = qword_140C67A70 + 8 * v29;
      v31 = MiLockHugePfn(v30);
      MiInsertHugeRangeInList(0LL, v29, 0);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v30 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v30 - qword_140C67A70) >> 3) & 0x1F)));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
          v36 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v31);
      goto LABEL_107;
    }
    v37 = 0LL;
    a2 = (__int64)a1;
    *((_QWORD *)&v95[0] + 1) = v94[0].m128i_i64[0];
    v95[1] = v94[1];
    v38 = v94[3];
    v95[2] = v94[2];
    v39 = v94[4].m128i_i64[0];
    *(_QWORD *)&v95[0] = _mm_srli_si128(v94[0], 8).m128i_u64[0];
    *(_DWORD *)(a3 + 24) = v26 & 0xFFFFFFFB;
    v95[3] = v38;
    *(_QWORD *)&v95[4] = v39;
    v40 = (_QWORD *)*v10;
    v100 = 0LL;
    while ( v40 )
    {
      v27 = v40;
      v40 = (_QWORD *)*v40;
    }
    if ( v27 )
    {
      do
      {
        v41 = (_QWORD *)v27[1];
        v42 = (__int64)v27;
        v43 = v27;
        if ( v41 )
        {
          do
          {
            v27 = v41;
            v41 = (_QWORD *)*v41;
          }
          while ( v41 );
        }
        else
        {
          while ( 1 )
          {
            v27 = (_QWORD *)(v27[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v27 || (_QWORD *)*v27 == v43 )
              break;
            v43 = v27;
          }
        }
        v37 += RtlNumberOfSetBitsEx((_QWORD *)(v42 + 32));
        if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
          MiActOnPartitionNodePages(v42, 0xAu, 0, (__int16 **)v95);
      }
      while ( v27 );
      v100 = v37;
    }
LABEL_72:
    if ( !a2 )
      goto LABEL_107;
    v99 = *(_DWORD *)(a3 + 24) & 0x21;
    if ( !a5 )
    {
      --CurrentThread->SpecialApcDisable;
      v44 = KeGetCurrentThread();
      v45 = (volatile signed __int32 *)(a2 + 216);
      v46 = 0LL;
      _disable();
      AbEntrySummary = v44->AbEntrySummary;
      if ( v44->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a2 + 216, (__int64)v44)) != 0 )
      {
        _BitScanForward(&v48, AbEntrySummary);
        v86 = v48;
        v44->AbEntrySummary = AbEntrySummary & ~(1 << v48);
        v49 = KeGetCurrentPrcb();
        v50 = (signed __int32 *)v49->SchedulerAssist;
        if ( v50 )
        {
          _m_prefetchw(v50);
          v51 = *v50;
          do
          {
            v52 = v51;
            v51 = _InterlockedCompareExchange(v50, v51 & 0xFFDFFFFF, v51);
          }
          while ( v52 != v51 );
          if ( (v51 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v49);
        }
        _enable();
        v46 = (__int64)(&v44[1].Process + 12 * v86);
        if ( (unsigned __int64)v45 - qword_140C65668 >= 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx((__int64)v44->ApcState.Process);
        *(_DWORD *)(v46 + 8) = SessionId;
        *(_QWORD *)v46 = (unsigned __int64)v45 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64(v45, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 216), v46, a2 + 216);
      if ( v46 )
        *(_BYTE *)(v46 + 18) = 1;
    }
    v54 = (unsigned __int64 *)*v10;
    v55 = 0LL;
    while ( v54 )
    {
      v55 = v54;
      v54 = (unsigned __int64 *)*v54;
    }
    if ( !v55 )
      goto LABEL_93;
    while ( 1 )
    {
      v85 = v55;
      v62 = v55[3];
      v92 = v55 + 3;
      v63 = v62 & 0x3FFFFFFFFFFFFFFFLL;
      v64 = RtlNumberOfSetBitsEx(v55 + 4);
      v65 = (unsigned __int64 **)v55[1];
      v66 = v55;
      v87 = v64;
      if ( v65 )
      {
        v67 = *v65;
        v55 = (unsigned __int64 *)v55[1];
        while ( v67 )
        {
          v55 = v67;
          v67 = (unsigned __int64 *)*v67;
        }
      }
      else
      {
        while ( 1 )
        {
          v55 = (unsigned __int64 *)(v55[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v55 || (unsigned __int64 *)*v55 == v66 )
            break;
          v66 = v55;
        }
      }
      v96 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 224));
      RtlAvlRemoveNode(v90, v85);
      if ( v99 == 33 )
        break;
      if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
      {
        v68 = &v89;
        goto LABEL_121;
      }
      v98 = 1;
LABEL_122:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 224));
      if ( KiIrqlFlags )
      {
        v69 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v69 <= 0xFu && v96 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << (v96 + 1));
          v36 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick((__int64)v70);
        }
      }
      __writecr8(v96);
      if ( (*(_DWORD *)(a3 + 24) & 0x310) == 0 && v99 != 33 )
        MiIncreaseCommitLimits(a2, v87, v87, 1, 0LL);
      *(_DWORD *)(a3 + 24) |= 0x40u;
      v73 = *(_DWORD *)(a3 + 24);
      if ( (v73 & 0x100) != 0 )
      {
        updated = 0;
      }
      else if ( (v73 & 0x800) == 0 )
      {
        v74 = (unsigned __int64)v85;
        updated = MiFreePartitionNodePages((__int16 *)a2, (__int64)v85, v73);
        if ( updated < 0 )
        {
          MiPartitionDeleteMemoryNode(a2, v63, v100);
          v78 = (v63 >> 18) & 0x3FFFFF;
          v79 = qword_140C67A70 + 8LL * (unsigned int)v78;
          v97 = MiLockHugePfn(v79);
          MiInsertHugeRangeInList(0LL, (unsigned int)v78, 0);
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v79 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v79 - qword_140C67A70) >> 3) & 0x1F)));
          if ( KiIrqlFlags && (v80 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v80 <= 0xFu )
          {
            v81 = v97;
            if ( v97 <= 0xFu && v80 >= 2u )
            {
              v82 = KeGetCurrentPrcb();
              v83 = v82->SchedulerAssist;
              v84 = ~(unsigned __int16)(-1LL << (v97 + 1));
              v36 = (v84 & v83[5]) == 0;
              v83[5] &= v84;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick((__int64)v82);
            }
          }
          else
          {
            v81 = v97;
          }
          __writecr8(v81);
          goto LABEL_155;
        }
        goto LABEL_135;
      }
      v74 = (unsigned __int64)v85;
LABEL_135:
      if ( !v98 )
        goto LABEL_155;
      v75 = v88;
      v76 = 0;
      if ( !v88 )
        goto LABEL_154;
      while ( (*v92 & 0x3FFFFFFFFFFFFFFFuLL) < (v75[3] & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v77 = (_QWORD *)*v75;
        if ( !*v75 )
        {
          v76 = 0;
          goto LABEL_154;
        }
LABEL_152:
        v75 = v77;
      }
      v77 = (_QWORD *)v75[1];
      if ( v77 )
        goto LABEL_152;
      v76 = 1;
LABEL_154:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v88, (unsigned __int64)v75, v76, v74);
LABEL_155:
      if ( !v55 )
      {
LABEL_93:
        if ( v99 == 33 || (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
          MiMakePartitionMemoryBlock(a2);
        if ( !a5 )
          MiUnlockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
        if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 16424), &LockHandle);
          MiComputeCommitThresholds((_QWORD *)a2);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v57 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
            {
              v58 = KeGetCurrentPrcb();
              v59 = v58->SchedulerAssist;
              v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v36 = (v60 & v59[5]) == 0;
              v59[5] &= v60;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick((__int64)v58);
            }
          }
          __writecr8(OldIrql);
        }
        goto LABEL_107;
      }
    }
    v68 = 0LL;
LABEL_121:
    v98 = MiMergePageNodes(a2, v85, v68);
    *(_QWORD *)(a2 + 17040) += v87;
    *(_BYTE *)(a2 + 12) = 1;
    goto LABEL_122;
  }
LABEL_107:
  MiDeletePartitionPageNodes((unsigned __int64 *)&v88);
  MiDeletePartitionPageNodes(&v89);
  return (unsigned int)updated;
}
