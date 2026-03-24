/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140297B10
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14053E170 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x14063A770 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1406FAC44 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020F840 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiGetVadMandatoryPageSize @ 0x140298600 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     MiUnlockVadCore @ 0x14030A4F0 (MiUnlockVadCore.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036BB60 (MiPreUnlockWorkingSetShared.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5CFC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _DWORD *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  _KPROCESS *Process; // rcx
  __int64 v13; // r12
  __int64 *i; // rcx
  volatile signed __int32 *v15; // r13
  unsigned __int8 v16; // al
  LONG *v17; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v20; // rcx
  signed __int32 v21; // ett
  __int64 v22; // rdi
  __int64 v23; // r13
  int v24; // eax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  char *AnyMultiplexedVm; // rdi
  int v28; // eax
  __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbx
  unsigned __int64 VadMandatoryPageSize; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // cl
  signed __int32 v43; // eax
  __int64 v44; // r15
  signed __int32 v45; // ett
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rbx
  _BYTE *v48; // r15
  char v49; // al
  int v50; // r15d
  unsigned __int64 v51; // r9
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  __int64 v54; // rdx
  int v55; // ecx
  unsigned __int8 v56; // bl
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  __int64 result; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // ebx
  unsigned __int64 v63; // rsi
  __int64 v64; // rbx
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  unsigned int v70; // r10d
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // rbx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  _DWORD *v84; // r9
  _DWORD *v85; // rcx
  _DWORD *SchedulerAssist; // r9
  int v87; // eax
  int v88; // eax
  unsigned __int64 v89; // rsi
  __int64 v90; // rcx
  unsigned __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 LeafVa; // rax
  __int64 v95; // rcx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v97; // rax
  struct _LIST_ENTRY *v98; // r8
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  struct _KPRCB *v102; // rcx
  _DWORD *v103; // rdx
  bool v104; // zf
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r9
  _DWORD *v107; // r8
  int v108; // eax
  int v109; // eax
  unsigned __int8 v110; // al
  _DWORD *v111; // r8
  int v112; // eax
  int v114; // [rsp+20h] [rbp-E0h]
  int v115; // [rsp+24h] [rbp-DCh]
  __int64 v116; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v117; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v118; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v119; // [rsp+40h] [rbp-C0h]
  int v120; // [rsp+48h] [rbp-B8h] BYREF
  int v121; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v122; // [rsp+50h] [rbp-B0h]
  __int64 v123; // [rsp+58h] [rbp-A8h]
  __int64 v124; // [rsp+60h] [rbp-A0h]
  int v125; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 *v126; // [rsp+70h] [rbp-90h]
  __int64 v127; // [rsp+78h] [rbp-88h]
  __int128 v128; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v129; // [rsp+90h] [rbp-70h]
  __int64 v130; // [rsp+98h] [rbp-68h]
  _QWORD v131[22]; // [rsp+A0h] [rbp-60h] BYREF
  int v132; // [rsp+150h] [rbp+50h] BYREF
  __int16 v133; // [rsp+154h] [rbp+54h]
  __int16 v134; // [rsp+156h] [rbp+56h]
  __int64 v135; // [rsp+158h] [rbp+58h]
  __int64 v136; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v124 = a3;
  v134 = 0;
  v127 = 0LL;
  memset(&Base[1], 0, 0x98uLL);
  v116 = 0LL;
  v9 = 0LL;
  v115 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v119 = v11;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v129 = Process[1].ActiveProcessorsPadding[8];
  v122 = &Process[1].ActiveProcessorsPadding[6];
  v121 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(a3 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v126 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v126 = 0LL;
  }
  v133 = 0;
  v136 = 0LL;
  Base[0] = 0LL;
  v15 = &dword_140C4F780;
  v135 = 20LL;
  v132 = 1;
  v16 = *(_BYTE *)(v13 + 184) & 7;
  if ( v16 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v117 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  else
  {
    if ( v16 == 2 )
      v17 = &dword_140C4F780;
    else
      v17 = (LONG *)(v13 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = KeGetCurrentPrcb()->SchedulerAssist;
      v8[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, CurrentIrql, 0xFFFFF68000000000uLL, v8);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v87 = v20[6];
          v20[6] = v87 + 1;
          if ( v87 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v17);
      v21 = *v17 & 0x7FFFFFFF;
      if ( v21 != _InterlockedCompareExchange(v17, v21 + 1, v21) )
      {
        v85 = CurrentPrcb->SchedulerAssist;
        if ( v85 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v88 = v85[6] - 1;
            v85[6] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v17, CurrentIrql);
      }
      v9 = 0LL;
    }
    if ( v17[1] )
      _InterlockedExchange(v17 + 1, 0);
    v117 = CurrentIrql;
  }
  if ( v10 > v11 )
    goto LABEL_70;
  v22 = 0LL;
  v123 = 0LL;
  v23 = (__int64)(v11 << 25) >> 16;
  v24 = a4 & 2;
  v130 = v23;
  v114 = v24;
  while ( 2 )
  {
    if ( v9 )
    {
      MiFlushTbList(&v132);
      MiUnlockPageTableInternal(v13, v9);
      v116 = 0LL;
      if ( MiWorkingSetIsContended(v13) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v13, CurrentIrql);
        MiLockWorkingSetShared(v13, v82, v83, v84);
      }
      v24 = v114;
    }
    if ( v24 )
      _InterlockedIncrement64((volatile signed __int64 *)(v129 + 616));
    v128 = 0LL;
    memset((char *)v131 + 2, 0, 0xAEuLL);
    LOWORD(v131[0]) = 2273;
    v25 = (__int64)((v10 << 25) - v22) >> 16;
    v26 = v25;
    if ( v25 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v26 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v26 = (__int64)((v26 << 25) - v22) >> 16;
      }
      while ( v26 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    if ( v26 < 0xFFFF800000000000uLL || v26 >= qword_140C4FB38 && v26 <= qword_140C4E368 )
      AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v28 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v25, 0);
    if ( v28 )
    {
      v30 = v28 - 1;
      LODWORD(v128) = v28 - 1;
      v31 = 0xFFFFF68000000000uLL;
      v32 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v128 + 1) = v32;
    }
    else
    {
      LOWORD(v131[0]) |= 4u;
      v131[21] = &v128;
      v131[2] = 0LL;
      v131[3] = AnyMultiplexedVm;
      BYTE2(v131[0]) = BYTE2(v131[0]) & 0xE3 | 4;
      v131[20] = MiGetNextPageTableTail;
      BYTE6(v131[0]) = v117;
      v131[4] = v25;
      v131[5] = v23;
      MiWalkPageTables((__int64)v131);
      v30 = v128;
      v32 = *((_QWORD *)&v128 + 1);
      v31 = 0xFFFFF68000000000uLL;
    }
    v33 = v32;
    if ( v32 )
    {
      v29 = 0x7FFFFFFFF8LL;
      v116 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v30 )
      {
        v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v89 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v30 > 1 )
        {
          v90 = v30 - 1;
          do
          {
            v33 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v89 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v90;
          }
          while ( v90 );
        }
        v91 = v33 + 8;
        v116 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v33 + 8) & 0xFFF) != 0 )
        {
          do
          {
            if ( v91 > v89 )
              break;
            v92 = MI_READ_PTE_LOCK_FREE(v91);
            v127 = v92;
            if ( (v92 & 1) == 0 )
              break;
            if ( (v92 & 0x80u) == 0LL )
              break;
            v91 += 8LL;
          }
          while ( (v91 & 0xFFF) != 0 );
          v31 = 0xFFFFF68000000000uLL;
        }
        v34 = v91 - 8;
      }
      else
      {
        v34 = (v32 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v34 > v11 )
          v34 = v11;
      }
    }
    else
    {
      v34 = v11;
    }
    if ( !v121 )
      goto LABEL_53;
    v115 = 1;
    if ( v10 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v10 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v10 = (__int64)((v10 << 25) - v123) >> 16;
      }
      while ( v10 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    v35 = (v10 >> 12) - (*(unsigned int *)(v124 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v124 + 32) << 32));
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v124);
    if ( VadMandatoryPageSize != 1 )
    {
      v31 = v35 % VadMandatoryPageSize;
      v35 /= VadMandatoryPageSize;
    }
    v39 = v34 + 8;
    if ( v34 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v39 = (__int64)((v39 << 25) - v37) >> 16;
      }
      while ( v39 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
    }
    if ( v39 > (((*(unsigned int *)(v38 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v38 + 33) << 32)) << 12) | 0xFFF) )
    {
      v40 = *v126;
    }
    else
    {
      v40 = (v39 >> 12) - v29;
      if ( VadMandatoryPageSize != 1 )
      {
        v31 = v40 % VadMandatoryPageSize;
        v40 /= VadMandatoryPageSize;
      }
    }
    v41 = v40 - v35;
    v120 = 0;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      VadMandatoryPageSize = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      v31 = (-1LL << (v42 + 1)) & 4;
      v29 = (unsigned int)v31 | *(_DWORD *)(VadMandatoryPageSize + 20);
      *(_DWORD *)(VadMandatoryPageSize + 20) = v29;
    }
    v43 = *(_DWORD *)(v38 + 48);
    v44 = v38;
    do
    {
      while ( (v43 & 1) != 0 )
      {
        if ( (v43 & 2) != 0 )
        {
          v120 = 0;
          do
          {
            KeYieldProcessorEx(&v120, v31, v29, VadMandatoryPageSize);
            v43 = *(_DWORD *)(v44 + 48);
          }
          while ( (v43 & 1) != 0 );
        }
        else
        {
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 48), v43 | 2, v43);
        }
      }
      v45 = v43;
      v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 48), v43 & 0xFFFFFFFC | 1, v43);
    }
    while ( v45 != v43 );
    v11 = v119;
    if ( !v41 )
      goto LABEL_53;
    v31 = (unsigned __int64)v126;
    v46 = v35;
    v47 = v35 & 7;
    v48 = (_BYTE *)(v126[1] + (v46 >> 3));
    if ( v47 + v41 > 8 )
    {
      if ( (_DWORD)v47 )
      {
        *v48++ &= byte_14001E790[v47];
        v41 -= (unsigned int)(8 - v47);
      }
      if ( v41 > 8 )
      {
        memset(v48, 0, v41 >> 3);
        v48 += v41 >> 3;
        v41 &= 7u;
      }
      if ( !v41 )
        goto LABEL_52;
      v49 = byte_14001B528[v41];
    }
    else
    {
      v49 = ~(byte_14001E790[v41] << v47);
    }
    *v48 &= v49;
