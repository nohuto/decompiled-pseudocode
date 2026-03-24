/*
 * XREFs of MiResolvePageFileFault @ 0x1402E0F08
 * Callers:
 *     MiDispatchFault @ 0x14020EEC0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1402E203C (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x14021BA50 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiComputeFaultNode @ 0x14023EA70 (MiComputeFaultNode.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiInitializeReadInProgressPfn @ 0x14027C5B0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14027CDDC (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiAllocateInPageSupport @ 0x14029A230 (MiAllocateInPageSupport.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiIsPteInStore @ 0x1402E1DE0 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x1402E1E0C (MiLockSetPfnPriority.c)
 *     MiFreePageChain @ 0x1402E1E74 (MiFreePageChain.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402E31E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiComputeFaultCluster @ 0x1402E3EC4 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiSetInPagePrefetchPriority @ 0x1402E4154 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x14032951C (MiFlowThroughInsertNode.c)
 *     MiIsStoreProcess @ 0x1403334C0 (MiIsStoreProcess.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14033A92C (MiGetAvailablePagesBelowPriority.c)
 *     MiSufficientAvailablePages @ 0x14033E480 (MiSufficientAvailablePages.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA94 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  ULONG_PTR *v11; // rcx
  unsigned __int64 v12; // r13
  char v13; // r15
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  int SystemRegionType; // ecx
  int v17; // r15d
  bool v18; // zf
  ULONG_PTR *v19; // rcx
  _KPROCESS *Process; // r13
  unsigned int v21; // edi
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r15d
  __int64 **Address; // rax
  int v27; // ecx
  int IsPteInStore; // eax
  char v29; // r9
  unsigned int v30; // r10d
  int v31; // r14d
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rdi
  __int64 v34; // r13
  unsigned int v35; // r10d
  unsigned int v36; // r12d
  unsigned int v37; // edi
  unsigned __int64 v38; // r8
  __int64 v39; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v41; // r12d
  __int64 v42; // rbx
  __int64 updated; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // r13
  __int64 v46; // rax
  unsigned __int64 v47; // r12
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned int v53; // r9d
  unsigned __int64 v54; // rsi
  unsigned int v55; // eax
  unsigned int v56; // r8d
  __int64 v57; // r9
  unsigned __int64 v58; // rsi
  char v59; // r11
  ULONG_PTR *v60; // r10
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r12
  unsigned int v63; // r8d
  unsigned int v64; // eax
  __int64 PageChain; // rax
  unsigned __int64 v66; // r15
  __int64 v67; // r15
  unsigned int v68; // r12d
  __int64 *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r11
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // r8
  unsigned __int64 v76; // rax
  int v77; // edx
  __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  unsigned int v80; // eax
  unsigned int v81; // esi
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdi
  __int64 v84; // r12
  char v85; // bl
  __int64 v86; // r9
  __int64 v87; // r8
  unsigned __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r15
  __int64 v92; // rax
  unsigned __int64 v93; // rsi
  unsigned int v94; // eax
  __int64 v95; // rbx
  ULONG_PTR v96; // rdx
  int v97; // ecx
  __int64 result; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rsi
  unsigned int v101; // edi
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // r10
  __int64 v106; // rdx
  __int64 v107; // rax
  unsigned int v108; // ecx
  __int64 v109; // rax
  __int64 **v110; // rax
  bool v111; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v113; // r8d
  __int64 v114; // rdx
  int v115; // edx
  __int64 v116; // rax
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // rcx
  __int64 v119; // rdi
  unsigned __int64 v120; // rcx
  int v121; // eax
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  unsigned int v127; // r9d
  unsigned __int64 v128; // rdx
  _QWORD *v129; // rax
  int v130; // eax
  __int64 v131; // rdx
  unsigned int v132; // ecx
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // r9
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rax
  _QWORD *v138; // rbx
  unsigned int v139; // esi
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  unsigned __int8 v143; // [rsp+48h] [rbp-89h]
  char v144; // [rsp+48h] [rbp-89h]
  unsigned int v145; // [rsp+4Ch] [rbp-85h]
  unsigned int v146; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v147; // [rsp+58h] [rbp-79h]
  int v148; // [rsp+60h] [rbp-71h]
  ULONG_PTR *v149; // [rsp+68h] [rbp-69h]
  unsigned __int64 v150; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v151; // [rsp+78h] [rbp-59h]
  __int64 v152; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v153; // [rsp+88h] [rbp-49h]
  __int64 **v154; // [rsp+90h] [rbp-41h] BYREF
  int v155; // [rsp+98h] [rbp-39h]
  int v156; // [rsp+9Ch] [rbp-35h]
  __int64 v157; // [rsp+A0h] [rbp-31h]
  __int64 v158; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v159; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v160; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v161; // [rsp+C0h] [rbp-11h]
  __int64 v162; // [rsp+C8h] [rbp-9h]
  __int64 v163; // [rsp+D0h] [rbp-1h]
  __int64 v164; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v167; // [rsp+138h] [rbp+67h]
  unsigned int v168; // [rsp+138h] [rbp+67h]
  __int64 v170; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v172; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v170 = va_arg(va1, _QWORD);
  v172 = va_arg(va1, __int64 *);
  v153 = *a1;
  v3 = 0;
  v160 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v164 = v4;
  v163 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v152 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v170 )
      MiUnlockProtoPoolPage(v170, 0x11u);
    return 3221225633LL;
  }
  v7 = v170;
  v8 = v152;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DF40;
    }
    v3 = 16;
    v161 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = *(_QWORD *)(v161 + 16);
    v10 = (*(_QWORD *)(v161 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v161 = 0LL;
    v9 = v152;
    if ( v170 )
    {
      v11 = MiSharedVaToPartition(v4, v153, a2);
      v149 = v11;
      goto LABEL_6;
    }
    v10 = *(unsigned __int16 *)(v4 + 174);
  }
  v11 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v10);
  v149 = v11;
LABEL_6:
  v12 = 0LL;
  v148 = 2;
  v13 = v5;
  v151 = 0LL;
  v14 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = v13 & 1;
  if ( v15 && *(_BYTE *)v14 == 5 )
  {
    v121 = *(_DWORD *)(v14 + 56);
    if ( (v121 & 4) != 0 && ((v121 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v11, v9)) )
    {
      if ( v7 )
        MiUnlockProtoPoolPage(v7, 0x11u);
      return 3221225495LL;
    }
    v151 = 0LL;
  }
  else if ( v15 )
  {
    if ( *(_BYTE *)v14 == 2 )
    {
      v12 = v14;
      v151 = v14;
    }
    else if ( *(_BYTE *)v14 == 1 )
    {
      v151 = v14;
      v12 = v14;
      if ( (v152 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v152) )
        return 0LL;
      v148 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v153);
  if ( v15 && *(_BYTE *)v14 == 4 )
  {
    v109 = *(_QWORD *)(v14 + 40);
    v17 = 8;
    v148 |= 8u;
    v12 = v14;
    v151 = v14;
    v19 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v109 + 544) + 1838LL));
    v149 = v19;
LABEL_12:
    v155 = v17;
    goto LABEL_13;
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v17 = 0;
    v18 = SystemRegionType == 12;
    v19 = v149;
    if ( v18 )
      v17 = 8;
    goto LABEL_12;
  }
  v155 = 8;
  v116 = MiKernelStackVaToStackNode(v153);
  if ( v116 )
    v19 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v116 + 40));
  else
    v19 = &MiSystemPartition;
  v148 |= 8u;
  v149 = v19;
LABEL_13:
  if ( v3 >= 0x20 && (*(_DWORD *)(v12 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore(v19, v8) )
    {
      if ( v7 )
        MiUnlockProtoPoolPage(v7, 0x11u);
      return 0LL;
    }
  }
  v156 = 0;
  LODWORD(v150) = 1;
  Process = CurrentThread->ApcState.Process;
  v21 = 16;
  v146 = 16;
  v147 = a2;
  v145 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v22 = v8;
    v143 = v156;
    goto LABEL_17;
  }
  v143 = 16;
  v103 = MI_READ_PTE_LOCK_FREE(((v153 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v103) )
  {
    v143 = 48;
    goto LABEL_231;
  }
  if ( Process[1].Affinity.Bitmap[12] )
  {
LABEL_231:
    v21 = 1;
    v146 = 1;
  }
  v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v152);
LABEL_17:
  v158 = (v22 >> 5) & 0x1F;
  v154 = (__int64 **)a1[11];
  v25 = MiComputeFaultNode(a1, 0LL, (__int64 *)&v154);
  LODWORD(v159) = v25;
  Address = v154;
  if ( (v154
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL
      && a2 >= 0xFFFFF68000000000uLL
      && (unsigned int)MiIsStoreProcess(Process, 0xFFFFF68000000000uLL, v23, v24)
      || (*(_BYTE *)(v164 + 184) & 7) == 0
      && v153 < 0xFFFF800000000000uLL
      && ((v99 = Process[1].ActiveProcessorsPadding[8], *(_QWORD *)(v99 + 424)) || *(_QWORD *)(v99 + 432)))
     && (Address = MiLocateAddress(v153), (v154 = Address) != 0LL))
    && (v123 = *((unsigned int *)Address + 13),
        LODWORD(v123) = v123 & 0x7FFFFFFF,
        (v123 | ((unsigned __int64)*((unsigned __int8 *)Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v27 = 7;
    v143 |= 0x80u;
    v145 = 7;
  }
  else
  {
    v27 = 2;
  }
  if ( ((v8 >> 11) & 1) != 0 )
  {
    v146 = 1;
    v145 = v27 | 1;
    v21 = 1;
  }
  IsPteInStore = MiIsPteInStore(v149, v9);
  v31 = v30 & IsPteInStore | v3;
  if ( v21 != v30 )
  {
    if ( dword_140C4ECC0 )
    {
      v146 = v30;
      --dword_140C4ECC0;
      v21 = v30;
    }
    else
    {
      v32 = v151;
      if ( v151 )
      {
        v110 = v154;
        v111 = (v29 & 0x10) != 0;
        if ( (v29 & 0x10) != 0 && !v154 )
        {
          v110 = MiLocateAddress(v153);
          v154 = v110;
        }
        v21 = MiComputeFaultCluster(v149, v32, (unsigned __int64)v110 & -(__int64)v111, v31 & 1);
        v146 = v21;
        v30 = 1;
      }
      else if ( v153 > 0x7FFFFFFEFFFFLL )
      {
        v146 = v30;
        v21 = v30;
        if ( (v29 & 0x10) == 0 && (v153 < 0xFFFFF68000000000uLL || v153 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v21 = 16;
          v31 |= 4u;
          v146 = 16;
        }
      }
    }
  }
  LODWORD(v157) = v30 & v31;
  if ( (v30 & v31) != 0 )
  {
    if ( v21 > *((_DWORD *)v149 + 291) )
      v21 = *((_DWORD *)v149 + 291);
    v146 = v21;
  }
  v33 = a2;
  v162 = (__int64)MiAllocateInPageSupport(a2, v148, &v146, (__int64 *)((unsigned __int64)va & -(__int64)(v7 != 0)));
  v34 = v162;
  if ( !v162 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v151 )
      *(_BYTE *)(v151 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v8
    || ((v8 >> 11) & 1) != 0
    && ((*(_BYTE *)(v161 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v161 + 34) & 0x20) == 0
     || v9 != *(_QWORD *)(v161 + 16)
     || (*(_DWORD *)(*(_QWORD *)v161 + 160LL) & 0x20) != 0) )
  {
    if ( v170 )
      MiUnlockProtoPoolPage(v170, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v34);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v35 = 1;
  if ( v151 && *(_BYTE *)v151 == 1 )
    MiSetInPagePrefetchPriority(v151, v34);
  v36 = v146;
  if ( v146 > v35 && (unsigned int)MiSufficientAvailablePages(v149, 320LL) )
  {
    v37 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v167 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v143 & 0x10) != 0 )
    {
      v104 = (__int64)v154;
      v105 = v153;
      if ( (v154 || (v154 = MiLocateAddress(v153), (v104 = (__int64)v154) != 0))
        && (*(_DWORD *)(v104 + 48) & 0x100000) == 0
        && (MiGetProtoPteAddress(v104, v105 >> 12, 4, &v160), v160)
        && (*(_BYTE *)(v160 + 34) & 2) == 0 )
      {
        v106 = *(_QWORD *)(v160 + 8);
        v38 = a2;
        v107 = (__int64)(a2 - v106) >> 3;
        v108 = ((__int64)(v106 + 8LL * *(unsigned int *)(v160 + 44) - a2) >> 3) - 1;
        if ( v108 >= v37 )
          v108 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v37 = v108;
        if ( (unsigned int)v107 >= v167 )
          LODWORD(v107) = ((unsigned int)a2 >> 3) & 0x1FF;
        v167 = v107;
      }
      else
      {
        v38 = a2;
        v36 = 1;
      }
    }
    else
    {
      v38 = a2;
    }
    if ( v151 || (v31 & 4) != 0 )
    {
      v167 = 0;
      if ( !v37 )
        v36 = 1;
    }
    if ( v36 <= 1 )
    {
      v33 = a2;
      v54 = v147;
    }
    else
    {
      v150 = v8;
      v148 = v36 - 1;
      v160 = v38 + 8;
      v39 = v36 - 1;
      if ( v37 <= v36 - 1 )
        v39 = v37;
      PagingFileOffset = MiGetPagingFileOffset(&v150);
      v41 = -3 - PagingFileOffset;
      v161 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v39 < 0xFFFFFFFE )
        v41 = v39;
      if ( (_DWORD)v157 || v151 )
        v31 |= 8u;
      v42 = v8 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v8 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v41 )
      {
        v44 = v160;
        v45 = v161;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v45);
          v46 = MI_READ_PTE_LOCK_FREE(v44);
          if ( (v46 & 0x3E0) != 0 && (v46 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v147 = v44;
          }
          else if ( (v31 & 8) != 0 )
          {
LABEL_60:
            v8 = v152;
            v25 = v159;
            v34 = v162;
            break;
          }
          v44 += 8LL;
          if ( !--v41 )
            goto LABEL_60;
        }
      }
      v47 = a2;
      v48 = v148 - ((__int64)(v147 - a2) >> 3);
      v147 = (__int64)(v147 - a2) >> 3;
      v150 = v8;
      if ( v167 <= v48 )
        v48 = v167;
      v49 = v48;
      v160 = a2;
      v50 = MiGetPagingFileOffset(&v150);
      v161 = v50;
      v51 = v50 - 1;
      if ( v49 <= (unsigned __int64)v50 - 1 )
        v51 = v49;
      if ( v51 )
      {
        v100 = v161;
        v101 = v51;
        while ( 1 )
        {
          --v100;
          v47 -= 8LL;
          v42 = MiUpdatePageFileHighInPte(v42, v100);
          v102 = MI_READ_PTE_LOCK_FREE(v47);
          if ( (v102 & 0x3E0) != 0 && (v102 & 0xFFFFFFFFFC00FF1DuLL) == v42 )
          {
            v160 = v47;
          }
          else if ( (v31 & 8) != 0 )
          {
LABEL_149:
            v8 = v152;
            v34 = v162;
            break;
          }
          if ( !--v101 )
            goto LABEL_149;
        }
      }
      v33 = a2;
      v52 = v8;
      if ( qword_140C4DF40 && (v8 & 0x10) == 0 )
        v52 = v8 & ~qword_140C4DF40;
      v9 = MiUpdatePageFileHighInPte(v8, HIDWORD(v52) - (unsigned int)((__int64)(a2 - v160) >> 3));
      LODWORD(v150) = v53 + v147 + 1;
      v54 = a2 - 8LL * v53;
      v147 = v54;
    }
  }
  else
  {
    v54 = a2;
  }
  v55 = MiObtainFaultCharges(v149, v150, v145);
  v56 = v150;
  v57 = v55;
  v162 = v55;
  if ( (unsigned int)v150 > (unsigned __int64)v55 )
  {
    v124 = v9;
    if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
      v124 = v9 & ~qword_140C4DF40;
    v125 = (unsigned int)v150 - v57;
    v126 = HIDWORD(v124);
    if ( v54 + 8 * v125 <= v33 )
    {
      v147 = v54 + 8 * v125;
    }
    else
    {
      v147 = v33;
      v125 = (__int64)(v33 - v54) >> 3;
    }
    v9 = MiUpdatePageFileHighInPte(v9, v125 + v126);
    LODWORD(v150) = v127;
    v56 = v127;
  }
  v58 = v151;
  v59 = 1;
  if ( !v151 || *(_BYTE *)v151 != 1 )
  {
    v60 = v149;
    v61 = v56;
    v62 = v56;
LABEL_73:
    v159 = v61;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v149, ((*(_DWORD *)(v151 + 80) >> 3) & 7u) + 1);
  v61 = v113;
  v62 = AvailablePagesBelowPriority;
  v159 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v113 )
  {
    v62 = v113;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v62 )
  {
LABEL_296:
    if ( v170 )
      MiUnlockProtoPoolPage(v170, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v34);
    if ( v58 )
      *(_BYTE *)(v58 + 1) = 2;
    MiReturnFaultCharges(v149, v162, v145);
    return 3221225495LL;
  }
  if ( !v58
    || *(_BYTE *)v58 != v59
    || (v114 = *(_QWORD *)(v58 + 88)) == 0
    || v155
    || v153 > 0x7FFFFFFEFFFFLL
    || v170
    || *(ULONG_PTR **)(qword_140C4E648 + 8 * ((*(_QWORD *)(v114 + 40) >> 39) & 0x3FFLL)) != v60 )
  {
    v63 = v158;
LABEL_77:
    v64 = MiProtectionToCacheAttribute(v63);
    PageChain = MiGetPageChain((__int64)v149, v164, v25, v64, v155, -1LL, &v159);
    v66 = v159;
    v157 = PageChain;
    goto LABEL_78;
  }
  v128 = (__int64)((unsigned __int128)((v114 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v129 = MiSearchNumaNodeTable(v128 + (v128 >> 63));
  v63 = v158;
  if ( *((_DWORD *)v129 + 2) != v25 - 1 )
    goto LABEL_77;
  v157 = *(_QWORD *)(v58 + 88);
  v130 = MiProtectionToCacheAttribute(v158);
  if ( *(unsigned __int8 *)(v131 + 34) >> 6 != v130 )
    goto LABEL_77;
  v132 = 0;
  v133 = v131;
  while ( 1 )
  {
    ++v132;
    v134 = *(_QWORD *)(v133 + 24) & 0xFFFFFFFFFLL;
    v135 = v133;
    if ( v134 == 0xFFFFFFFFFLL )
      break;
    v133 = 48 * v134 - 0x58000000000LL;
    if ( v132 >= v62 )
      goto LABEL_270;
  }
  v133 = 0LL;
LABEL_270:
  v66 = v132;
  MiSetPfnBlink(v135, 0xFFFFFFFFFLL, 0);
  v136 = v151;
  *(_QWORD *)(v151 + 88) = v133;
  v58 = v136;
  PageChain = v157;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v66 != v61 )
  {
    v117 = v147;
    if ( v147 + 8 * v66 <= a2 )
    {
      v118 = v9;
      if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
        v118 = v9 & ~qword_140C4DF40;
      v119 = v61 - v66;
      v120 = HIDWORD(v118);
      if ( v147 + 8 * v119 <= a2 )
      {
        v147 += 8 * v119;
      }
      else
      {
        v147 = a2;
        v119 = (__int64)(a2 - v117) >> 3;
      }
      v9 = MiUpdatePageFileHighInPte(v9, v120 + v119);
    }
    LODWORD(v150) = v66;
  }
  v67 = v34 + 272;
  v68 = 0;
  LODWORD(v159) = *(_DWORD *)(v34 + 192) >> 9;
  v168 = 0;
  v69 = (__int64 *)(v34 + 320);
  v152 = v34 + 320;
  while ( 1 )
  {
    v70 = MI_READ_PTE_LOCK_FREE(v147);
    v71 = 1LL;
    if ( (v31 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v70 & 1) == 0 && (v70 & 0x400) == 0 && (v70 & 0x800) == 0 )
    {
      v72 = v70;
      if ( qword_140C4DF40 )
      {
        if ( (v70 & 0x10) != 0 )
          v72 = v70 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v72 = v70 & ~qword_140C4DF40;
      }
      v73 = v9;
      if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
        v73 = v9 & ~qword_140C4DF40;
      if ( ((v72 ^ v73) & 0xFFFFFFFF00000000uLL) == 0 && (v70 & 4) != 0 && ((v70 ^ v9) & 0xF000) == 0 )
      {
        v74 = MiIsPteInStore(v149, v70);
        if ( v74 == ((unsigned int)v71 & v31) )
        {
LABEL_95:
          v75 = v157;
          v168 += v71;
          v76 = v147;
          *v69 = (v157 + 0x58000000000LL) / 48;
          if ( v76 == a2 )
            LOBYTE(v77) = v159;
          else
            v77 = *(_DWORD *)(v34 + 192) >> 12;
          MiLockSetPfnPriority(v75, v77 & 7);
          v78 = *(_QWORD *)(v157 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v157, 0LL, 0);
          if ( v78 == 0xFFFFFFFFFLL )
            v157 = 0LL;
          else
            v157 = 48 * v78 - 0x58000000000LL;
          v69 = (__int64 *)v152;
          v71 = 1LL;
          goto LABEL_100;
        }
      }
    }
    if ( (v31 & 8) != 0 )
      break;
    v31 |= 2u;
    *v69 = qword_140C4ED78;
LABEL_100:
    v152 = (__int64)++v69;
    if ( v58 )
      MiAdvanceFaultList(v58);
    v147 += 8LL;
    v79 = v9;
    if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
      v79 = v9 & ~qword_140C4DF40;
    v9 = MiUpdatePageFileHighInPte(v9, v71 + HIDWORD(v79));
    v68 += v71;
    v80 = v150;
LABEL_106:
    if ( v68 >= v80 )
    {
      v81 = v150;
      v82 = v147;
      goto LABEL_108;
    }
  }
  v137 = a2;
  v82 = v147;
  if ( v147 <= a2 )
  {
    v69 = (__int64 *)(v34 + 320);
    v138 = (_QWORD *)(v34 + 320);
    if ( v68 )
    {
      v139 = v168;
      do
      {
        if ( *v138 != qword_140C4ED78 )
        {
          MiReleaseFreshPage(48LL * *v138 - 0x58000000000LL);
          --v139;
        }
        ++v138;
        --v68;
      }
      while ( v68 );
      v137 = a2;
      v67 = v34 + 272;
      v168 = v139;
      v58 = v151;
    }
    v31 &= ~2u;
    v152 = v34 + 320;
    v147 = v137;
    v140 = MI_READ_PTE_LOCK_FREE(v137);
    LOBYTE(v71) = 1;
    v9 = v140;
    v80 = 1;
    LODWORD(v150) = 1;
    goto LABEL_106;
  }
  v81 = v68;
  LODWORD(v150) = v68;
LABEL_108:
  v83 = v82 - 8LL * v81;
  v84 = *(_QWORD *)(v34 + 8 * ((__int64)(a2 - v83) >> 3) + 320);
  v85 = v71 & (v143 >> 4);
  if ( v85 )
    v86 = 0LL;
  else
    v86 = (__int64)(v83 << 25) >> 16;
  *(_QWORD *)v67 = 0LL;
  v87 = v81 << 12;
  *(_DWORD *)(v67 + 40) = v87;
  *(_QWORD *)(v67 + 32) = v86 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v67 + 44) = v86 & 0xFFF;
  *(_WORD *)(v67 + 10) = 66;
  *(_WORD *)(v67 + 8) = 8 * ((((unsigned __int64)(v86 & 0xFFF) + v87 + 4095) >> 12) + 6);
  if ( (v31 & 2) != 0 )
  {
    v141 = MiReduceMdl(v67);
    if ( v141 )
    {
      v83 += 8 * v141;
      if ( !v85 )
        *(_QWORD *)(v67 + 32) += v141 << 12;
    }
    v81 = *(_DWORD *)(v67 + 40) >> 12;
    LODWORD(v150) = v81;
  }
  else
  {
    *(_WORD *)(v67 + 10) = 16450;
  }
  v88 = MI_READ_PTE_LOCK_FREE(v83);
  v152 = v88;
  if ( v81 == 1 )
    v144 = v143 & 0xF8 | (*(_DWORD *)(v34 + 192) >> 9) & 7 | 8;
  else
    v144 = v143 & 0xDF;
  LOBYTE(v156) = v144;
  MiInitializeReadInProgressPfn(v153, (_QWORD *)(v34 + 320), v150, v83, v34, v144);
  if ( (v31 & 0x10) != 0 )
  {
    if ( qword_140C4DF40 && (v88 & 0x10) == 0 )
      v88 &= ~qword_140C4DF40;
    v142 = 48 * ((v88 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiFlowThroughInsertNode(v34, v142);
    v88 = *(_QWORD *)(v142 + 16);
    v152 = v88;
  }
  v91 = v170;
  if ( (v144 & 0x10) != 0 )
    MiObtainProtoReference(v170, 0LL, v89, v90);
  v92 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v34 + 232) = a2;
  v93 = v151;
  *(_QWORD *)(v34 + 168) = v92;
  if ( v93 )
  {
    if ( *(_BYTE *)v93 == 1 )
    {
      v115 = *(_DWORD *)(v34 + 192) | 8;
      *(_DWORD *)(v34 + 192) = v115;
      if ( (*(_DWORD *)(v93 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v34 + 192) = v115 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v34 + 192) |= 0x80u;
  if ( v154 && MiVadPageSizes[(*((_DWORD *)v154 + 12) >> 18) & 3] == 16 )
    *(_DWORD *)(v34 + 192) |= 0x100000u;
  if ( v91 )
    MiUnlockProtoPoolPage(v91, 0x11u);
  MiFreePageChain(v157);
  if ( v168 != v162 )
    MiReturnFaultCharges(v149, v162 - v168, v145);
  *v172 = v34;
  v94 = MiGetPagingFileOffset(&v152);
  v95 = (unsigned __int16)v88 >> 12;
  LODWORD(v163) = v94;
  v96 = v149[v95 + 868];
  if ( (v144 & 0x10) != 0 )
    *(_QWORD *)(v34 + 160) = v91;
  if ( (v31 & 1) != 0 )
  {
    *(_DWORD *)(v34 + 192) |= 0x100u;
    *(_QWORD *)(v34 + 96) = v94 | (unsigned __int64)(v95 << 60);
  }
  else
  {
    HIDWORD(v163) = 0;
    *(_QWORD *)(v34 + 96) = (unsigned __int64)(unsigned int)v163 << 12;
  }
  v97 = *(_DWORD *)(v34 + 192) | 0x200000;
  *(_QWORD *)(v34 + 200) = v96;
  *(_DWORD *)(v34 + 192) = v97;
  if ( *(_QWORD *)(v96 + 216)
    && (!v93 || *(_BYTE *)v93 != 1 || (*(_DWORD *)(v93 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v34 + 192) = v97 | 0x400000;
  }
  *(_QWORD *)(v34 + 240) = v83;
  result = 3221435187LL;
  *(_QWORD *)(v34 + 248) = 48 * v84 - 0x58000000000LL;
  return result;
}
