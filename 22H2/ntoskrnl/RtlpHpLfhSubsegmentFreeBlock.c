/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x140287430
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x1402C2890 (RtlpHpSegFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140308854 (RtlpHpLfhBucketAddSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1405934AC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed __int64 v5; // r15
  unsigned __int16 v7; // ax
  char v8; // bp
  unsigned __int64 v9; // r8
  unsigned int v10; // r12d
  signed __int64 *v11; // rsi
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  char v16; // cl
  unsigned __int64 v17; // r11
  int v18; // edx
  unsigned __int16 v19; // ax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  char v22; // cl
  signed __int64 *v23; // r9
  char v24; // cl
  unsigned int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  int v29; // edx
  signed __int16 v30; // ax
  int v31; // r14d
  int v32; // ebp
  unsigned __int8 v33; // r13
  unsigned __int16 v34; // dx
  unsigned int v35; // r13d
  signed __int64 v37; // rbx
  unsigned int v38; // ecx
  ULONG_PTR v39; // r13
  unsigned __int8 v40; // al
  int v41; // r10d
  char v42; // al
  signed __int64 v43; // r8
  _QWORD *v44; // r9
  signed __int64 v45; // rcx
  _QWORD *v46; // rdx
  signed __int64 *v47; // r8
  signed __int64 **v48; // rax
  signed __int64 **v49; // rax
  __int64 v50; // rbx
  ULONG_PTR v51; // r15
  struct _KTHREAD *v52; // rbp
  ULONG_PTR v53; // r9
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  bool v58; // zf
  unsigned __int64 v59; // rdx
  unsigned __int8 v60; // r14
  unsigned int v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rbx
  unsigned __int8 v64; // al
  __int64 v65; // rcx
  __int64 v66; // rax
  ULONG_PTR v67; // r15
  struct _KTHREAD *v68; // rbx
  unsigned __int8 v69; // si
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rdi
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  int v75; // edx
  _DWORD *v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int SessionId; // edx
  unsigned int v81; // r8d
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v90; // eax
  signed __int64 v91; // rax
  unsigned int i; // [rsp+30h] [rbp-78h]
  unsigned int v93; // [rsp+4Ch] [rbp-5Ch]
  __int64 v94; // [rsp+58h] [rbp-50h]
  unsigned __int8 v96; // [rsp+B8h] [rbp+10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+18h]

  v96 = -1;
  v5 = 0LL;
  v8 = a4;
  v93 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v9 = HIWORD(v93);
  v10 = 1;
  v11 = (signed __int64 *)a2;
  if ( !a3 )
    goto LABEL_17;
  v12 = v7;
  v13 = a3 - v9 - a2;
  v14 = *(_QWORD *)(a1 + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)v7 + 15) >> 4)) + 128);
  v15 = *(_DWORD *)(v14 + 72);
  v16 = *(_BYTE *)(v14 + 76);
  if ( v15 )
  {
    v17 = (v13 * (unsigned __int64)v15) >> v16;
    v18 = v13 - v17 * v12;
  }
  else
  {
    LODWORD(v17) = v13 >> v16;
    v18 = ((1 << v16) - 1) & v13;
  }
  if ( v18 )
    return 0;
  v19 = *((_WORD *)v11 + 18);
  v20 = 2 * v17;
  if ( v19 >= (unsigned __int16)v17 )
    v19 = v17;
  *((_WORD *)v11 + 18) = v19;
  v21 = v20;
  v22 = v20 & 0x3F;
  v9 = ~(3LL << v22);
  v23 = &v11[v21 >> 6];
  _m_prefetchw(v23 + 6);
  if ( (((unsigned __int64)_InterlockedAnd64(v23 + 6, v9) >> v22) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v11, (unsigned int)v17, 0LL);
    return 0;
  }
  if ( *((_BYTE *)v11 + 45) > 1u )
  {
    v24 = *((_BYTE *)v11 + 44);
    v25 = a3 - (_DWORD)v11;
    v26 = v25 >> v24;
    v27 = 2 * v26;
    v9 = (unsigned __int64)v11 + 2 * v26 + *((unsigned __int16 *)v11 + 23);
    _m_prefetchw((const void *)v9);
    v28 = v9 + 2LL * (((v12 + v25 - 1) >> v24) - (unsigned int)v26 + 1);
    LODWORD(a3) = -1;
    v29 = 0;
    if ( v9 < v28 )
    {
      do
      {
        v30 = _InterlockedDecrement16((volatile signed __int16 *)v9);
        if ( v30 )
        {
          if ( v30 == -1 )
            --v29;
        }
        else
        {
          ++v29;
          if ( (_DWORD)a3 == -1 )
            a3 = v27 >> 1;
        }
        v9 += 2LL;
        v27 += 2LL;
      }
      while ( v9 < v28 );
      if ( v29 )
      {
        v59 = (v29 << *((_BYTE *)v11 + 44)) / 4096;
        if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v59);
      }
      if ( (_DWORD)a3 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v11, a3, 2, v8);
    }
  }
