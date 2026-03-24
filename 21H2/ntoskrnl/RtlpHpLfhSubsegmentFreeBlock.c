/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x140306DB0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14033CE40 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x140342200 (RtlpHpSegFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402B1104 (RtlpHpLfhBucketAddSubsegment.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140307730 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  signed __int64 v4; // r15
  unsigned __int16 v6; // ax
  unsigned int v8; // r12d
  signed __int64 *v9; // rsi
  int v10; // ebx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // r11
  int v16; // edx
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  signed __int64 *v19; // r9
  char v20; // cl
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // r9
  char *v24; // r8
  char *v25; // rcx
  __int64 v26; // r10
  int v27; // edx
  signed __int16 v28; // ax
  int v29; // r14d
  int v30; // ebp
  unsigned __int8 v31; // r13
  unsigned __int16 v32; // dx
  unsigned int v33; // r13d
  signed __int64 v35; // rbx
  unsigned int v36; // ecx
  ULONG_PTR v37; // r13
  unsigned __int8 v38; // al
  int v39; // r10d
  char v40; // al
  signed __int64 v41; // r8
  _QWORD *v42; // r9
  signed __int64 v43; // rcx
  _QWORD *v44; // rdx
  signed __int64 *v45; // r8
  signed __int64 **v46; // rax
  signed __int64 **v47; // rax
  __int64 v48; // rbx
  ULONG_PTR v49; // r15
  struct _KTHREAD *v50; // rbp
  ULONG_PTR v51; // r9
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  bool v56; // zf
  unsigned __int64 v57; // rdx
  unsigned __int8 v58; // r14
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rbx
  unsigned __int8 v62; // al
  __int64 v63; // rcx
  __int64 v64; // rax
  ULONG_PTR v65; // r15
  struct _KTHREAD *v66; // rbx
  unsigned __int8 v67; // si
  unsigned int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rdi
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  int v73; // edx
  _DWORD *v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int SessionId; // edx
  unsigned int v79; // r8d
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v88; // eax
  signed __int64 v89; // rax
  unsigned int i; // [rsp+30h] [rbp-78h]
  unsigned int v91; // [rsp+4Ch] [rbp-5Ch]
  __int64 v92; // [rsp+58h] [rbp-50h]
  unsigned __int8 v94; // [rsp+B8h] [rbp+10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+18h]

  v94 = -1;
  v4 = 0LL;
  v91 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v6 = WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = 1;
  v9 = (signed __int64 *)a2;
  if ( !a3 )
    goto LABEL_17;
  v10 = v6;
  v11 = a3 - HIWORD(v91) - a2;
  v12 = *(_QWORD *)(a1 + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)v6 + 15) >> 4)) + 128);
  v13 = *(_DWORD *)(v12 + 72);
  v14 = *(_BYTE *)(v12 + 76);
  if ( v13 )
  {
    v15 = (v11 * (unsigned __int64)v13) >> v14;
    v16 = v11 - v15 * v10;
  }
  else
  {
    LODWORD(v15) = v11 >> v14;
    v16 = ((1 << v14) - 1) & v11;
  }
  if ( v16 )
    return 0;
  v17 = *((_WORD *)v9 + 18);
  v18 = 2 * v15;
  if ( v17 >= (unsigned __int16)v15 )
    v17 = v15;
  *((_WORD *)v9 + 18) = v17;
  v19 = &v9[(unsigned __int64)v18 >> 6];
  _m_prefetchw(v19 + 6);
  if ( (((unsigned __int64)_InterlockedAnd64(v19 + 6, ~(3LL << (v18 & 0x3F))) >> (v18 & 0x3F)) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, (_DWORD)v9, (unsigned int)v15, 0LL);
    return 0;
  }
  if ( *((_BYTE *)v9 + 45) > 1u )
  {
    v20 = *((_BYTE *)v9 + 44);
    v21 = a3 - (_DWORD)v9;
    v22 = (unsigned int)(a3 - (_DWORD)v9) >> v20;
    v23 = 2 * v22;
    v24 = (char *)v9 + 2 * v22 + *((unsigned __int16 *)v9 + 23);
    _m_prefetchw(v24);
    v25 = &v24[2 * (((unsigned int)(v10 + v21 - 1) >> v20) - (unsigned int)v22) + 2];
    LODWORD(v26) = -1;
    v27 = 0;
    if ( v24 < v25 )
    {
      do
      {
        v28 = _InterlockedDecrement16((volatile signed __int16 *)v24);
        if ( v28 )
        {
          if ( v28 == -1 )
            --v27;
        }
        else
        {
          ++v27;
          if ( (_DWORD)v26 == -1 )
            v26 = v23 >> 1;
        }
        v24 += 2;
        v23 += 2LL;
      }
      while ( v24 < v25 );
      if ( v27 )
      {
        v57 = (v27 << *((_BYTE *)v9 + 44)) / 4096;
        if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v57);
      }
      if ( (_DWORD)v26 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v9, v26, 2, a4);
    }
  }