LABEL_52:
    v11 = v119;
LABEL_53:
    if ( !v32 )
      break;
    if ( v33 > v34 )
      goto LABEL_61;
    v50 = v121;
    v51 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v52 = *(_QWORD *)v33;
      if ( v33 >= v51 && v33 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        v31 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v31 + 912) != 1 && (v52 & 1) != 0 && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
        {
          v31 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v29 = *(_QWORD *)(v31 + 1928);
          if ( v29 )
          {
            v93 = *(_QWORD *)(v29 + 8 * ((v33 >> 3) & 0x1FF));
            v29 = v52 | 0x20;
            v31 = (unsigned __int8)v93;
            LOBYTE(v31) = v93 & 0x20;
            if ( (v93 & 0x20) == 0 )
              v29 = *(_QWORD *)v33;
            v52 = v29;
            if ( (v93 & 0x42) != 0 )
              v52 = v29 | 0x42;
          }
        }
      }
      v127 = v52;
      if ( (v52 & 1) != 0 && (v52 & 0x42) != 0 )
      {
        if ( v50
          || (!v114 || v52 >= 0)
          && (LeafVa = MiGetLeafVa(v33, v31, v29, v51), (MiGetWsleContents(v95, LeafVa) & 0xF) != 9) )
        {
          v60 = *(_QWORD *)v33;
          v61 = *(_QWORD *)v33;
          if ( v33 >= v51
            && v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v61 & 1) != 0
            && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v61 |= 0x20uLL;
              v97 = *((_QWORD *)&Flink->Flink + ((v33 >> 3) & 0x1FF));
              if ( (v97 & 0x20) == 0 )
                v61 = *(_QWORD *)v33;
              if ( (v97 & 0x42) != 0 )
                v61 |= 0x42uLL;
            }
            v51 = 0xFFFFF6FB7DBED000uLL;
          }
          v118 = v61 & 0xFFFFFFFFFFFFFFBDuLL;
          v62 = 0;
          v63 = (__int64)((v33 << 25) - v123) >> 16;
          if ( v63 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              ++v62;
              v63 = (__int64)((v63 << 25) - v123) >> 16;
            }
            while ( v63 >= 0xFFFFF68000000000uLL );
            v51 = 0xFFFFF6FB7DBED000uLL;
            if ( v62 )
            {
              MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v33, v118);
              MiInsertLargeTbFlushEntry(&v132, v62, v33);
              goto LABEL_99;
            }
          }
          if ( v33 >= v51
            && v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v98 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v98 )
            {
              v99 = *((_QWORD *)&v98->Flink + ((v33 >> 3) & 0x1FF));
              v100 = v60 | 0x20;
              if ( (v99 & 0x20) == 0 )
                v100 = v60;
              v60 = v100;
              if ( (v99 & 0x42) != 0 )
                v60 = v100 | 0x42;
            }
          }
          v64 = v118 ^ (v60 ^ v118) & 0xF00000000000000LL ^ (v60 ^ v118 ^ (v60 ^ v118) & 0xF00000000000000LL) & 0x7000000000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v33, v60) )
          {
            if ( (unsigned int)MiPteHasShadow(v66, v65, v67, v68) )
            {
              if ( !HIBYTE(word_140C4E008) && (v64 & 1) != 0 )
                v64 |= 0x8000000000000000uLL;
              *(_QWORD *)v33 = v64;
              MiWritePteShadow(v33, v64);
LABEL_92:
              v69 = 1LL;
              v70 = HIDWORD(v135);
              if ( !HIDWORD(v135) )
                goto LABEL_108;
              if ( (v133 & 4) == 0 )
              {
                v71 = Base[HIDWORD(v135) - 1];
                if ( (v71 & 0xC00) == 0 )
                {
                  v72 = Base[HIDWORD(v135) - 1] & 0x3FFLL;
                  v65 = (v71 & 0xFFFFFFFFFFFFF000uLL) + ((v72 + 1) << 12);
                  if ( v65 == v63 && v72 + 1 >= v72 && v72 + 1 <= 0x3FF )
                  {
                    ++v136;
                    Base[HIDWORD(v135) - 1] = ((unsigned __int16)v71 ^ (unsigned __int16)(v71 + 1)) & 0x3FF ^ v71;
                    goto LABEL_99;
                  }
                }
              }
              if ( (v133 & 4) != 0
                || (v79 = Base[HIDWORD(v135) - 1], (v79 & 0xC00) != 0)
                || (v65 = v79 & 0xFFFFFFFFFFFFF000uLL, (v79 & 0xFFFFFFFFFFFFF000uLL) != v63 + 4096)
                || (v81 = Base[HIDWORD(v135) - 1] & 0x3FFLL, v65 = v81 + 1, v81 + 1 > 0x3FF)
                || v65 <= v81 )
              {
LABEL_108:
                if ( HIDWORD(v135) >= (unsigned int)v135 )
                {
                  HIBYTE(v133) = 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v65 = (unsigned __int64)(v69 - 1) > 0x3FF ? 1024LL : v69;
                    v80 = v63 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v65 - 1) & 0x3FF;
                    v69 -= v65;
                    v63 += v65 << 12;
                    Base[v70] = v80;
                    v136 += v65;
                    v70 = HIDWORD(v135) + 1;
                    HIDWORD(v135) = v70;
                    if ( v70 == (_DWORD)v135 && (v133 & 4) == 0 )
                    {
                      qsort(Base, v70, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList(&v132);
                      v70 = HIDWORD(v135);
                      if ( HIDWORD(v135) == (_DWORD)v135 )
                        break;
                    }
                    if ( !v69 )
                      goto LABEL_99;
                  }
                  if ( v69 )
                  {
                    HIBYTE(v133) = 1;
                    v136 = HIDWORD(v135);
                  }
                }
                goto LABEL_99;
              }
              ++v136;
              Base[HIDWORD(v135) - 1] = ((unsigned __int16)(v79 - 4096) ^ (unsigned __int16)(v79 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v79 - 4096);
LABEL_99:
              v73 = v118;
              if ( (unsigned int)MiPteInShadowRange(&v118, v65)
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v73 & 1) != 0
                && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
              {
                v31 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v31 )
                {
                  v101 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)&v118 >> 3) & 0x1FF));
                  if ( (v101 & 0x20) != 0 )
                    v73 |= 0x20uLL;
                  if ( (v101 & 0x42) != 0 )
                    v73 |= 0x42uLL;
                }
                else
                {
                  v73 = v118;
                }
              }
              v76 = 0LL;
              v77 = 48 * ((v73 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v125 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v125, v31, v74, v75);
                while ( *(__int64 *)(v77 + 24) < 0 );
              }
              v29 = *(unsigned __int8 *)(v77 + 34);
              v78 = 0LL;
              if ( (v29 & 0x10) == 0 )
              {
                v31 = (unsigned __int8)v29;
                LOBYTE(v31) = !_bittest64((const signed __int64 *)(v77 + 16), 0xAu) & ~((unsigned __int8)v29 >> 3);
                if ( (v31 & 1) != 0 )
                {
                  v78 = MiCapturePageFileInfoInline(v77 + 16, 1LL, 0LL);
                  v29 = *(unsigned __int8 *)(v77 + 34);
                }
                LOBYTE(v29) = v29 | 0x10;
                *(_BYTE *)(v77 + 34) = v29;
                if ( v78 )
                {
                  v31 = (*(_QWORD *)(v77 + 40) >> 39) & 0x3FFLL;
                  v76 = *(_QWORD *)(qword_140C4E648 + 8 * v31);
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v78 )
                MiReleasePageFileInfo(v76, v78, 1LL);
              v51 = 0xFFFFF6FB7DBED000uLL;
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v64 & 1) != 0 )
            {
              v64 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v33 = v64;
          goto LABEL_92;
        }
      }