LABEL_17:
  v31 = *((unsigned __int16 *)v11 + 17);
  LOWORD(v32) = *((_WORD *)v11 + 16);
  v33 = -1;
  do
  {
    if ( !v5 && (!(_WORD)v32 || (unsigned __int16)v32 == v31 - 1) )
    {
      v37 = v11[2];
      v38 = *(unsigned __int8 *)(a1 + 57);
      for ( i = v38; ; v38 = i )
      {
        while ( 1 )
        {
          while ( !v37 )
          {
            v37 = _InterlockedCompareExchange64(v11 + 2, 3LL, 0LL);
            if ( !v37 )
            {
              v5 = 0LL;
              goto LABEL_24;
            }
          }
          if ( (v37 & 1) != 0 )
            break;
          v39 = v37 + 16;
          v5 = v37;
          v40 = RtlpHpAcquireLockExclusive(v37 + 16, v38, v9);
          v37 = v11[2];
          v96 = v40;
          if ( v5 == v37 )
          {
            v33 = v40;
            goto LABEL_33;
          }
          if ( i )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v39);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
            {
              v33 = v96;
              if ( v96 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v90 = ~(unsigned __int16)(-1LL << (v96 + 1));
                v58 = (v90 & SchedulerAssist[5]) == 0;
                v9 = (unsigned int)v90 & SchedulerAssist[5];
                SchedulerAssist[5] = v9;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            else
            {
              v33 = v96;
            }
            __writecr8(v33);
            v38 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v39);
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            ++CurrentThread->AbAllocationRegionCount;
            v81 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
            v58 = !_BitScanReverse((unsigned int *)&v82, v81);
            if ( v58 )
              goto LABEL_160;
            while ( 1 )
            {
              v83 = ~(1 << v82);
              v84 = (__int64)&CurrentThread->LockEntries[v82];
              v81 &= v83;
              v94 = v84;
              if ( (*(_BYTE *)(v84 + 26) & 1) != 0
                && (*(_DWORD *)(v84 + 32) & 1) == 0
                && (*(_QWORD *)(v84 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v84 + 40) == SessionId )
              {
                *(_BYTE *)(v84 + 26) &= ~1u;
                if ( *(_QWORD *)(v84 + 32) )
                  break;
              }
              v58 = !_BitScanReverse((unsigned int *)&v82, v81);
              if ( v58 )
                goto LABEL_160;
            }
            if ( !v84 )
            {
LABEL_160:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v39, SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v84 + 32) |= 2u;
              if ( *(__int64 *)(v84 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v84);
                v84 = v94;
              }
              *(_DWORD *)(v84 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v84 + 25) &= ~1u;
              *(_QWORD *)(v84 + 32) = 0LL;
              v85 = (signed __int64)(v84 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                CurrentThread->AbEntrySummary |= 1 << v85;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v85);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
            v58 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v58
              && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v86);
            }
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            v38 = 0;
            v33 = v96;
          }
        }
        v91 = _InterlockedCompareExchange64(v11 + 2, v37 & 1 | (v37 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v37);
        v58 = v37 == v91;
        v37 = v91;
        if ( v58 )
          break;
      }
      v5 = 0LL;
LABEL_33:
      if ( !v5 )
      {
LABEL_24:
        v35 = -1;
        goto LABEL_25;
      }
    }
    v34 = v32 + 1;
    v32 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v11 + 16, v32 + 1, v32);
  }
  while ( v34 != v32 + 1 );
  if ( (_WORD)v32 )
  {
    if ( v32 != v31 - 1 )
      goto LABEL_24;
    v41 = 2;
  }
  else
  {
    v41 = 0;
  }
  v42 = *((_BYTE *)v11 + 38);
  switch ( v42 )
  {
    case 1:
      v43 = v5 + 40;
      goto LABEL_38;
    case 0:
      v43 = v5 + 24;
      v44 = (_QWORD *)(v5 + 8);
      goto LABEL_39;
    case 2:
      v43 = 0LL;
LABEL_38:
      v44 = 0LL;
LABEL_39:
      if ( v41 )
      {
        v45 = 0LL;
        v46 = 0LL;
      }
      else
      {
        v45 = v5 + 24;
        v46 = (_QWORD *)(v5 + 8);
      }
      if ( v43 )
      {
        v47 = (signed __int64 *)*v11;
        v48 = (signed __int64 **)v11[1];
        if ( *(signed __int64 **)(*v11 + 8) == v11 && *v48 == v11 )
        {
          *v48 = v47;
          v47[1] = (signed __int64)v48;
          if ( v44 )
            --*v44;
          goto LABEL_46;
        }
LABEL_177:
        __fastfail(3u);
      }
LABEL_46:
      *((_BYTE *)v11 + 38) = v41;
      if ( v45 )
      {
        v49 = *(signed __int64 ***)(v45 + 8);
        if ( *v49 != (signed __int64 *)v45 )
          goto LABEL_177;
        *v11 = v45;
        v11[1] = (signed __int64)v49;
        *v49 = v11;
        *(_QWORD *)(v45 + 8) = v11;
        if ( v46 )
          ++*v46;
        v11 = 0LL;
      }
      if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
      {
        v11 = *(signed __int64 **)v45;
        v66 = **(_QWORD **)v45;
        if ( *(_QWORD *)(*(_QWORD *)v45 + 8LL) != v45 || *(signed __int64 **)(v66 + 8) != v11 )
          goto LABEL_177;
        *(_QWORD *)v45 = v66;
        *(_QWORD *)(v66 + 8) = v45;
        --*v46;
        *((_BYTE *)v11 + 38) = 2;
      }
      if ( v11 && *((_BYTE *)v11 + 38) == 2 )
        v11[2] = 0LL;
      break;
  }
  v50 = a1;
  v51 = v5 + 16;
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v51);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && v33 <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v57 = ~(unsigned __int16)(-1LL << (v33 + 1));
          v58 = (v57 & v56[5]) == 0;
          v56[5] &= v57;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v55);
        }
      }
    }
    __writecr8(v33);
    v35 = -1;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v51);
    v52 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
    {
      v53 = (unsigned int)MmGetSessionIdEx(v52->ApcState.Process);
      v35 = -1;
    }
    else
    {
      v35 = -1;
      v53 = 0xFFFFFFFFLL;
    }
    --v52->SpecialApcDisable;
    v60 = ++v52->AbAllocationRegionCount;
    v61 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
    v58 = !_BitScanReverse((unsigned int *)&v62, v61);
    if ( v58 )
      goto LABEL_77;
    while ( 1 )
    {
      v63 = (__int64)&v52->LockEntries[v62];
      v61 &= ~(1 << v62);
      if ( (*(_BYTE *)(v63 + 26) & 1) != 0
        && (*(_DWORD *)(v63 + 32) & 1) == 0
        && (*(_QWORD *)(v63 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v51 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v63 + 40) == (_DWORD)v53 )
      {
        *(_BYTE *)(v63 + 26) &= ~1u;
        if ( *(_QWORD *)(v63 + 32) )
          break;
      }
      v58 = !_BitScanReverse((unsigned int *)&v62, v61);
      if ( v58 )
        goto LABEL_77;
    }
    if ( !v63 )
    {
LABEL_77:
      if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, v53, 0LL);
    }
    else
    {
      *(_BYTE *)(v63 + 32) |= 2u;
      if ( *(__int64 *)(v63 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v63);
      *(_DWORD *)(v63 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v63 + 25) &= ~1u;
      *(_QWORD *)(v63 + 32) = 0LL;
      v64 = 1 << ((signed __int64)(v63 - (unsigned __int64)v52->LockEntries) / 96);
      if ( v60 == 1 )
        v52->AbEntrySummary |= v64;
      else
        _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, v64);
    }
    --v52->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v52);
    v58 = v52->SpecialApcDisable++ == -1;
    if ( v58 && ($C459BD0D405E8E46662177FB3D0A143F *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
      KiCheckForKernelApcDelivery(v65);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v50 = a1;
  }
  v5 = 0LL;
  if ( v11 )
    RtlpHpLfhBucketAddSubsegment(
      v50,
      *(_QWORD *)(v50
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v93 + 15) >> 4))
                + 128),
      v11,
      a4);