LABEL_17:
  v29 = *((unsigned __int16 *)v9 + 17);
  LOWORD(v30) = *((_WORD *)v9 + 16);
  v31 = -1;
  do
  {
    if ( !v4 && (!(_WORD)v30 || (unsigned __int16)v30 == v29 - 1) )
    {
      v35 = v9[2];
      v36 = *(unsigned __int8 *)(a1 + 57);
      for ( i = v36; ; v36 = i )
      {
        while ( 1 )
        {
          while ( !v35 )
          {
            v35 = _InterlockedCompareExchange64(v9 + 2, 3LL, 0LL);
            if ( !v35 )
            {
              v4 = 0LL;
              goto LABEL_24;
            }
          }
          if ( (v35 & 1) != 0 )
            break;
          v37 = v35 + 16;
          v4 = v35;
          v38 = RtlpHpAcquireLockExclusive(v35 + 16, v36);
          v35 = v9[2];
          v94 = v38;
          if ( v4 == v35 )
          {
            v31 = v38;
            goto LABEL_33;
          }
          if ( i )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v37);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
            {
              v31 = v94;
              if ( v94 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v88 = ~(unsigned __int16)(-1LL << (v94 + 1));
                v56 = (v88 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v88;
                if ( v56 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            else
            {
              v31 = v94;
            }
            __writecr8(v31);
            v36 = i;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v37);
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            ++CurrentThread->AbAllocationRegionCount;
            v79 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
            v56 = !_BitScanReverse((unsigned int *)&v80, v79);
            if ( v56 )
              goto LABEL_160;
            while ( 1 )
            {
              v81 = ~(1 << v80);
              v82 = (__int64)&CurrentThread->LockEntries[v80];
              v79 &= v81;
              v92 = v82;
              if ( (*(_BYTE *)(v82 + 26) & 1) != 0
                && (*(_DWORD *)(v82 + 32) & 1) == 0
                && (*(_QWORD *)(v82 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v37 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v82 + 40) == SessionId )
              {
                *(_BYTE *)(v82 + 26) &= ~1u;
                if ( *(_QWORD *)(v82 + 32) )
                  break;
              }
              v56 = !_BitScanReverse((unsigned int *)&v80, v79);
              if ( v56 )
                goto LABEL_160;
            }
            if ( !v82 )
            {
LABEL_160:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v37, SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v82 + 32) |= 2u;
              if ( *(__int64 *)(v82 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v82);
                v82 = v92;
              }
              *(_DWORD *)(v82 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v82 + 25) &= ~1u;
              *(_QWORD *)(v82 + 32) = 0LL;
              v83 = (signed __int64)(v82 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( AbAllocationRegionCount == 1 )
                CurrentThread->AbEntrySummary |= 1 << v83;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v83);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
            v56 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v56
              && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v84);
            }
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            v36 = 0;
            v31 = v94;
          }
        }
        v89 = _InterlockedCompareExchange64(v9 + 2, v35 & 1 | (v35 + 2) & 0xFFFFFFFFFFFFFFFEuLL, v35);
        v56 = v35 == v89;
        v35 = v89;
        if ( v56 )
          break;
      }
      v4 = 0LL;
LABEL_33:
      if ( !v4 )
      {
LABEL_24:
        v33 = -1;
        goto LABEL_25;
      }
    }
    v32 = v30 + 1;
    v30 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v9 + 16, v30 + 1, v30);
  }
  while ( v32 != v30 + 1 );
  if ( (_WORD)v30 )
  {
    if ( v30 != v29 - 1 )
      goto LABEL_24;
    v39 = 2;
  }
  else
  {
    v39 = 0;
  }
  v40 = *((_BYTE *)v9 + 38);
  switch ( v40 )
  {
    case 1:
      v41 = v4 + 40;
      goto LABEL_38;
    case 0:
      v41 = v4 + 24;
      v42 = (_QWORD *)(v4 + 8);
      goto LABEL_39;
    case 2:
      v41 = 0LL;
LABEL_38:
      v42 = 0LL;
LABEL_39:
      if ( v39 )
      {
        v43 = 0LL;
        v44 = 0LL;
      }
      else
      {
        v43 = v4 + 24;
        v44 = (_QWORD *)(v4 + 8);
      }
      if ( v41 )
      {
        v45 = (signed __int64 *)*v9;
        v46 = (signed __int64 **)v9[1];
        if ( *(signed __int64 **)(*v9 + 8) == v9 && *v46 == v9 )
        {
          *v46 = v45;
          v45[1] = (signed __int64)v46;
          if ( v42 )
            --*v42;
          goto LABEL_46;
        }
LABEL_177:
        __fastfail(3u);
      }
LABEL_46:
      *((_BYTE *)v9 + 38) = v39;
      if ( v43 )
      {
        v47 = *(signed __int64 ***)(v43 + 8);
        if ( *v47 != (signed __int64 *)v43 )
          goto LABEL_177;
        *v9 = v43;
        v9[1] = (signed __int64)v47;
        *v47 = v9;
        *(_QWORD *)(v43 + 8) = v9;
        if ( v44 )
          ++*v44;
        v9 = 0LL;
      }
      if ( (*(_BYTE *)v4 & 1) == 0 && *(_QWORD *)(v4 + 8) > 8uLL )
      {
        v9 = *(signed __int64 **)v43;
        v64 = **(_QWORD **)v43;
        if ( *(_QWORD *)(*(_QWORD *)v43 + 8LL) != v43 || *(signed __int64 **)(v64 + 8) != v9 )
          goto LABEL_177;
        *(_QWORD *)v43 = v64;
        *(_QWORD *)(v64 + 8) = v43;
        --*v44;
        *((_BYTE *)v9 + 38) = 2;
      }
      if ( v9 && *((_BYTE *)v9 + 38) == 2 )
        v9[2] = 0LL;
      break;
  }
  v48 = a1;
  v49 = v4 + 16;
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v49);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && v31 <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (v31 + 1));
          v56 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v56 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
    }
    __writecr8(v31);
    v33 = -1;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v49);
    v50 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
    {
      v51 = (unsigned int)MmGetSessionIdEx(v50->ApcState.Process);
      v33 = -1;
    }
    else
    {
      v33 = -1;
      v51 = 0xFFFFFFFFLL;
    }
    --v50->SpecialApcDisable;
    v58 = ++v50->AbAllocationRegionCount;
    v59 = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
    v56 = !_BitScanReverse((unsigned int *)&v60, v59);
    if ( v56 )
      goto LABEL_77;
    while ( 1 )
    {
      v61 = (__int64)&v50->LockEntries[v60];
      v59 &= ~(1 << v60);
      if ( (*(_BYTE *)(v61 + 26) & 1) != 0
        && (*(_DWORD *)(v61 + 32) & 1) == 0
        && (*(_QWORD *)(v61 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v49 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v61 + 40) == (_DWORD)v51 )
      {
        *(_BYTE *)(v61 + 26) &= ~1u;
        if ( *(_QWORD *)(v61 + 32) )
          break;
      }
      v56 = !_BitScanReverse((unsigned int *)&v60, v59);
      if ( v56 )
        goto LABEL_77;
    }
    if ( !v61 )
    {
LABEL_77:
      if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v50, v49, v51, 0LL);
    }
    else
    {
      *(_BYTE *)(v61 + 32) |= 2u;
      if ( *(__int64 *)(v61 + 32) < 0 )
        KiAbEntryRemoveFromTree(v61);
      *(_DWORD *)(v61 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v61 + 25) &= ~1u;
      *(_QWORD *)(v61 + 32) = 0LL;
      v62 = 1 << ((signed __int64)(v61 - (unsigned __int64)v50->LockEntries) / 96);
      if ( v58 == 1 )
        v50->AbEntrySummary |= v62;
      else
        _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, v62);
    }
    --v50->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v50);
    v56 = v50->SpecialApcDisable++ == -1;
    if ( v56 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
      KiCheckForKernelApcDelivery(v63);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v48 = a1;
  }
  v4 = 0LL;
  if ( v9 )
    RtlpHpLfhBucketAddSubsegment(
      v48,
      *(_QWORD *)(v48
                + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + (((unsigned int)(unsigned __int16)v91 + 15) >> 4))
                + 128),
      (__int64)v9,
      a4);
