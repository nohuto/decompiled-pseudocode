/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140294160
 * Callers:
 *     CcUnmapVacb @ 0x140637A98 (CcUnmapVacb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x140290314 (MiLockWorkingSetOptimal.c)
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1402955F8 (MiRemoveViewsFromSection.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402ACA70 (MiDecrementAndInsertStandbyPages.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DAED0 (MiRebuildPageTableLeafAges.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiLockSetPfnPriority @ 0x1402E1E0C (MiLockSetPfnPriority.c)
 *     MiRemoveWsleList @ 0x1402E4B70 (MiRemoveWsleList.c)
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140314278 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbp
  int v9; // r13d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *SystemCacheReverseMap; // rcx
  _DWORD *v14; // r9
  ULONG_PTR v15; // rax
  unsigned int *MmInternal; // rbx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  ULONG_PTR v19; // rbp
  _BYTE *v20; // rcx
  size_t v21; // r8
  __int64 v22; // rdi
  __int64 v23; // r12
  unsigned __int64 Flink; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  char v27; // cl
  unsigned int v28; // r9d
  char v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  size_t v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  char v42; // bp
  __int64 v43; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v45; // rsi
  __int64 v46; // rdx
  int v47; // r14d
  __int64 v48; // r13
  unsigned int v49; // r12d
  __int64 v50; // rdi
  int v51; // ecx
  unsigned __int8 v52; // bl
  ULONG_PTR v53; // rsi
  __int64 v54; // rbx
  unsigned __int8 v55; // bl
  __int64 v56; // r12
  __int64 v57; // rbp
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rbp
  unsigned __int64 v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // ecx
  __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // r15
  __int64 v86; // rbx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r14
  __int64 v90; // rbp
  signed __int8 v91; // al
  __int64 v92; // rax
  __int64 v93; // r9
  __int64 v94; // rbp
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // r8
  __int64 v97; // rcx
  unsigned __int64 v98; // r8
  unsigned __int64 v99; // rcx
  char WsleContents; // si
  unsigned __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  bool v107; // zf
  _BYTE *v108; // rax
  char v109; // al
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r11
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // r10
  __int64 v115; // r8
  __int64 v116; // rax
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  struct _LIST_ENTRY *v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdx
  struct _LIST_ENTRY *v123; // rax
  __int64 v124; // rax
  char v125; // r8^7
  struct _LIST_ENTRY *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rcx
  unsigned __int64 v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  struct _LIST_ENTRY *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v140; // eax
  _DWORD *v141; // r9
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rdx
  signed __int32 v144[8]; // [rsp+0h] [rbp-118h] BYREF
  char v145; // [rsp+30h] [rbp-E8h]
  int v146; // [rsp+34h] [rbp-E4h]
  int v147; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v149; // [rsp+48h] [rbp-D0h] BYREF
  int v150; // [rsp+50h] [rbp-C8h]
  int v151; // [rsp+54h] [rbp-C4h]
  int v152; // [rsp+58h] [rbp-C0h]
  __int64 v153; // [rsp+60h] [rbp-B8h]
  int v154; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v155; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v156; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v157; // [rsp+80h] [rbp-98h]
  _BYTE *v158; // [rsp+88h] [rbp-90h]
  _QWORD *v159; // [rsp+90h] [rbp-88h]
  __int64 v160; // [rsp+98h] [rbp-80h]
  unsigned __int64 v161; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v162; // [rsp+A8h] [rbp-70h]
  __int64 v163; // [rsp+B0h] [rbp-68h]
  __int64 v164; // [rsp+B8h] [rbp-60h]
  _QWORD *v165; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v166; // [rsp+120h] [rbp+8h]
  unsigned __int8 v169; // [rsp+138h] [rbp+20h] BYREF

  v166 = BugCheckParameter3;
  v169 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v165 = (_QWORD *)v5;
  v161 = v5 + 512;
  v163 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v8 = MiSectionControlArea(BugCheckParameter4, v6, v7);
  v164 = v8;
  v9 = 0;
  v150 = 0;
  v10 = *(_QWORD *)(v8 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v146 = 0;
  v11 = *(_WORD *)(v8 + 60) & 0x3FF;
  v156 = v10;
  v147 = 0;
  v152 = 0;
  v157 = 0LL;
  v160 = *(_QWORD *)(qword_140C4E648 + 8 * v11);
  v151 = 2;
  v12 = v160 + 7232;
  v153 = v160 + 7232;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v4);
  v159 = SystemCacheReverseMap;
  v15 = SystemCacheReverseMap[3];
  v155 = v15;
  if ( v15 )
  {
    if ( (v15 & 1) != 0 )
    {
      v15 &= ~1uLL;
      v151 = 4;
      v155 = v15;
      SystemCacheReverseMap[3] = v15;
    }
    if ( *(_QWORD *)v15 != v8 )
      KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v162 = MiLockWorkingSetOptimal(v12, v5, &v169, v14);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v17 = *(_QWORD *)MmInternal;
  v18 = MmInternal[6];
  *(_DWORD *)(v17 + 12) = 0;
  *(_DWORD *)v17 = 0;
  *(_WORD *)(v17 + 4) = 0;
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_DWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v17 + 24) = 0LL;
  v19 = *((_QWORD *)MmInternal + 1);
  v20 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v21 = 8LL * MmInternal[6];
  BugCheckParameter2 = v19;
  v158 = v20;
  memset(v20, 0, v21);
  v22 = *(_QWORD *)MmInternal;
  v23 = 0LL;
  Flink = 0xFFFFF6FB7DBED7F8uLL;
  *(_BYTE *)(*(_QWORD *)MmInternal + 4LL) |= 4u;
  while ( 1 )
  {
    v25 = 1LL;
    v26 = v4;
    if ( *(_DWORD *)v22 != 1 )
    {
      v27 = *(_BYTE *)(v22 + 4);
      if ( (v27 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v22 + 4) = v27 | 8;
    }
    v28 = *(_DWORD *)(v22 + 12);
    if ( v28 )
    {
      v29 = *(_BYTE *)(v22 + 4) & 4;
      if ( !v29 )
      {
        v112 = v22 + 8LL * (v28 - 1);
        v113 = *(_QWORD *)(v112 + 24);
        if ( (v113 & 0xC00) == 0 )
        {
          v114 = *(_QWORD *)(v112 + 24) & 0x3FFLL;
          if ( (v113 & 0xFFFFFFFFFFFFF000uLL) + ((v114 + 1) << 12) == v4 && v114 + 1 >= v114 )
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
            if ( v114 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(v22 + 16);
              *(_QWORD *)(v112 + 24) = ((unsigned __int16)v113 ^ (unsigned __int16)(v113 + 1)) & 0x3FF ^ v113;
              goto LABEL_18;
            }
          }
          else
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
      }
      if ( !v29 )
      {
        v115 = v22 + 8LL * (v28 - 1);
        v116 = *(_QWORD *)(v115 + 24);
        if ( (v116 & 0xC00) == 0 )
        {
          if ( (v116 & 0xFFFFFFFFFFFFF000uLL) == v4 + 4096
            && (v117 = *(_QWORD *)(v115 + 24) & 0x3FFLL, v117 + 1 >= v117) )
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
            if ( v117 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(v22 + 16);
              *(_QWORD *)(v115 + 24) = ((unsigned __int16)(v116 - 4096) ^ (unsigned __int16)(v116 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v116 - 4096);
              goto LABEL_18;
            }
          }
          else
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
      }
    }
    if ( v28 >= *(_DWORD *)(v22 + 8) )
    {
      *(_BYTE *)(v22 + 5) = 1;
    }
    else
    {
      while ( 1 )
      {
        v30 = (unsigned __int64)(v25 - 1) > 0x3FF ? 1024LL : v25;
        v31 = v26 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x3FF;
        v25 -= v30;
        v26 += v30 << 12;
        *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)(v22 + 12))++ + 24) = v31;
        v32 = *(unsigned int *)(v22 + 12);
        *(_QWORD *)(v22 + 16) += v30;
        if ( (_DWORD)v32 == *(_DWORD *)(v22 + 8) && (*(_BYTE *)(v22 + 4) & 4) == 0 )
        {
          qsort((void *)(v22 + 24), v32, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v22);
          v118 = *(unsigned int *)(v22 + 12);
          if ( (_DWORD)v118 == *(_DWORD *)(v22 + 8) )
            break;
        }
        if ( !v25 )
        {
          Flink = 0xFFFFF6FB7DBED7F8uLL;
          goto LABEL_18;
        }
      }
      Flink = 0xFFFFF6FB7DBED7F8uLL;
      if ( v25 )
      {
        *(_BYTE *)(v22 + 5) = 1;
        *(_QWORD *)(v22 + 16) = v118;
      }
    }
LABEL_18:
    v33 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v119 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
        Flink = v33 | 0x20;
        if ( (v119 & 0x20) == 0 )
          Flink = *(_QWORD *)v5;
        v33 = Flink;
        if ( (v119 & 0x42) != 0 )
          v33 = Flink | 0x42;
      }
    }
    v149 = v33;
    *(_QWORD *)(v19 + 8 * v23) = v33;
    if ( (v33 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v149, Flink)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v120 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v120 )
        {
          v121 = *((_QWORD *)&v120->Flink + (((unsigned __int64)&v149 >> 3) & 0x1FF));
          v122 = v33 | 0x20;
          if ( (v121 & 0x20) == 0 )
            v122 = v33;
          v33 = v122;
          if ( (v121 & 0x42) != 0 )
            v33 = v122 | 0x42;
        }
      }
      v94 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E828 )
      {
        v95 = (__int64)(v5 << 25) >> 16;
        if ( v95 >= 0xFFFFF68000000000uLL && v95 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_115;
        v96 = ((v95 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v97 = *(_QWORD *)v96;
        if ( v96 >= 0xFFFFF6FB7DBED000uLL
          && v96 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v97 & 1) != 0
          && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
        {
          v123 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v123 )
          {
            v124 = *((_QWORD *)&v123->Flink + ((v96 >> 3) & 0x1FF));
            v125 = HIBYTE(*(_QWORD *)v96);
            if ( (v124 & 0x20) == 0 )
              v125 = HIBYTE(v97);
            HIBYTE(v97) = v125;
            if ( (v124 & 0x42) != 0 )
              HIBYTE(v97) = v125;
          }
        }
        if ( (HIBYTE(v97) & 0xF) != 7 )
        {
LABEL_115:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v153, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v94 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v109 = *(_BYTE *)(v94 + 35);
        if ( ((v109 & 8) != 0 || (v109 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v94) <= 5 )
          MiLockSetPfnPriority(v110, 2LL);
      }
      v98 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v99 = *(_QWORD *)v98;
      if ( v98 >= 0xFFFFF6FB7DBED000uLL
        && v98 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v99 & 1) != 0
        && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
      {
        v126 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v126 )
        {
          v127 = *((_QWORD *)&v126->Flink + ((v98 >> 3) & 0x1FF));
          v98 = v99 | 0x20;
          if ( (v127 & 0x20) == 0 )
            v98 = v99;
          v99 = v98;
          if ( (v127 & 0x42) != 0 )
            v99 = v98 | 0x42;
        }
      }
      WsleContents = HIBYTE(v99) & 0xF | (16 * ((v99 >> 60) & 7));
      if ( (HIBYTE(v99) & 0xF) == 8 )
      {
        MiUnlockWsle(v153, v4, v94);
        WsleContents = MiGetWsleContents(v128, v4);
      }
      v101 = ZeroPte;
      v102 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v102, v98, v93) )
          v102 |= 0x20uLL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v102 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v102 & 0x20) != 0 )
      {
        if ( !(unsigned int)MiPteInShadowRange(v5, v102) )
          goto LABEL_101;
        if ( (unsigned int)MiPteHasShadow(v104, v103, v105, v106) )
        {
          if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
            v101 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v101;
          MiWritePteShadow(v5, v101);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v101 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_101:
          *(_QWORD *)v5 = v101;
        }
LABEL_102:
        v152 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_102;
      }
      v107 = v156 == 0;
      v108 = v158;
      v158[8 * v23] = WsleContents;
      v108[8 * v23 + 1] = 1;
      if ( !v107 )
        v157 = *(_QWORD *)(v94 + 8) | 0x8000000000000000uLL;
      v19 = BugCheckParameter2;
      v147 = v9 + 1;
      goto LABEL_28;
    }
    if ( (v33 & 0x400) == 0 )
      break;
    if ( v156 )
    {
      v34 = v33;
      if ( qword_140C4DF40 && (v33 & 0x10) == 0 )
        v34 = v33 & ~qword_140C4DF40;
      v157 = v34 >> 16;
    }
    v35 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v5, Flink) )
    {
      if ( (unsigned int)MiPteHasShadow(v37, v36, v38, v39) )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v35 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v5 = v35;
        MiWritePteShadow(v5, v35);
        goto LABEL_28;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v35 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v35;
LABEL_28:
    ++v9;
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    v4 += 4096LL;
    v150 = v9;
    ++v23;
    v166 = v4;
    v5 += 8LL;
    if ( v5 >= v161 )
      goto LABEL_29;
  }
  v130 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v5, Flink) )
  {
LABEL_226:
    *(_QWORD *)v5 = v130;
    goto LABEL_29;
  }
  if ( !(unsigned int)MiPteHasShadow(v132, v131, v133, v134) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v130 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_226;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v130 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v130;
  MiWritePteShadow(v5, v130);
LABEL_29:
  v40 = v153;
  if ( v147 )
  {
    v41 = MiRemoveWsleList(v153, v22, v158, v147);
    if ( v41 )
      MiRebuildPageTableLeafAges(0LL, v41 << 25 >> 16 << 25 >> 16);
  }
  if ( v159[2] )
  {
    v42 = 1;
    v159[2] = 0LL;
  }
  else
  {
    v42 = 0;
  }
  v145 = v42;
  MiUnlockPageTableInternal(v40, v162);
  MiUnlockWorkingSetShared(v40, 2u);
  _InterlockedOr(v144, 0);
  v45 = v150;
  v46 = 0LL;
  v47 = KiTbFlushTimeStamp;
  v48 = 0LL;
  v147 = KiTbFlushTimeStamp;
  v49 = 0;
  v50 = 0LL;
  if ( v150 > 0 )
  {
    SchedulerAssist = (_DWORD *)BugCheckParameter2;
    v51 = 0;
    while ( 2 )
    {
      if ( (SchedulerAssist[2 * v50] & 1) == 0 )
        goto LABEL_37;
      ++v48;
      v84 = *(_QWORD *)&SchedulerAssist[2 * v146];
      v85 = (unsigned __int64)&SchedulerAssist[2 * v146];
      v86 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v85, 0LL)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v84 & 1) != 0
        && ((v84 & 0x20) == 0 || (v84 & 0x42) == 0) )
      {
        v135 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v135 )
        {
          v136 = v84 | 0x20;
          v137 = *((_QWORD *)&v135->Flink + ((v85 >> 3) & 0x1FF));
          if ( (v137 & 0x20) == 0 )
            v136 = v84;
          v84 = v136;
          if ( (v137 & 0x42) != 0 )
            v84 = v136 | 0x42;
        }
      }
      v89 = (v84 >> 12) & 0xFFFFFFFFFLL;
      v90 = 48 * v89 - 0x58000000000LL;
      v91 = _interlockedbittestandset64((volatile signed __int32 *)(v90 + 24), 0x3FuLL);
      if ( v49 )
      {
        if ( v91 )
        {
          LOBYTE(v87) = 2;
          MiDecrementAndInsertStandbyPages(BugCheckParameter2, v49, v87);
          v46 = 0LL;
          SchedulerAssist = (_DWORD *)BugCheckParameter2;
          v51 = v146 - 1;
          --v50;
          v49 = 0;
          --v48;
          goto LABEL_37;
        }
LABEL_76:
        v46 = 0LL;
      }
      else
      {
        v46 = 0LL;
        v154 = 0;
        if ( v91 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v154, v46, v87, v88);
            while ( *(__int64 *)(v90 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v90 + 24), 0x3FuLL) );
          goto LABEL_76;
        }
      }
      SchedulerAssist = (_DWORD *)BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v50) & 0x42) != 0 )
      {
        v111 = MiCaptureDirtyBitToPfn(48 * v89 - 0x58000000000LL);
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        v86 = v111;
LABEL_122:
        if ( v49 )
        {
          LOBYTE(v43) = 17;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v49, v43);
          v49 = 0;
        }
        MiDecrementShareCount(48 * v89 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v86 )
          MiReleasePageFileInfo(v160, v86, 0LL);
        v51 = v146;
        v46 = 0LL;
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        goto LABEL_37;
      }
      v43 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v90 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v90 + 32) != 1
        || (*(_QWORD *)(v90 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v90 + 35) & 0x40) != 0
        || (*(_BYTE *)(v90 + 34) & 0x10) != 0 )
      {
        goto LABEL_122;
      }
      v51 = v146;
      v92 = v49++;
      *(_QWORD *)(BugCheckParameter2 + 8 * v92) = v90;