LABEL_25:
  if ( v5 )
  {
    v67 = v5 + 16;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v67);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && v96 <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            v75 = ~(unsigned __int16)(-1LL << (v96 + 1));
            v76 = v74->SchedulerAssist;
            v58 = (v75 & v76[5]) == 0;
            v76[5] &= v75;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
      }
      __writecr8(v96);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v67);
      v68 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v67) == 1 )
        v35 = MmGetSessionIdEx(v68->ApcState.Process);
      --v68->SpecialApcDisable;
      v69 = ++v68->AbAllocationRegionCount;
      v70 = ((char)v68->AbEntrySummary | (char)v68->AbOrphanedEntrySummary) ^ 0x3F;
      v58 = !_BitScanReverse((unsigned int *)&v71, v70);
      if ( v58 )
        goto LABEL_112;
      while ( 1 )
      {
        v72 = (__int64)&v68->LockEntries[v71];
        v70 &= ~(1 << v71);
        if ( (*(_BYTE *)(v72 + 26) & 1) != 0
          && (*(_DWORD *)(v72 + 32) & 1) == 0
          && (*(_QWORD *)(v72 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v67 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v72 + 40) == v35 )
        {
          *(_BYTE *)(v72 + 26) &= ~1u;
          if ( *(_QWORD *)(v72 + 32) )
            break;
        }
        v58 = !_BitScanReverse((unsigned int *)&v71, v70);
        if ( v58 )
          goto LABEL_112;
      }
      if ( !v72 )
      {
LABEL_112:
        if ( (*((_DWORD *)&v68->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v68, v67, v35, 0LL);
      }
      else
      {
        *(_BYTE *)(v72 + 32) |= 2u;
        if ( *(__int64 *)(v72 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v72);
        *(_DWORD *)(v72 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v72 + 25) &= ~1u;
        *(_QWORD *)(v72 + 32) = 0LL;
        v77 = (signed __int64)(v72 - (unsigned __int64)v68->LockEntries) / 96;
        if ( v69 == 1 )
          v68->AbEntrySummary |= 1 << v77;
        else
          _InterlockedOr8((volatile signed __int8 *)&v68->AbOrphanedEntrySummary, 1 << v77);
      }
      --v68->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v68);
      v58 = v68->SpecialApcDisable++ == -1;
      if ( v58 && ($C459BD0D405E8E46662177FB3D0A143F *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
        KiCheckForKernelApcDelivery(v78);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v10;
}