LABEL_59:
      v33 += 8LL;
    }
    while ( v33 <= v34 );
    v13 = (__int64)v122;
    v11 = v119;
LABEL_61:
    if ( v115 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v124 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v102 = KeGetCurrentPrcb();
          v103 = v102->SchedulerAssist;
          v104 = (v103[5] & 0xFFFF0007) == 0;
          v103[5] &= 0xFFFF0007;
          if ( v104 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
      __writecr8(2uLL);
      v115 = 0;
    }
    v53 = v33;
    if ( v33 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v53 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v53 = (__int64)((v53 << 25) - v123) >> 16;
      }
      while ( v53 >= 0xFFFFF68000000000uLL );
      v13 = (__int64)v122;
      v11 = v119;
    }
    v22 = v123;
    v10 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = v130;
    v24 = v114;
    if ( v10 <= v11 )
    {
      v9 = v116;
      CurrentIrql = v117;
      continue;
    }
    break;
  }
  v15 = &dword_140C4F780;
LABEL_70:
  MiFlushTbList(&v132);
  if ( v115 )
  {
    LOBYTE(v54) = 2;
    MiUnlockVadCore(v124, v54);
  }
  if ( v116 )
    MiUnlockPageTableInternal(v13, v116);
  if ( (*(_BYTE *)(v13 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v105 = KeGetCurrentIrql();
        if ( v105 <= 0xFu && v117 <= 0xFu && v105 >= 2u )
        {
          v106 = KeGetCurrentPrcb();
          v107 = v106->SchedulerAssist;
          v108 = ~(unsigned __int16)(-1LL << (v117 + 1));
          v104 = (v108 & v107[5]) == 0;
          v107[5] &= v108;
          if ( v104 )
            goto LABEL_271;
        }
      }
    }
  }
  else
  {
    v55 = *(_DWORD *)(v13 + 184);
    if ( (v55 & 0x8000000) != 0 || (v55 & 0x4000000) != 0 || (v55 & 0x10000000) != 0 )
    {
      v56 = v117;
      MiPreUnlockWorkingSetShared(v13, v117);
      LOBYTE(v55) = *(_BYTE *)(v13 + 184);
    }
    else
    {
      v56 = v117;
    }
    if ( (v55 & 7) != 2 )
      v15 = (volatile signed __int32 *)(v13 + 192);
    MiCheckProcessShadow(v13, 1u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
    }
    else
    {
      _InterlockedAnd(v15, 0xBFFFFFFF);
      _InterlockedDecrement(v15);
    }
    v57 = KeGetCurrentPrcb();
    v58 = v57->SchedulerAssist;
    if ( v58 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        v109 = v58[6] - 1;
        v58[6] = v109;
        if ( !v109 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v110 = KeGetCurrentIrql();
        if ( v110 <= 0xFu && v56 <= 0xFu && v110 >= 2u )
        {
          v106 = KeGetCurrentPrcb();
          v111 = v106->SchedulerAssist;
          v112 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v104 = (v112 & v111[5]) == 0;
          v111[5] &= v112;
          if ( v104 )
LABEL_271:
            KiRemoveSystemWorkPriorityKick(v106);
        }
      }
    }
  }
  result = v117;
  __writecr8(v117);
  return result;
}