LABEL_37:
      ++v51;
      ++v50;
      v146 = v51;
      if ( v50 >= v45 )
      {
        if ( v49 )
        {
          LOBYTE(v43) = 2;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v49, v43);
        }
        v4 = v166;
        v47 = v147;
        v42 = v145;
        break;
      }
      continue;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v52 = v169;
    if ( v169 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v52 = v169;
      v46 = -1LL << (v169 + 1);
      v140 = ~(unsigned __int16)v46;
      v107 = (v140 & SchedulerAssist[5]) == 0;
      v43 = (unsigned int)v140 & SchedulerAssist[5];
      SchedulerAssist[5] = v43;
      if ( v107 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v52 = v169;
  }
  __writecr8(v52);
  v53 = v155;
  if ( v42 == 1 )
    MiManageSubsectionView((__int64 *)v155, v159, v151);
  if ( v48 )
  {
    v54 = v163;
    MiLockPageInline(v163, v46, v43, SchedulerAssist);
    *(_QWORD *)(v54 + 24) ^= (*(_QWORD *)(v54 + 24) ^ (*(_QWORD *)(v54 + 24) - v48)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v55 = v169;
  }
  else
  {
    v55 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
    {
      v141 = KeGetCurrentPrcb()->SchedulerAssist;
      v141[5] |= ~((unsigned __int8)(1LL << (v55 + 1)) - 1) & 4;
    }
    v169 = v55;
  }
  v56 = 0LL;
  if ( !v156 )
    v53 = 0LL;
  v57 = v164;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v164 + 72));
  if ( v53 )
  {
    v58 = v157;
    while ( 1 )
    {
      v59 = MiRemoveViewsFromSection(v53);
      v60 = *(_QWORD *)(v53 + 8);
      v56 += v59;
      if ( v58 >= v60 && v58 < v60 + 8LL * *(unsigned int *)(v53 + 44) )
        break;
      v53 = *(_QWORD *)(v53 + 16);
      if ( !v53 )
        KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, v4, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v57 + 40);
  --*(_DWORD *)(v57 + 88);
  MiCheckControlArea(v57, v55);
  if ( v56 )
    MiReturnCrossPartitionSectionCharges(v160, 1LL, v56);
  v61 = MiSwizzleInvalidPte((unsigned __int64)(v47 & 0xFFFFF) << 28);
  v62 = v165;
  v63 = v61;
  v149 = v61;
  v64 = v61;
  if ( (unsigned int)MiPteInShadowRange(v165 + 2, v65) )
  {
    if ( !(unsigned int)MiPteHasShadow(v67, v66, v68, v69) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v63 & 1) != 0 )
      {
        v64 |= 0x8000000000000000uLL;
      }
      goto LABEL_56;
    }
    v142 = v63;
    if ( !HIBYTE(word_140C4E008) && (v63 & 1) != 0 )
      v142 = v63 | 0x8000000000000000uLL;
    v62[2] = v142;
    MiWritePteShadow(v62 + 2, v142);
  }
  else
  {
LABEL_56:
    v62[2] = v64;
  }
  v70 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v62 + 1, v66) )
  {
    if ( !(unsigned int)MiPteHasShadow(v72, v71, v73, v74) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v70 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_58;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v70 = ZeroPte | 0x8000000000000000uLL;
    v62[1] = v70;
    MiWritePteShadow(v62 + 1, v70);
  }
  else
  {
LABEL_58:
    v62[1] = v70;
  }
  v75 = v149;
  if ( v152 == 1 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v149 & 0x10) != 0 )
        v75 = v149 & 0xFFFFFFEF;
      else
        v75 = v149 & ~(_DWORD)qword_140C4DF40;
    }
    v76 = v75 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DF40 )
    {
      if ( (v149 & 0x10) != 0 )
        v75 = v149 & 0xFFFFFFEF;
      else
        v75 = v149 & ~(_DWORD)qword_140C4DF40;
    }
    v76 = v75 & 0xFFFFFFF;
  }
  v149 = MiSwizzleInvalidPte(v76);
  v77 = v149;
  v78 = v149;
  if ( (unsigned int)MiPteInShadowRange(v62 + 3, v79) )
  {
    if ( !(unsigned int)MiPteHasShadow(v81, v80, v82, v83) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v77 & 1) != 0 )
      {
        v78 |= 0x8000000000000000uLL;
      }
      goto LABEL_65;
    }
    v143 = v77;
    if ( !HIBYTE(word_140C4E008) && (v77 & 1) != 0 )
      v143 = v77 | 0x8000000000000000uLL;
    v62[3] = v143;
    MiWritePteShadow(v62 + 3, v143);
  }
  else
  {
LABEL_65:
    v62[3] = v78;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView((unsigned __int64)v62);
}