LABEL_25:
  if ( v4 )
  {
    v65 = v4 + 16;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v65);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v94 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = ~(unsigned __int16)(-1LL << (v94 + 1));
            v74 = v72->SchedulerAssist;
            v56 = (v73 & v74[5]) == 0;
            v74[5] &= v73;
            if ( v56 )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
      }
      __writecr8(v94);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v65, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v65);
      v66 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v65) == 1 )
        v33 = MmGetSessionIdEx(v66->ApcState.Process);
      --v66->SpecialApcDisable;
      v67 = ++v66->AbAllocationRegionCount;
      v68 = ((char)v66->AbEntrySummary | (char)v66->AbOrphanedEntrySummary) ^ 0x3F;
      v56 = !_BitScanReverse((unsigned int *)&v69, v68);
      if ( v56 )
        goto LABEL_112;
      while ( 1 )
      {
        v70 = (__int64)&v66->LockEntries[v69];
        v68 &= ~(1 << v69);
        if ( (*(_BYTE *)(v70 + 26) & 1) != 0
          && (*(_DWORD *)(v70 + 32) & 1) == 0
          && (*(_QWORD *)(v70 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v65 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v70 + 40) == v33 )
        {
          *(_BYTE *)(v70 + 26) &= ~1u;
          if ( *(_QWORD *)(v70 + 32) )
            break;
        }
        v56 = !_BitScanReverse((unsigned int *)&v69, v68);
        if ( v56 )
          goto LABEL_112;
      }
      if ( !v70 )
      {
LABEL_112:
        if ( (*((_DWORD *)&v66->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v66, v65, v33, 0LL);
      }
      else
      {
        *(_BYTE *)(v70 + 32) |= 2u;
        if ( *(__int64 *)(v70 + 32) < 0 )
          KiAbEntryRemoveFromTree(v70);
        *(_DWORD *)(v70 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v70 + 25) &= ~1u;
        *(_QWORD *)(v70 + 32) = 0LL;
        v75 = (signed __int64)(v70 - (unsigned __int64)v66->LockEntries) / 96;
        if ( v67 == 1 )
          v66->AbEntrySummary |= 1 << v75;
        else
          _InterlockedOr8((volatile signed __int8 *)&v66->AbOrphanedEntrySummary, 1 << v75);
      }
      --v66->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v66);
      v56 = v66->SpecialApcDisable++ == -1;
      if ( v56 && ($C459BD0D405E8E46662177FB3D0A143F *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
        KiCheckForKernelApcDelivery(v76);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v8;
}
