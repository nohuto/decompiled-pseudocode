/*
 * XREFs of MiStealPage @ 0x140334CB4
 * Callers:
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 * Callees:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiVaIsPageFileHash @ 0x14028367C (MiVaIsPageFileHash.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiHyperSpaceSize @ 0x1402925B8 (MiHyperSpaceSize.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiLockStealSystemVm @ 0x1402EB854 (MiLockStealSystemVm.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiWriteValidPteNewPage @ 0x14030E048 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiSmallVaStillMapsFrame @ 0x1403275F8 (MiSmallVaStillMapsFrame.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiReplacePageOfProtoPool @ 0x140331F6C (MiReplacePageOfProtoPool.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiUnlockStealVm @ 0x140336320 (MiUnlockStealVm.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     KeSwapDirectoryTableBase @ 0x14038D334 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C4C0C (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR a1, unsigned __int8 a2, int a3, __int128 *a4, int a5, __int64 *a6)
{
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  int v15; // r10d
  ULONG_PTR v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // r10d
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // r8
  _DWORD *v23; // r9
  int v24; // edx
  __int128 *v25; // rax
  int v26; // ecx
  char v27; // al
  __int64 v28; // rcx
  char WsleContents; // al
  char v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdi
  unsigned int v33; // r8d
  char v34; // al
  unsigned int v35; // r12d
  int v36; // eax
  unsigned int v37; // edi
  unsigned int v38; // ebx
  int v39; // ebx
  int PfnChannel; // eax
  int v41; // ebx
  __int64 Page; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  _DWORD *v45; // r9
  _QWORD *v46; // rax
  __int64 PageChain; // rax
  __int64 v48; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int64 v50; // r13
  int PagePrivilege; // eax
  unsigned int v52; // r11d
  int v53; // ebx
  __int64 v54; // rdx
  signed __int64 v55; // rdi
  unsigned __int8 v56; // al
  bool v57; // cf
  int v58; // r14d
  unsigned __int8 CurrentIrql; // al
  char v60; // cl
  struct _KPRCB *v61; // r10
  int v62; // eax
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int8 v70; // al
  BOOL v71; // r14d
  __int64 v72; // r8
  int HasShadow; // eax
  int v74; // r11d
  __int64 *v75; // rax
  unsigned int v76; // eax
  unsigned __int64 v77; // rbx
  int v78; // eax
  __int64 IsPageFileHash; // rax
  volatile LONG *v80; // rbx
  unsigned __int8 v81; // al
  KIRQL v82; // di
  struct _KPRCB *CurrentPrcb; // r10
  int v84; // eax
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // r10d
  ULONG_PTR v88; // rbx
  __int64 v89; // rdx
  unsigned __int8 v90; // al
  char v91; // cl
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  int v94; // eax
  _DWORD *v95; // r9
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // r9
  unsigned __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // ebx
  __int64 v104; // rdx
  __int64 v105; // r8
  _DWORD *v106; // r9
  __int16 v107; // r12
  __int64 *PteFromCopyList; // rax
  ULONG_PTR v109; // r8
  int v110; // ebx
  __int64 v111; // rax
  int v112; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v114; // rax
  unsigned __int64 v115; // rbx
  BOOL v116; // eax
  __int64 v117; // r8
  int v118; // edx
  int v119; // eax
  bool v120; // zf
  unsigned __int64 *v121; // r11
  unsigned __int64 v122; // rbx
  BOOL v123; // eax
  __int64 v124; // rdx
  __int64 v125; // r8
  _DWORD *v126; // r9
  int v127; // r11d
  char v128; // al
  __int64 v129; // rcx
  unsigned __int64 v130; // rbx
  unsigned __int8 v131; // al
  struct _KPRCB *v132; // r10
  int v133; // eax
  __int64 v134; // rbx
  unsigned __int8 v135; // al
  struct _KPRCB *v136; // r10
  int v137; // eax
  struct _LIST_ENTRY *v138; // rax
  unsigned __int64 *v139; // rdi
  unsigned __int64 PteShadow; // rbx
  BOOL v141; // eax
  struct _LIST_ENTRY *v142; // r11
  struct _LIST_ENTRY *v143; // rax
  __int64 *v144; // r12
  int v145; // edi
  BOOL v146; // eax
  char v147; // al
  unsigned int v148; // eax
  __int64 v149; // rdx
  unsigned __int8 v150; // al
  KIRQL v151; // di
  struct _KPRCB *v152; // r10
  int v153; // eax
  char v154; // al
  unsigned __int8 v155; // al
  struct _KPRCB *v156; // r9
  _DWORD *v157; // r8
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // r8
  _DWORD *v161; // r9
  KIRQL v163; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v164[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v165; // [rsp+48h] [rbp-B8h]
  unsigned int v166; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v168; // [rsp+60h] [rbp-A0h]
  __int128 *v169; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v170; // [rsp+70h] [rbp-90h]
  __int64 v171; // [rsp+78h] [rbp-88h]
  __int64 v172; // [rsp+80h] [rbp-80h]
  int v173; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v175; // [rsp+98h] [rbp-68h]
  int v176; // [rsp+A0h] [rbp-60h] BYREF
  int v177; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 *v178; // [rsp+A8h] [rbp-58h]
  __int64 v179; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v180; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v181; // [rsp+C0h] [rbp-40h]
  __int64 *v182; // [rsp+C8h] [rbp-38h]
  _QWORD v183[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v185; // [rsp+100h] [rbp+0h]
  __int64 v186; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v188[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v189; // [rsp+198h] [rbp+98h]
  _QWORD v190[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v169 = a4;
  v182 = a6;
  v164[0] = 0;
  v163 = 0;
  memset((char *)v188 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v181 = 0LL;
  v179 = 0LL;
  v10 = 0LL;
  v173 = 0;
  v170 = (unsigned __int64 *)v9;
  LODWORD(v188[0]) = a3;
  v189 = -1LL;
  v175 = 0LL;
  v168 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v168);
  v14 = 1LL;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v15 = LODWORD(v188[1]) | 1;
  else
    v15 = LODWORD(v188[1]) | 8;
  LODWORD(v188[1]) = v15;
  v165 = v13;
  v16 = (__int64)(a1 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v16;
  if ( a6 )
    *a6 = v13;
  v17 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  v18 = *(_QWORD *)(qword_140C4E648 + 8 * v17);
  v172 = v18;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
  {
    v19 = v15 | 8;
    if ( (v19 & 1) != 0 )
    {
      v15 = v19 | 2;
      if ( v168 >= qword_140C4E360 && v168 < qword_140C4E360 + MiHyperSpaceSize() )
        v15 |= 0x100u;
    }
    else
    {
      v15 = v19 | 4;
    }
LABEL_15:
    v15 |= 0x1000u;
    LODWORD(v188[1]) = v15;
  }
  if ( (v15 & 0x1000) != 0 )
  {
    LOBYTE(v14) = a2;
    v21 = MiLockStealUserVm(v18, a1, v14, v9, (__int64)v188);
    if ( v21 != 1 )
      goto LABEL_18;
    v24 = v188[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v171 = v188[3];
    v166 = 0;
    v25 = v169;
LABEL_22:
    LOBYTE(v26) = v188[1];
    goto LABEL_23;
  }
  v21 = MiLockStealSystemVm(a1, a2, v9, (__int64)v188);
  if ( v21 != 1 )
  {
LABEL_18:
    MiLockPageInline(a1, v20, v22, v23);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v21;
  }
  v24 = v188[6];
  v21 = 0;
  v171 = v188[3];
  v33 = 1;
  v166 = 1;
  v34 = *(_BYTE *)(v188[3] + 184LL) & 7;
  if ( v34 == 7 )
  {
    v25 = v169;
    if ( !*((_QWORD *)v169 + 2) )
    {
      v32 = v165;
      LODWORD(v18) = 0;
      goto LABEL_339;
    }
    v166 = 2;
  }
  else
  {
    if ( ((v34 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v188[6]) == 1 )
        v33 = 2;
      v166 = v33;
    }
    v25 = v169;
  }
  if ( LODWORD(v188[6]) != 3 )
    goto LABEL_22;
  if ( (v188[1] & 1) != 0 )
    v26 = LODWORD(v188[1]) | 0xA;
  else
    v26 = LODWORD(v188[1]) | 0xC;
  LODWORD(v188[1]) = v26;
LABEL_23:
  if ( !*((_QWORD *)v25 + 2) )
  {
    LODWORD(v18) = 0;
    v21 = 0;
    if ( (v26 & 0x20) != 0
      || (*(_BYTE *)(a1 + 34) & 0x10) != 0
      || v24 == 2
      || (v26 & 8) != 0
      || (v27 = MI_READ_PTE_LOCK_FREE(v9), v28 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, v28 == v16)
      || (v27 & 0x42) != 0
      || (*(_BYTE *)(a1 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v28, v168), (WsleContents & 0xF) == v30) )
    {
      v32 = v165;
    }
    else
    {
      memset(v190, 0, 0xB8uLL);
      LODWORD(v190[0]) = MiTbFlushType(v171);
      WORD2(v190[0]) = 4;
      v190[2] = 0LL;
      LODWORD(v190[1]) = 20;
      v190[3] = 0LL;
      if ( dword_140C4E828 )
        MI_WSLE_LOG_ACCESS(v31, (_BYTE *)v9);
      MiInsertTbFlushEntry((__int64)v190, v168, 1LL, 0);
      v32 = v165;
      if ( !MiFreeWsleList(v171, (__int64)v190, 0) )
        v21 = 2;
    }
    goto LABEL_339;
  }
  v35 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a5 == -1 )
  {
    v39 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 2);
    PfnChannel = MiGetPfnChannel(a1);
    v41 = dword_140C4DEF8 & v16 | (v39 << byte_140C4DE8C);
    v37 = 0;
    v38 = (PfnChannel << byte_140C4DE8D) | v41;
    if ( (a3 & 0x3000000) != 0 )
      v37 = 0x10000;
  }
  else
  {
    v36 = dword_140C4DEF8 & v16;
    v37 = 48;
    v38 = v36 | a5 & ~dword_140C4DEF8;
  }
  if ( v189 == -1 )
  {
    Page = MiGetPage(v18, v38, v37);
    LODWORD(v18) = 0;
    v165 = Page;
    v21 = 0;
    if ( Page == -1 )
    {
      v32 = -1LL;
      goto LABEL_339;
    }
    v18 = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( v18 == a1 )
    {
      v32 = v165;
      v21 = 1;
      LODWORD(v18) = 0;
      goto LABEL_339;
    }
    v50 = (unsigned __int8)MiLockPageInline(a1, v43, v44, v45);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, 0LL);
      v52 = 0;
      if ( PagePrivilege )
      {
        v53 = LODWORD(v188[1]) | 0x2000;
        LODWORD(v188[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v52 = 0;
    }
    v53 = v188[1];
LABEL_67:
    v54 = 1LL;
    v55 = 0LL;
    if ( *(_WORD *)(a1 + 32) != 1 )
      goto LABEL_68;
    v58 = v188[6];
    SchedulerAssist = 8LL;
    if ( (*(_BYTE *)(a1 + 35) & 8) == 0 && (*(_BYTE *)a1 & 1) != 0 )
    {
      v48 = 2LL;
    }
    else
    {
      v48 = 2LL;
      if ( LODWORD(v188[6]) != 2 && (v53 & 0x26) == 0 )
        goto LABEL_77;
    }
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6
      || v172 != *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) )
    {
LABEL_77:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v50 > 0xFu )
        goto LABEL_86;
      v57 = CurrentIrql < 2u;
LABEL_82:
      if ( !v57 )
      {
        v60 = v50 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v53 & 0x20) == 0 )
    {
      v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v170);
      v52 = 0;
      v55 = v68;
      v54 = 1LL;
      SchedulerAssist = 8LL;
    }
    if ( v58 != 3 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v166 == 1 )
    {
      if ( (v53 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v56 = KeGetCurrentIrql();
        if ( v56 > 0xFu || (unsigned __int8)v50 > 0xFu )
          goto LABEL_86;
        v57 = v56 < 2u;
        goto LABEL_82;
      }
      v53 |= 0x208u;
      LODWORD(v188[1]) = v53;
    }
    if ( v58 != 2 )
    {
      if ( (v53 & 0x20) != 0 )
      {
        v69 = MiPrepareToStealNonPagedPool(a1, v170);
        v52 = 0;
        v55 = v69;
        if ( !v69 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v70 = KeGetCurrentIrql();
          if ( v70 > 0xFu || (unsigned __int8)v50 > 0xFu )
            goto LABEL_86;
          goto LABEL_113;
        }
      }
      else if ( ((v53 & 8) == 0 || (v53 & 0x100) != 0) && ((v55 & 0x42) != 0 || (v53 & 0x2000) != 0) )
      {
        if ( (v53 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection((unsigned __int64)v170, v55 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v71 = 0;
          LODWORD(v188[1]) = v53 | 0x40;
          if ( MiPteInShadowRange((unsigned __int64)v170) )
          {
            HasShadow = MiPteHasShadow();
            v74 = 1;
            v71 = HasShadow != 0;
          }
          else
          {
            v74 = 1;
          }
          v75 = (__int64 *)v170;
          *v170 = v55 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v71 )
            MiWritePteShadow((__int64)v75, v55 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v72);
          v173 = v74;
        }
        v76 = MiTbFlushType(v171);
        v77 = v168;
        KeFlushSingleTb(v168, v76, v166);
LABEL_129:
        v78 = v166;
        if ( v166 == 1 )
        {
          if ( (v188[1] & 4) != 0 )
            v78 = 2;
          v166 = v78;
        }
        MiLockNestedPageAtDpcInline(v18, v54, v48, SchedulerAssist);
        MiFinalizePageAttribute(v18, v35, 1LL);
        if ( LODWORD(v188[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v172, v77);
          v52 = 0;
          v179 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_146;
          v80 = (volatile LONG *)(IsPageFileHash + 232);
          v163 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v179 != MiVaIsPageFileHash(v172, v168) || !MiSmallVaStillMapsFrame(v168, BugCheckParameter2) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v80);
            v52 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v81 = KeGetCurrentIrql(), v81 <= 0xFu) )
            {
              v82 = v163;
              if ( v163 <= 0xFu && v81 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v54 = -1LL << (v163 + 1);
                SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
                v84 = ~(unsigned __int16)v54;
                v120 = (v84 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                v48 = (unsigned int)v84 & *(_DWORD *)(SchedulerAssist + 20);
                *(_DWORD *)(SchedulerAssist + 20) = v48;
                if ( v120 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v52 = 0;
                }
              }
            }
            else
            {
              v82 = v163;
            }
            __writecr8(v82);
LABEL_146:
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v70 = KeGetCurrentIrql();
            if ( v70 > 0xFu || (unsigned __int8)v50 > 0xFu )
              goto LABEL_86;
LABEL_113:
            if ( v70 >= 2u )
            {
              v60 = v50 + 1;
LABEL_84:
              v61 = KeGetCurrentPrcb();
              v54 = -1LL << v60;
              v62 = ~(unsigned __int16)(-1LL << v60);
              SchedulerAssist = (__int64)v61->SchedulerAssist;
              v120 = (v62 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v48 = (unsigned int)v62 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v48;
              if ( v120 )
              {
                KiRemoveSystemWorkPriorityKick(v61);
                v52 = 0;
              }
            }
LABEL_86:
            __writecr8(v50);
LABEL_87:
            v10 = v18;
            v21 = v52;
LABEL_88:
            if ( !v10 )
            {
              v32 = v165;
              LODWORD(v18) = 0;
              goto LABEL_339;
            }
            v63 = (unsigned __int8)MiLockPageInline(v10, v54, v48, (_DWORD *)SchedulerAssist);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v18) = 0;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v64 = KeGetCurrentIrql();
                if ( v64 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v64 >= 2u )
                {
                  v65 = KeGetCurrentPrcb();
                  v66 = v65->SchedulerAssist;
                  v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
                  v120 = (v67 & v66[5]) == 0;
                  v66[5] &= v67;
                  if ( v120 )
                    KiRemoveSystemWorkPriorityKick(v65);
                }
              }
            }
            __writecr8(v63);
            goto LABEL_333;
          }
        }
        MiCopyPfnEntryEx(v18, a1);
        v88 = BugCheckParameter2;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2 )
          *(_QWORD *)(v18 + 40) ^= (v165 ^ *(_QWORD *)(v18 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v89 = LODWORD(v188[1]);
        if ( (v188[1] & 0x20) == 0 && LODWORD(v188[6]) != v87 )
        {
          if ( (v188[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v90 = KeGetCurrentIrql();
                if ( v90 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v90 >= (unsigned __int8)v87 )
                {
                  v91 = v50 + 1;
LABEL_178:
                  v93 = KeGetCurrentPrcb();
                  v94 = ~(unsigned __int16)(-1LL << v91);
                  v95 = v93->SchedulerAssist;
                  v120 = (v94 & v95[5]) == 0;
                  v85 = (unsigned int)v94 & v95[5];
                  v95[5] = v85;
                  if ( v120 )
                    KiRemoveSystemWorkPriorityKick(v93);
                  v86 = 0LL;
                  goto LABEL_181;
                }
              }
            }
            goto LABEL_181;
          }
          v85 = v166;
          if ( ((LODWORD(v188[1]) >> 3) & 1) == 0 && !v166 || (v188[1] & 0xA) == 0xA || (v188[1] & 0x100) != 0 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_172;
          }
          if ( ((LODWORD(v188[1]) >> 3) & 1) != 0 && (v188[1] & (unsigned __int8)v87) == 0 && !v166
            || LODWORD(v188[6]) == 3 && (v188[1] & 4) != 0 )
          {
LABEL_172:
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v92 = KeGetCurrentIrql();
                if ( v92 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v92 >= (unsigned __int8)v87 )
                {
                  v91 = v50 + 1;
                  goto LABEL_178;
                }
              }
            }
LABEL_181:
            __writecr8(v50);
            v89 = LODWORD(v188[1]);
            LOBYTE(v50) = 17;
          }
        }
        if ( (v89 & 0x200) != 0 )
        {
          v172 = MiLockProtoPoolPage(v168, (__int64)v164);
          v96 = v172;
          if ( !v172 )
          {
LABEL_184:
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
            goto LABEL_87;
          }
          if ( *(_WORD *)(v172 + 32) > 2u )
          {
LABEL_186:
            MiUnlockProtoPoolPage(v96, v164[0]);
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
            v52 = 0;
            goto LABEL_87;
          }
          v55 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v170);
          if ( (v55 & 0x42) != 0 )
          {
            v176 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v96 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v176, v97, v85, v98);
              while ( *(__int64 *)(v96 + 24) < 0 );
            }
            if ( *(_WORD *)(v96 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v96 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_186;
            }
            MiWriteValidPteNewProtection((unsigned __int64)v170, v55 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v168, 0, 1u);
            v99 = MiCaptureDirtyBitToPfn(v96);
            _InterlockedAnd64((volatile signed __int64 *)(v96 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v99 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v96 + 40) >> 39) & 0x3FFLL)),
                v99,
                1);
            v177 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v177, v100, v101, v102);
              while ( *(__int64 *)(v18 + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(v18);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v89 = LODWORD(v188[1]);
          v86 = 0LL;
          v88 = BugCheckParameter2;
        }
        else
        {
          v164[0] = 17;
          v172 = v86;
        }
        if ( (v89 & 0x200) == 0
          && (LODWORD(v188[6]) != 3 || (v89 & 4) == 0)
          && ((v89 & 8) == 0 || (v89 & 2) != 0 || v166 != (_DWORD)v86) )
        {
          if ( (_BYTE)v50 != 17 )
          {
            MiLockNestedPageAtDpcInline(v18, v89, v85, v86);
            LOWORD(v89) = v188[1];
          }
          v103 = ((_BYTE)v50 != 17 ? 4 : 0) | 2;
          if ( (v89 & 0x2000) == 0 )
            v103 = (_BYTE)v50 != 17 ? 4 : 0;
          MiCopyPage(v165, BugCheckParameter2, v169, v103);
          if ( (v103 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v107 = v188[1];
          if ( (v188[1] & 0x20) == 0 && (_BYTE)v50 != 17 )
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
          goto LABEL_264;
        }
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)v169, v165, v88);
        v178 = (unsigned __int64 *)PteFromCopyList;
        if ( (v188[1] & 0x200) != 0 )
        {
          LODWORD(v169) = MiReplacePageOfProtoPool(
                            v168,
                            v88,
                            v165,
                            (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v175) >> 16);
          goto LABEL_229;
        }
        CurrentThread = KeGetCurrentThread();
        v183[1] = v168;
        v183[3] = v88;
        v183[4] = v165;
        v109 = BugCheckParameter2;
        v183[2] = (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v175) >> 16;
        v186 = 0LL;
        Flink = 0LL;
        v110 = 1;
        v183[0] = v171;
        v185 = CurrentThread->ApcState.Process;
        v111 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v169) = 1;
        if ( v111 == BugCheckParameter2 )
        {
          if ( (*(_BYTE *)(v171 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v169) = 0;
            goto LABEL_229;
          }
          v112 = LODWORD(v188[1]) | 0x400;
          LODWORD(v188[1]) |= 0x400u;
          if ( v185->DirectoryTableBase >> 12 != v109 )
          {
            HIDWORD(v186) = 1;
            Flink = v185[1].ProcessListEntry.Flink;
            LODWORD(v188[1]) = v112 | 0x4000;
          }
          MiReleaseFaultState((__int64)&v188[3], 0x11u, 0LL);
          KeSwapDirectoryTableBase(v185, HIDWORD(v186), v183);
          SharedVm = MiGetSharedVm(v171);
          ExAcquireSpinLockExclusive(SharedVm);
          v114 = Process;
          SharedVm[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)&v114[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v110 = (int)v169;
        }
        else
        {
          MiReplacePageTablePage(v183);
        }
        if ( (int)v186 < 0 )
          v110 = 0;
        LODWORD(v169) = v110;
LABEL_229:
        v115 = ZeroPte;
        LODWORD(BugCheckParameter2) = 0;
        v116 = MiPteInShadowRange((unsigned __int64)v178);
        v118 = 0;
        if ( v116 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v119 = v118 + 1;
            if ( HIBYTE(word_140C4E008) != (_BYTE)v118 )
              goto LABEL_238;
            v120 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v118 + 1)) == 0;
            goto LABEL_233;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v120 = (ZeroPte & 1) == 0;
            v119 = BugCheckParameter2;
LABEL_233:
            if ( !v120 )
              v115 = ZeroPte | 0x8000000000000000uLL;
LABEL_238:
            v121 = v178;
            *v178 = v115;
            if ( v119 )
            {
              MiWritePteShadow((__int64)v121, v115, v117);
              v118 = 0;
            }
            v122 = ZeroPte;
            LODWORD(BugCheckParameter2) = v118;
            v123 = MiPteInShadowRange((unsigned __int64)(v121 + 1));
            v127 = 0;
            if ( !v123 )
              goto LABEL_248;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v128 = v127 + 1;
              LODWORD(BugCheckParameter2) = v127 + 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v127 )
              {
LABEL_246:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v128) != 0 )
                  v122 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v128 = 1;
              goto LABEL_246;
            }
LABEL_248:
            v129 = (__int64)(v178 + 1);
            v178[1] = v122;
            if ( (_DWORD)BugCheckParameter2 != v127 )
              MiWritePteShadow(v129, v122, v125);
            if ( (_DWORD)v169 == v127 )
            {
              if ( (v188[1] & 0x200) != 0 )
                MiUnlockProtoPoolPage(v172, v164[0]);
              goto LABEL_184;
            }
            if ( (v188[1] & 0x200) != 0 )
            {
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v18, 0xC000000000000001uLL, v125, (__int64)v126);
            }
            else
            {
              v130 = (unsigned __int8)MiLockPageInline(a1, v124, v125, v126);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              v104 = 1LL;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v131 = KeGetCurrentIrql();
                  if ( v131 <= 0xFu && (unsigned __int8)v130 <= 0xFu && v131 >= 2u )
                  {
                    v132 = KeGetCurrentPrcb();
                    v104 = -1LL << ((unsigned __int8)v130 + 1);
                    v106 = v132->SchedulerAssist;
                    v133 = ~(unsigned __int16)v104;
                    v120 = (v133 & v106[5]) == 0;
                    v105 = (unsigned int)v133 & v106[5];
                    v106[5] = v105;
                    if ( v120 )
                      KiRemoveSystemWorkPriorityKick(v132);
                  }
                }
              }
              __writecr8(v130);
              LOBYTE(v50) = 17;
            }
            v107 = v188[1];
LABEL_264:
            v134 = v55 ^ (v55 ^ (v165 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v107 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(v18, v104, v105, (__int64)v106);
              if ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)v170, v134 | 0x20, v55) )
              {
                MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
                *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v52 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v135 = KeGetCurrentIrql();
                    if ( v135 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v135 >= 2u )
                    {
                      v136 = KeGetCurrentPrcb();
                      v54 = -1LL << ((unsigned __int8)v50 + 1);
                      SchedulerAssist = (__int64)v136->SchedulerAssist;
                      v137 = ~(unsigned __int16)v54;
                      v120 = (v137 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                      v48 = (unsigned int)v137 & *(_DWORD *)(SchedulerAssist + 20);
                      *(_DWORD *)(SchedulerAssist + 20) = v48;
                      if ( v120 )
                      {
                        KiRemoveSystemWorkPriorityKick(v136);
                        v52 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v50);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v107 = v188[1];
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
LABEL_303:
              if ( (v107 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v172, v164[0]);
                LOBYTE(v50) = 17;
              }
              else if ( (v107 & 0x10) != 0 && (v107 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
              {
                v149 = 12LL;
                if ( (_BYTE)v50 == 17 )
                  v149 = 8LL;
                MiClearPfnImageVerified(a1, v149, v105, v106);
              }
              if ( LODWORD(v188[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v179 + 232));
                LODWORD(v18) = 0;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v150 = KeGetCurrentIrql(), v150 <= 0xFu) )
                {
                  v151 = v163;
                  if ( v163 <= 0xFu && v150 >= 2u )
                  {
                    v152 = KeGetCurrentPrcb();
                    v104 = -1LL << (v163 + 1);
                    v106 = v152->SchedulerAssist;
                    v153 = ~(unsigned __int16)v104;
                    v120 = (v153 & v106[5]) == 0;
                    v105 = (unsigned int)v153 & v106[5];
                    v106[5] = v105;
                    if ( v120 )
                      KiRemoveSystemWorkPriorityKick(v152);
                  }
                }
                else
                {
                  v151 = v163;
                }
                __writecr8(v151);
              }
              else
              {
                LODWORD(v18) = 0;
              }
              if ( (_BYTE)v50 == 17 )
                LOBYTE(v50) = MiLockPageInline(a1, v104, v105, v106);
              *(_QWORD *)(a1 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(a1 + 34) &= 0xC7u;
              v154 = *(_BYTE *)(a1 + 35) & 0xDF;
              *(_WORD *)(a1 + 32) = 0;
              *(_BYTE *)(a1 + 35) = v154;
              *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v155 = KeGetCurrentIrql();
                  if ( v155 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v155 >= 2u )
                  {
                    v156 = KeGetCurrentPrcb();
                    v157 = v156->SchedulerAssist;
                    v158 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                    v120 = (v158 & v157[5]) == 0;
                    v157[5] &= v158;
                    if ( v120 )
                      KiRemoveSystemWorkPriorityKick(v156);
                  }
                }
              }
              __writecr8((unsigned __int8)v50);
              v10 = v181;
              v21 = 1;
LABEL_333:
              v32 = v165;
              goto LABEL_339;
            }
            if ( (v107 & 0x400) != 0 )
            {
              if ( (v107 & 0x4000) != 0 )
              {
                v138 = Process[1].ProcessListEntry.Flink;
                v175 = v138;
                if ( !v138 )
                  goto LABEL_283;
                v139 = (unsigned __int64 *)((((unsigned __int64)v138 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v139;
                v141 = MiPteInShadowRange((unsigned __int64)v139);
                v142 = 0LL;
                if ( v141 )
                  PteShadow = MiReadPteShadow((unsigned __int64)v139, PteShadow);
                v143 = v142;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v165 )
                  v143 = v175;
                if ( !v143 )
                {
LABEL_283:
                  v21 = 2;
                  v10 = a1;
                  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
                  goto LABEL_88;
                }
                goto LABEL_301;
              }
              goto LABEL_300;
            }
            if ( (v107 & 0x40) == 0 )
            {
              if ( (v107 & 0x200) == 0 && (v107 & 0x10) != 0 )
                MiLockNestedPageAtDpcInline(v18, v104, v105, (__int64)v106);
              MiWriteValidPteNewPage((__int64 *)v170, v134, 0);
              v107 = v188[1];
LABEL_300:
              LODWORD(v142) = 0;
LABEL_301:
              if ( v173 == (_DWORD)v142 )
              {
                v148 = MiTbFlushType(v171);
                KeFlushSingleTb(v168, v148, v166);
                v107 = v188[1];
              }
              goto LABEL_303;
            }
            v144 = (__int64 *)v170;
            v145 = 0;
            v146 = MiPteInShadowRange((unsigned __int64)v170);
            LODWORD(v142) = 0;
            if ( v146 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v147 = (_BYTE)v142 + 1;
                v145 = (_DWORD)v142 + 1;
                if ( HIBYTE(word_140C4E008) == (_BYTE)v142 )
                {
LABEL_291:
                  if ( ((unsigned __int8)v134 & (unsigned __int8)v147) != 0 )
                    v134 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v147 = 1;
                goto LABEL_291;
              }
            }
            *v144 = v134;
            if ( v145 )
              MiWritePteShadow((__int64)v144, v134, v105);
            v107 = v188[1];
            goto LABEL_301;
          }
        }
        v119 = BugCheckParameter2;
        goto LABEL_238;
      }
    }
    v77 = v168;
    goto LABEL_129;
  }
  v46 = MiSearchNumaNodeTable(BugCheckParameter2);
  v180 = 1LL;
  PageChain = MiGetPageChain(v18, v171, *((_DWORD *)v46 + 2) + 1, v35, v37, v189, &v180);
  v18 = PageChain;
  if ( PageChain )
  {
    v43 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v165 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v32 = -1LL;
  v21 = 0;
LABEL_339:
  MiUnlockStealVm(v188);
  if ( v10 )
    MiReleaseFreshPage(v10);
  MiLockPageInline(a1, v159, v160, v161);
  if ( v21 == 1 )
  {
    if ( v182 )
      *v182 = v32;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      v21 = 2;
    if ( v21 == 2 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return (unsigned int)v18;
  }
  return v21;
}
