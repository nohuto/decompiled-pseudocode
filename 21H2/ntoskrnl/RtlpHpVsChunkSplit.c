/*
 * XREFs of RtlpHpVsChunkSplit @ 0x140349EE0
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14023D958 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C0490 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14034AE20 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14034AF90 (RtlpHpVsFreeChunkInsert.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _QWORD *a6)
{
  unsigned int v9; // r15d
  __int64 v11; // rbx
  unsigned int v12; // r11d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  __int64 SchedulerAssist; // r9
  unsigned int v21; // r15d
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdi
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned int i; // r10d
  unsigned __int64 v29; // r9
  unsigned int v30; // r12d
  unsigned int v31; // r8d
  __int64 v32; // r15
  unsigned __int16 v33; // cx
  unsigned __int64 v34; // r8
  __int64 v35; // r15
  unsigned __int16 v36; // dx
  unsigned __int64 v37; // r8
  __int64 v38; // r15
  unsigned int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // r9d
  unsigned __int64 v42; // r15
  __int64 v43; // rdx
  unsigned int v44; // r8d
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r11
  unsigned int v47; // eax
  unsigned int v48; // edx
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  BOOLEAN v52; // al
  unsigned __int64 v53; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r12
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v61; // rcx
  unsigned __int8 v62; // al
  int v63; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v65; // rdx
  unsigned __int8 v66; // r15
  unsigned __int64 v67; // r8
  __int64 v68; // rcx
  unsigned int v69; // edx
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // r8
  unsigned int SessionId; // r11d
  ULONG_PTR v75; // r10
  unsigned int v76; // edx
  bool v77; // zf
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v83; // eax
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  int v88; // [rsp+34h] [rbp-44h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+40h] [rbp-38h]
  unsigned __int64 v91; // [rsp+48h] [rbp-30h]
  __int64 v92; // [rsp+50h] [rbp-28h]
  unsigned __int8 v93; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v95; // [rsp+C0h] [rbp+48h]
  unsigned int v96; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v97; // [rsp+C8h] [rbp+50h]
  int v98; // [rsp+C8h] [rbp+50h]
  unsigned int v99; // [rsp+D0h] [rbp+58h]
  unsigned int v100; // [rsp+D8h] [rbp+60h]
  unsigned __int8 v101; // [rsp+D8h] [rbp+60h]

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = a3 - a2;
  v13 = (a3 - a2 + 4127) & 0xFFFFF000;
  v14 = ((a3 + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000)
      - v13;
  if ( v13 >= (((_DWORD)a3
              + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
              - (_DWORD)a2) & 0xFFFFF000) )
    v14 = 0;
  *(_QWORD *)(a1 + 56) -= (v14 >> 12)
                        + (unsigned int)((16
                                        * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
                                        + (unsigned __int64)(a3 & 0xFFF)
                                        + 4095) >> 12)
                        - (unsigned int)(((unsigned __int64)(16
                                                           * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16))
                                        + 4095) >> 12)
                        - (unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_WORD *)a3);
  v15 = v9 - a4;
  if ( v15 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v16 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v17 = 16 * v16;
    if ( (unsigned int)(16 * v16) < 0x20 )
    {
      a4 += v16;
      v15 -= v16;
    }
    else if ( (v17 & 0xFFFFFFC0) == 0 && v17 != 32 )
    {
      ++a4;
      --v15;
    }
  }
  if ( 16 * v15 < 0x20 )
    a4 += v15;
  v18 = 0;
  if ( 16 * v15 >= 0x20 )
    v18 = v15;
  v99 = v18;
  v19 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  SchedulerAssist = (unsigned __int8)(RtlpHpHeapGlobals ^ (v12 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = SchedulerAssist;
  v21 = v18;
  if ( !v18 )
    v19 = 16 * a4;
  v22 = 0xF0F0F0F0F0F0F0FLL;
  v23 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v12 - 1 + v19) >> 12))) & (-1LL << (v12 >> 12));
  v24 = (v23 ^ *(_QWORD *)(a2 + 16)) & v23;
  if ( v24 )
  {
    LODWORD(SchedulerAssist) = SchedulerAssist | 0x200;
    *(_DWORD *)(a3 + 8) = SchedulerAssist;
    if ( (a5 & 1) == 0 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a6);
      v22 = 0xF0F0F0F0F0F0F0FLL;
    }
    v56 = a2 + 24;
    _BitScanForward64(&v57, v24);
    v91 = (0x101010101010101LL
         * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    _BitScanReverse64(&v58, v24);
    v59 = a2 + (unsigned int)((_DWORD)v57 << 12);
    v88 = v58 - v57 + 1;
    BugCheckParameter1 = ((1LL << v88) - 1) << v57;
    if ( *(_DWORD *)(a1 + 8) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v22 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v22;
      }
      v61 = (volatile signed __int32 *)(a2 + 24);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v61, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v61, CurrentIrql, v22, SchedulerAssist);
      v62 = CurrentIrql;
      v56 = a2 + 24;
      v93 = v62;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v93 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    }
    v63 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            a1 ^ *(_QWORD *)(a1 + 128),
            v59,
            (unsigned int)(v88 << 12));
    if ( v63 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= BugCheckParameter1;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v91);
      v63 = 0;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v56, retaddr);
      else
        *(_DWORD *)v56 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v65 = CurrentPrcb->SchedulerAssist;
      if ( v65 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v83 = v65[6] - 1;
          v65[6] = v83;
          if ( !v83 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v84 = KeGetCurrentIrql(), v84 <= 0xFu) )
      {
        v66 = v93;
        if ( v93 <= 0xFu && v84 >= 2u )
        {
          v85 = KeGetCurrentPrcb();
          v86 = v85->SchedulerAssist;
          v66 = v93;
          v87 = ~(unsigned __int16)(-1LL << (v93 + 1));
          v77 = (v87 & v86[5]) == 0;
          v86[5] &= v87;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick(v85);
        }
      }
      else
      {
        v66 = v93;
      }
      __writecr8(v66);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v56, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v56);
      BugCheckParameter1a = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v56) == 1 )
        SessionId = MmGetSessionIdEx(BugCheckParameter1a->ApcState.Process);
      else
        SessionId = -1;
      v75 = (ULONG_PTR)BugCheckParameter1a;
      --BugCheckParameter1a->SpecialApcDisable;
      v101 = ++BugCheckParameter1a->AbAllocationRegionCount;
      v76 = (*(char *)(v75 + 792) | *(char *)(v75 + 870)) ^ 0x3F;
      v77 = !_BitScanReverse((unsigned int *)&v78, v76);
      if ( v77 )
        goto LABEL_124;
      while ( 1 )
      {
        v79 = ~(1 << v78);
        v80 = (__int64)&BugCheckParameter1a->LockEntries[v78];
        v76 &= v79;
        v92 = v80;
        if ( (*(_BYTE *)(v80 + 26) & 1) != 0
          && (*(_DWORD *)(v80 + 32) & 1) == 0
          && (*(_QWORD *)(v80 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v56 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v80 + 40) == SessionId )
        {
          *(_BYTE *)(v80 + 26) &= ~1u;
          if ( *(_QWORD *)(v80 + 32) )
            break;
        }
        v77 = !_BitScanReverse((unsigned int *)&v78, v76);
        if ( v77 )
          goto LABEL_124;
      }
      if ( !v80 )
      {
LABEL_124:
        if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, v56, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v80 + 32) |= 2u;
        if ( *(__int64 *)(v80 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v80);
          v80 = v92;
          v75 = (ULONG_PTR)BugCheckParameter1a;
        }
        *(_DWORD *)(v80 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v80 + 25) &= ~1u;
        *(_QWORD *)(v80 + 32) = 0LL;
        v81 = (v80 - *(_QWORD *)(v75 + 800)) / 96;
        if ( v101 == 1 )
          *(_BYTE *)(v75 + 792) |= 1 << v81;
        else
          _InterlockedOr8((volatile signed __int8 *)(v75 + 870), 1 << v81);
      }
      --*(_BYTE *)(v75 + 794);
      KiAbThreadRemoveBoosts(v75);
      v77 = BugCheckParameter1a->SpecialApcDisable++ == -1;
      if ( v77
        && ($C459BD0D405E8E46662177FB3D0A143F *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    v21 = v99;
    if ( v63 < 0 )
    {
      v21 = v99 + a4;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v21 )
  {
    v25 = 16LL * a4 + a3;
    if ( a4 )
      v26 = (unsigned __int16)a4;
    else
      v26 = (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v25) ^ HIDWORD(*(_QWORD *)v25));
    HIDWORD(v95) = v26 & 0xFF00FFFF | 0x10000;
    LODWORD(v95) = v21 << 16;
    *(_QWORD *)v25 = v95 ^ RtlpHpHeapGlobals ^ v25;
    v27 = v25 + 16LL * v21;
    *(_DWORD *)(v25 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ ((unsigned int)(v25 - a2) >> 12));
    if ( v27 < a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL) )
      *(_WORD *)(v27 + 4) = WORD2(v27) ^ WORD2(RtlpHpHeapGlobals) ^ v21;
    for ( i = 0; ; i = v30 )
    {
      v29 = a2 + 48;
      v100 = i;
      v30 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v25 ^ *(_DWORD *)v25) >> 16;
      v96 = v30;
      v31 = (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v25 ^ *(_QWORD *)v25) >> 32);
      *(_BYTE *)(v25 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v25);
      if ( v31 )
      {
        v97 = v25 - 16LL * v31;
        v32 = RtlpHpHeapGlobals ^ *(_QWORD *)v97 ^ v97;
        if ( (v32 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v25 - 16LL * v31, v29);
          v25 = v97;
          v29 = a2 + 48;
          i = v100;
          v30 += WORD1(v32);
        }
      }
      v33 = *(_WORD *)(a2 + 32);
      v34 = v25 + 16LL * v30;
      if ( v34 < v29 + 16LL * v33 )
      {
        v35 = RtlpHpHeapGlobals ^ v34 ^ *(_QWORD *)v34;
        if ( (v35 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v34, v29);
          v33 = *(_WORD *)(a2 + 32);
          v29 = a2 + 48;
          i = v100;
          v30 += WORD1(v35);
        }
      }
      v36 = v33;
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v37 = v25 + 16LL * v30;
        if ( v37 < v29 + 16LL * v33 )
        {
          v38 = RtlpHpHeapGlobals ^ v37 ^ *(_QWORD *)v37;
          if ( (v38 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v37, v29);
            v36 = *(_WORD *)(a2 + 32);
            v29 = a2 + 48;
            i = v100;
            v30 += WORD1(v38);
          }
        }
      }
      if ( v96 != v30 )
      {
        v73 = v25 + 16LL * v30;
        *(_WORD *)(v25 + 2) = WORD1(RtlpHpHeapGlobals) ^ v30 ^ WORD1(v25);
        v36 = *(_WORD *)(a2 + 32);
        if ( v73 < v29 + 16LL * v36 )
        {
          *(_WORD *)(v73 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v73) ^ v30;
          v36 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v30 == v36 )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2);
        return a4;
      }
      if ( v30 <= i )
        break;
      v39 = (v25 - a2 + 4127) & 0xFFFFF000;
      v40 = (v25 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) - a2) & 0xFFFFF000;
      if ( v39 < v40 )
      {
        v41 = v40 - v39;
        v42 = *(_QWORD *)(a2 + 16) & (-1LL << (v39 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v40 - 1) >> 12)));
      }
      else
      {
        v41 = 0;
        v42 = 0LL;
      }
      if ( v41 < 0x1000 )
        break;
      if ( !v42 )
        break;
      v71 = (0x101010101010101LL
           * ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v98 = v71;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v72 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v72 <= 8 )
          v72 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v71 <= v72 )
          break;
      }
      *(_BYTE *)(v25 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v25) ^ 1;
      *(_DWORD *)(v25 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ ((unsigned int)(v25 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) == 0 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a6);
        LODWORD(v71) = v98;
      }
      RtlpHpVsSubsegmentCommitPages(a1, a2, v42, v71, 0);
      if ( (a5 & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a6);
      *(_DWORD *)(v25 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0
      && ((v25 + 32) & 0xFFF) != 0
      && ((v25 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v25 < 16
                                                      * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) )
    {
      v67 = ((v25 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
      v68 = (__int64)(v67 - v25) >> 4;
      v69 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) - v68;
      *(_WORD *)(v25 + 2) = WORD1(RtlpHpHeapGlobals) ^ v68 ^ WORD1(v25);
      *(_OWORD *)v67 = 0LL;
      *(_OWORD *)(v67 + 16) = 0LL;
      *(_WORD *)(v67 + 2) = v69;
      v70 = v67 + 16LL * v69;
      *(_WORD *)(v67 + 4) = v68;
      *(_QWORD *)v67 ^= RtlpHpHeapGlobals ^ v67;
      if ( v70 < a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL) )
        *(_WORD *)(v70 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v70) ^ v69;
      RtlpHpVsFreeChunkInsert(a1, a2, v67);
    }
    v43 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2));
    v44 = (v25 - a2 + 4127) & 0xFFFFF000;
    v45 = ((v25 & 0xFFF) + v43 + 4095) >> 12;
    v46 = (unsigned __int64)(v43 + 4095) >> 12;
    v47 = (v43 + v25 - a2) & 0xFFFFF000;
    if ( v44 < v47 )
    {
      v48 = v47 - v44;
      v49 = *(_QWORD *)(a2 + 16) & (-1LL << (v44 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v47 - 1) >> 12)));
    }
    else
    {
      v48 = 0;
      v49 = 0LL;
    }
    v50 = v49 - ((v49 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v50 & 0x3333333333333333LL)
                                            + ((v50 >> 2) & 0x3333333333333333LL)
                                            + (((v50 & 0x3333333333333333LL) + ((v50 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v25 = RtlpHpHeapGlobals ^ v25 ^ (v45
                                             + (v48 >> 12)
                                             - v46
                                             - ((0x101010101010101LL
                                               * (((v50 & 0x3333333333333333LL)
                                                 + ((v50 >> 2) & 0x3333333333333333LL)
                                                 + (((v50 & 0x3333333333333333LL) + ((v50 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v51 = *(_QWORD *)(a1 + 24);
    if ( (v51 & 1) != 0 )
    {
      v55 = *(_QWORD *)(a1 + 16);
      if ( v55 )
        v11 = v55 ^ (a1 + 16);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
    }
    v52 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v25 ^ (unsigned int)v25) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v11 - 8) ^ *(_DWORD *)(v11 - 8)) )
        {
          v53 = *(_QWORD *)v11;
          if ( (v51 & 1) != 0 )
          {
            if ( !v53 )
              goto LABEL_57;
            v53 ^= v11;
          }
          if ( !v53 )
          {
LABEL_57:
            v52 = 0;
            break;
          }
        }
        else
        {
          v53 = *(_QWORD *)(v11 + 8);
          if ( (v51 & 1) != 0 )
          {
            if ( !v53 )
              goto LABEL_50;
            v53 ^= v11;
          }
          if ( !v53 )
          {
LABEL_50:
            v52 = 1;
            break;
          }
        }
        v11 = v53;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v11, v52, (PRTL_BALANCED_NODE)(v25 + 8));
  }
  return a4;
}
