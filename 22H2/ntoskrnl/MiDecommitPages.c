/*
 * XREFs of MiDecommitPages @ 0x1402B4EB0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14032B734 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406991AC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x1402B6160 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402E31E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F1418 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x140304A94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiDeletePteWsleCluster @ 0x14031A2EC (MiDeletePteWsleCluster.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1403330E8 (MiTransferSoftwarePte.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x140366814 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403F3C60 (MiReducePteUseCount.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDecommitLargePte @ 0x14053CB20 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x140559DC8 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A805C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  _QWORD *v6; // r15
  unsigned int v8; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r10
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdi
  ULONG_PTR v28; // r13
  int v29; // r10d
  __int64 v30; // rbx
  unsigned __int8 v31; // al
  unsigned __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  LONG *v34; // rbx
  KIRQL v35; // al
  __int64 Flink; // rdx
  ULONG_PTR v37; // rdi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v43; // r9
  char *AnyMultiplexedVm; // rbx
  int v45; // eax
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r10
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r11
  __int64 v52; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v54; // rbx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r15
  unsigned __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  unsigned int v64; // ebx
  __int64 v65; // r15
  LONG *v66; // rax
  volatile int v67; // r8d
  unsigned int v68; // edi
  unsigned int v69; // r15d
  int v70; // edx
  int v71; // eax
  unsigned __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // r8
  struct _LIST_ENTRY *v76; // rax
  __int64 v77; // rax
  char v78; // r8^7
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int64 v83; // rbx
  __int64 v84; // r9
  int v85; // eax
  ULONG_PTR v86; // rdx
  unsigned __int64 v87; // r9
  _QWORD *CloneAddress; // rax
  unsigned __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  bool v94; // zf
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // r8
  ULONG_PTR v98; // r10
  __int64 v99; // rbx
  BOOL v100; // r15d
  unsigned __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdi
  __int64 v105; // rdx
  unsigned __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int16 v111; // ax
  int v112; // r12d
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // r9
  int v116; // r10d
  __int64 v117; // r10
  __int64 v118; // r11
  __int64 updated; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  _KTHREAD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  _DWORD *v125; // r9
  __int64 v126; // rbx
  int v128; // [rsp+30h] [rbp-D0h]
  __int64 v129; // [rsp+38h] [rbp-C8h]
  __int64 v131; // [rsp+48h] [rbp-B8h]
  int v132; // [rsp+50h] [rbp-B0h]
  unsigned int v133; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v134; // [rsp+68h] [rbp-98h]
  unsigned __int64 v135; // [rsp+68h] [rbp-98h]
  __int64 v136; // [rsp+70h] [rbp-90h]
  int v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h] BYREF
  __int64 v139; // [rsp+88h] [rbp-78h]
  unsigned __int64 v140; // [rsp+90h] [rbp-70h]
  ULONG_PTR v141; // [rsp+98h] [rbp-68h]
  int v142; // [rsp+A0h] [rbp-60h]
  int v143; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v144; // [rsp+A8h] [rbp-58h]
  __int64 v145; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v146; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v147; // [rsp+C0h] [rbp-40h]
  __int64 v148; // [rsp+C8h] [rbp-38h]
  __int64 v149; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v150; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v151; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v152; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v153; // [rsp+100h] [rbp+0h]
  _QWORD v154[22]; // [rsp+120h] [rbp+20h] BYREF
  int v155; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v156; // [rsp+1D4h] [rbp+D4h]
  __int16 v157; // [rsp+1D6h] [rbp+D6h]
  __int64 v158; // [rsp+1D8h] [rbp+D8h]
  __int64 v159; // [rsp+1E0h] [rbp+E0h]
  __int64 v160; // [rsp+1E8h] [rbp+E8h]
  __int128 v161; // [rsp+1F0h] [rbp+F0h]
  __int128 v162; // [rsp+200h] [rbp+100h]
  __int128 v163; // [rsp+210h] [rbp+110h]
  __int128 v164; // [rsp+220h] [rbp+120h]
  __int128 v165; // [rsp+230h] [rbp+130h]
  __int128 v166; // [rsp+240h] [rbp+140h]
  __int128 v167; // [rsp+250h] [rbp+150h]
  __int128 v168; // [rsp+260h] [rbp+160h]
  __int128 v169; // [rsp+270h] [rbp+170h]
  __int64 v170; // [rsp+280h] [rbp+180h]
  _QWORD v171[24]; // [rsp+290h] [rbp+190h] BYREF
  int v172; // [rsp+350h] [rbp+250h] BYREF
  __int16 v173; // [rsp+354h] [rbp+254h]
  __int16 v174; // [rsp+356h] [rbp+256h]
  __int64 v175; // [rsp+358h] [rbp+258h]
  __int64 v176; // [rsp+360h] [rbp+260h]
  __int64 v177; // [rsp+368h] [rbp+268h]
  _BYTE v178[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v141 = a2;
  v8 = 0;
  v145 = 0LL;
  v174 = 0;
  v144 = a4;
  memset(v178, 0, sizeof(v178));
  v175 = 256LL;
  v173 = 0;
  v172 = 1;
  v153 = 0LL;
  DWORD2(v153) = 2;
  v152 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v129 = 1LL;
  v137 = 0;
  v10 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned __int8 *)(a4 + 33);
  v14 = v10;
  v149 = v10;
  v15 = v10;
  v16 = 0xFFFFF68000000000uLL;
  v17 = *(_DWORD *)(a4 + 52);
  v18 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v13 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v19 = (unsigned int)v17;
  LODWORD(v19) = v17 & 0x7FFFFFFF;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v147 = v18;
  if ( v20 == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F));
    v149 = v14;
    v15 = v14;
  }
  else if ( v17 >= 0 )
  {
    v21 = *(_DWORD *)(a4 + 48);
    if ( (v21 & 0x100000) == 0 || (v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0 )
      v15 = 0LL;
    v147 = 0LL;
    v137 = MiVadPureReserve(a4);
  }
  v22 = *(unsigned int *)(a4 + 48);
  v23 = *(_DWORD *)(a4 + 48) & 0x500000;
  v148 = v12;
  v133 = 3;
  if ( v23 == 5242880 )
  {
    v24 = (v22 >> 18) & 3;
    v25 = 16LL;
    v129 = MiVadPageSizes[v24];
    if ( v129 != 16 )
      v25 = v12;
    v133 = MiVadPageIndices[v24];
    v148 = v25;
    v11 = 2LL;
  }
  v26 = v11;
  v136 = 0LL;
  if ( a5 )
    v26 = 0;
  v27 = 0LL;
  v142 = v26;
  v28 = v16 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v132 = v12;
  v134 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v29 = v12;
  v30 = a3 + 1664;
  v128 = 0;
  v131 = a3 + 1664;
  v139 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v31 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v31 < 6u )
  {
    if ( v31 == 2 )
      v34 = &dword_140C4F780;
    else
      v34 = (LONG *)(a3 + 1856);
    v35 = ExAcquireSpinLockShared(v34);
    if ( v34[1] )
      CurrentIrql = (unsigned int)_InterlockedExchange(v34 + 1, 0);
    v29 = v132;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
    LOBYTE(v140) = v35;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v140 = CurrentIrql;
    __writecr8(v11);
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0
      && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << CurrentIrql) & 4;
    }
  }
  if ( v28 > v141 )
    goto LABEL_258;
  while ( 1 )
  {
    Flink = 0LL;
    v37 = v28;
    if ( v29 == 1 )
    {
      Flink = (unsigned int)v12;
LABEL_29:
      v38 = 0x7FFFFFFFF8LL;
      v39 = 0xFFFFF68000000000uLL;
      goto LABEL_30;
    }
    CurrentIrql = v133;
    if ( v133 > 1 )
      goto LABEL_29;
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    CurrentIrql = 2 - v133;
    do
    {
      v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --CurrentIrql;
    }
    while ( CurrentIrql );
LABEL_30:
    if ( (v37 & 0xFFF) == 0 || (_DWORD)Flink )
      break;
    v49 = 0LL;
LABEL_69:
    v50 = *(_QWORD *)v37;
    v51 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(CurrentIrql, Flink, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL)
      && (v50 & 1) != 0
      && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v52 = *(_QWORD *)(Flink + 8 * ((v37 >> 3) & 0x1FF));
        Flink = v50 | 0x20;
        if ( (v52 & 0x20) == 0 )
          Flink = v50;
        v50 = Flink;
        if ( (v52 & 0x42) != 0 )
          v50 = Flink | 0x42;
      }
    }
    v150 = v50;
    if ( !v50 )
    {
      if ( v28 > v147 )
        v6[3] += v129;
      if ( v15 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v37 << 25) - (v39 << 25)) >> 16, Flink);
        v54 = v148;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v148, v55, v56);
        v58 = v54;
        while ( 1 )
        {
          v59 = v15;
          if ( (unsigned int)MiPteInShadowRange(v37, v57) )
          {
            if ( (unsigned int)MiPteHasShadow(v60, v57, v61, v62) )
            {
              if ( !HIBYTE(word_140C4E008) && (v15 & 1) != 0 )
                v59 = v15 | 0x8000000000000000uLL;
              *(_QWORD *)v37 = v59;
              MiWritePteShadow(v37, v59);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v15 & 1) != 0 )
            {
              v59 = v15 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v37 = v59;
LABEL_95:
          v37 += 8LL;
          if ( !--v58 )
          {
            v14 = v149;
            break;
          }
        }
      }
LABEL_97:
      v63 = v129;
LABEL_98:
      v64 = 1;
      goto LABEL_99;
    }
    if ( (v50 & 1) != 0 )
    {
      if ( v129 != 1 )
        goto LABEL_109;
      v143 = v49;
      v72 = v38 & (v134 >> 9);
      v73 = *(_QWORD *)(v72 + v39);
      v74 = v72 + v39;
      if ( v74 >= 0xFFFFF6FB7DBED000uLL
        && v74 <= v51
        && (unsigned int)MiPteHasShadow(v72, v73, v74, v38)
        && (v73 & 1) != 0
        && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
      {
        v76 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v76 )
        {
          v77 = *((_QWORD *)&v76->Flink + ((v75 >> 3) & 0x1FF));
          v78 = HIBYTE(v73);
          if ( (v77 & 0x20) == 0 )
            v78 = HIBYTE(v73);
          HIBYTE(v73) = v78;
          if ( (v77 & 0x42) != 0 )
            HIBYTE(v73) = v78;
        }
      }
      if ( (HIBYTE(v73) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v152, v131, v28) )
      {
        MiTerminateWsle(v131, v134, 0LL, &v143);
        MiInsertTbFlushEntry(&v172, v134, 1LL, 0LL);
        v83 = v50 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v150 = v83;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v80, v79, v81, v82) )
        {
          *(_QWORD *)v28 = v83;
          MiWritePteShadow(v28, v83);
        }
        else
        {
          *(_QWORD *)v28 = v83;
        }
      }
      if ( HIDWORD(v175) != (_DWORD)v175 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster(&v152, a3, v15, v6) )
        v8 = 1;
      v128 = v8;
      v71 = MiDeletePteList((__int64)&v172, a3, v15, v6, 1);
      v64 = 1;
LABEL_180:
      v94 = v71 == 0;
      v63 = v129;
      if ( !v94 )
      {
        v8 = 1;
        v128 = 1;
      }
      goto LABEL_99;
    }
    if ( (v50 & 0x400) != 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v50) )
      {
        v85 = MiDecrementCombinedPte(v131, v84);
LABEL_138:
        if ( v85 == 3 )
        {
          ++v6[1];
        }
        else if ( v85 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !(unsigned int)MiIsPrototypePteVadLookup(v50) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v87);
        if ( CloneAddress )
        {
          v85 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v86);
          goto LABEL_138;
        }
      }
      v89 = v15;
      if ( (unsigned int)MiPteInShadowRange(v28, v86) )
      {
        if ( (unsigned int)MiPteHasShadow(v91, v90, v92, v93) )
        {
          if ( !HIBYTE(word_140C4E008) && (v15 & 1) != 0 )
            v89 = v15 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v89;
          MiWritePteShadow(v28, v89);
          v94 = v15 == 0;
          goto LABEL_178;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v89 = v15 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v89;
      v94 = v15 == 0;
LABEL_178:
      v64 = 1;
      if ( !v94 )
        goto LABEL_225;
      v71 = MiReducePteUseCount(v28, 1LL);
      goto LABEL_180;
    }
    if ( (v50 & 0x800) != 0 )
    {
      if ( v129 != 1 )
      {
LABEL_109:
        v71 = MiDecommitLargePte(v144, v37, v15, (_DWORD)v6, (__int64)&v172);
        v64 = 1;
        goto LABEL_180;
      }
      v145 = v49;
      v95 = v49;
      v96 = MiLockTransitionLeafPage(v28);
      v98 = v96;
      if ( !v96 )
        goto LABEL_254;
      v99 = 0LL;
      v100 = 1;
      if ( !*(_WORD *)(v96 + 32) )
      {
        v95 = *(_QWORD *)(v96 + 16);
        v101 = *(_QWORD *)(v96 + 40);
        v99 = v95;
        v145 = v95;
        v102 = *(_QWORD *)(qword_140C4E648 + 8 * ((v101 >> 39) & 0x3FF));
        v139 = v102;
        if ( (v95 & 2) != 0 )
          v100 = MI_IS_PTE_IN_WS_SWAP_SET(v102, &v145) != 0;
      }
      LOBYTE(v97) = 17;
      if ( (unsigned int)MiDeleteTransitionPte(v28, v98, v97, 0) == 3 )
        ++a6[1];
      if ( v99 )
        MiReleasePageFileSpace(v139, v95, v100);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v104 = v15;
      if ( !v100 )
      {
        v105 = *(_QWORD *)(v139 + 8LL * ((unsigned __int16)v99 >> 12) + 6944);
        if ( qword_140C4DF40 && (v99 & 0x10) == 0 )
          v99 &= ~qword_140C4DF40;
        v104 = MiTransferSoftwarePte(v14, v105, HIDWORD(v99), 2LL);
      }
      v106 = v104;
      if ( (unsigned int)MiPteInShadowRange(v28, v103) )
      {
        if ( (unsigned int)MiPteHasShadow(v108, v107, v109, v110) )
        {
          if ( !HIBYTE(word_140C4E008) && (v104 & 1) != 0 )
            v106 = v104 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v106;
          MiWritePteShadow(v28, v106);
          goto LABEL_177;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v104 & 1) != 0 )
        {
          v106 = v104 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v106;
LABEL_177:
      v94 = v104 == 0;
      goto LABEL_178;
    }
    if ( ((v50 >> 5) & 0x1F) == 0x10 )
    {
      v63 = v129;
      v6[3] += v129;
      goto LABEL_98;
    }
    v111 = v50;
    if ( qword_140C4DF40 && (v50 & 0x10) == 0 )
      v111 = v50 & ~(_WORD)qword_140C4DF40;
    if ( (v111 & 0x400) != 0 || (v111 & 0x800) != 0 || (v111 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v112 = 1;
    v113 = v15;
    v114 = *(unsigned __int16 *)(a3 + 1838);
    v115 = *(_QWORD *)(qword_140C4E648 + 8 * v114);
    v139 = v115;
    if ( ((v50 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v115, &v150) )
    {
      v112 = v116;
      v138 = v14;
      MiSetNonResidentPteHeat((unsigned __int64 *)&v138, 0);
      v113 = v138;
      if ( (v14 & 0x400) == 0 )
      {
        v113 = v138 & 0xFFFFFFFFFFFFFFF9uLL;
        v138 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v118 )
      {
        if ( v113 )
          updated = MiUpdatePageFileHighInPte(v113, v117);
        else
          updated = MiSwizzleInvalidPte(v117 << 32);
        v113 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v39 << 12)) & 0xF000 | 2;
        v138 = v113;
      }
    }
    v120 = v113;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v114, v113, v39, v115) )
      {
        if ( !HIBYTE(word_140C4E008) && (v113 & 1) != 0 )
          v120 |= 0x8000000000000000uLL;
        *(_QWORD *)v28 = v120;
        MiWritePteShadow(v28, v120);
        goto LABEL_211;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v113 & 1) != 0 )
      {
        v120 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v28 = v120;
LABEL_211:
    v146 = v50;
    if ( (v50 & 4) != 0 )
    {
      v121 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v146);
      if ( !v112 )
        v121 &= ~2uLL;
    }
    else if ( v112 && ((v50 >> 1) & 1) != 0 )
    {
      v121 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v146);
    }
    else
    {
      v121 = 0LL;
    }
    v146 = v121;
    if ( v121 )
      MiReleasePageFileInfo(v139, v121, 0LL);
    v64 = 1;
    if ( v113 )
    {
      v8 = v128;
LABEL_225:
      v63 = v129;
      goto LABEL_99;
    }
    v8 = v128;
    v94 = (unsigned int)MiReducePteUseCount(v28, 1LL) == 0;
    v63 = v129;
    if ( !v94 )
      v8 = 1;
    v128 = v8;
LABEL_99:
    v28 += 8 * v63;
    if ( (v28 & 0x78) == 0 )
    {
      v65 = a3 + 1664;
      v66 = &dword_140C4F780;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v66 = (LONG *)(a3 + 1856);
      if ( (*v66 & 0x40000000) != 0 )
        goto LABEL_244;
    }
    CurrentIrql = (unsigned __int64)KeGetCurrentPrcb();
    v67 = *(_DWORD *)(CurrentIrql + 12588);
    v68 = *(_DWORD *)(CurrentIrql + 31724);
    v69 = *(_DWORD *)(CurrentIrql + 32412);
    if ( (v67 & 1) == 0 )
    {
      v70 = 0;
      if ( (v67 & 0x1E) != 0 )
      {
        v64 = 2;
      }
      else if ( *(_BYTE *)(CurrentIrql + 12585) )
      {
        v64 = 3;
      }
      else
      {
        v122 = *(_KTHREAD **)(CurrentIrql + 16);
        if ( !v122 || v122 == *(_KTHREAD **)(CurrentIrql + 8) )
          goto LABEL_233;
        v64 = 4;
      }
LABEL_240:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v64, v68, v69);
      if ( !v64 )
        goto LABEL_253;
      v65 = a3 + 1664;
LABEL_244:
      if ( (unsigned int)MiDeletePteWsleCluster(&v152, a3, v15, a6) )
        v8 = 1;
      v128 = v8;
      if ( HIDWORD(v175) )
      {
        if ( (unsigned int)MiDeletePteList((__int64)&v172, a3, v15, a6, 1) )
          v8 = 1;
        v128 = v8;
      }
      if ( v136 )
      {
        MiUnlockPageTableInternal(v65, v136);
        v136 = 0LL;
      }
      MiUnlockWorkingSetShared(v65, v140);
      v132 = 1;
      MiLockWorkingSetShared(v65, v123, v124, v125);
      goto LABEL_253;
    }
    v70 = 1;
    if ( v69 > 7 )
    {
      if ( *(_BYTE *)(CurrentIrql + 12585) )
        goto LABEL_240;
LABEL_235:
      if ( (v67 & 0x1E) != 0 )
      {
        v64 = 5;
        goto LABEL_240;
      }
      if ( *(_QWORD *)(CurrentIrql + 8) != *(_QWORD *)(CurrentIrql + 24) )
      {
        v64 = 6;
        goto LABEL_240;
      }
LABEL_239:
      _disable();
      v64 = 0;
      *(_DWORD *)(CurrentIrql + 31724) = 0;
      *(_DWORD *)(CurrentIrql + 32412) = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentIrql);
      _enable();
      goto LABEL_240;
    }
LABEL_233:
    if ( v68 > 7 )
    {
      if ( !v70 )
        goto LABEL_239;
      goto LABEL_235;
    }
LABEL_253:
    v134 += v129 << 12;
LABEL_254:
    v6 = a6;
    if ( v28 > v141 )
      goto LABEL_257;
    v29 = v132;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
  }
  memset(v171, 0, 0xB8uLL);
  if ( *((_QWORD *)&v152 + 1) )
  {
    LODWORD(v171[0]) = 1;
    v171[2] = 0LL;
    v171[3] = 0LL;
    WORD2(v171[0]) = 0;
    LODWORD(v171[1]) = 20;
    MiInsertTbFlushEntry(v171, (__int64)(*((_QWORD *)&v152 + 1) << 25) >> 16, v153, 0LL);
    MiTerminateWsleCluster(&v152);
    v40 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)v171, a3, v15, v6, 0) )
      v8 = 1;
    v128 = v8;
  }
  else
  {
    v40 = a3;
  }
  if ( HIDWORD(v175) )
  {
    if ( (unsigned int)MiDeletePteList((__int64)&v172, v40, v15, v6, 1) )
      v8 = 1;
    v128 = v8;
  }
  if ( v136 )
  {
    MiUnlockPageTableInternal(v30, v136);
    v136 = 0LL;
  }
  if ( !v137 )
  {
    v37 = v28;
    if ( v133 <= 1 )
    {
      v48 = 2 - v133;
      do
      {
        v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v48;
      }
      while ( v48 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v37, 0LL, (*(_DWORD *)(v144 + 48) >> 12) & 0x3F, v140, v142);
    goto LABEL_67;
  }
  v151 = 0LL;
  memset((char *)v154 + 2, 0, 0xAEuLL);
  v135 = (__int64)(v28 << 25) >> 16;
  v41 = (__int64)(v141 << 25) >> 16;
  LOWORD(v154[0]) = 2145;
  LeafVa = MiGetLeafVa(v135);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v45 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v43, 0);
  if ( v45 )
  {
    CurrentIrql = (unsigned int)(v45 - 1);
    LODWORD(v151) = v45 - 1;
    v46 = ((v135 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v151 + 1) = v46;
  }
  else
  {
    LOWORD(v154[0]) |= 4u;
    v154[21] = &v151;
    v154[2] = 0LL;
    v154[3] = AnyMultiplexedVm;
    BYTE2(v154[0]) = BYTE2(v154[0]) & 0xE3 | 4;
    v154[20] = MiGetNextPageTableTail;
    BYTE6(v154[0]) = v140;
    v154[4] = (__int64)(v28 << 25) >> 16;
    v154[5] = v41;
    MiWalkPageTables((__int64)v154);
    CurrentIrql = (unsigned int)v151;
    v46 = *((_QWORD *)&v151 + 1);
  }
  Flink = a6[3];
  if ( v46 )
  {
    v47 = v46 - v28;
    v28 = v46;
    a6[3] = Flink + (v47 >> 3);
    v37 = v46;
    if ( (_DWORD)CurrentIrql )
    {
      v37 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned int)CurrentIrql > 1 )
      {
        CurrentIrql = (unsigned int)(CurrentIrql - 1);
        do
        {
          v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --CurrentIrql;
        }
        while ( CurrentIrql );
      }
    }
    v6 = a6;
    v134 = (__int64)(v46 << 25) >> 16;
LABEL_67:
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v136 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v49 = 0LL;
    v132 = 0;
    goto LABEL_69;
  }
  v6 = a6;
  a6[3] = Flink + ((__int64)(v141 - v28) >> 3) + 1;
LABEL_257:
  v27 = v136;
LABEL_258:
  v157 = 0;
  v170 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v169 = 0LL;
  if ( *((_QWORD *)&v152 + 1) )
  {
    v156 = 0;
    v159 = 0LL;
    v160 = 0LL;
    v158 = 20LL;
    v155 = 1;
    MiInsertTbFlushEntry(&v155, (__int64)(*((_QWORD *)&v152 + 1) << 25) >> 16, v153, 0LL);
    MiTerminateWsleCluster(&v152);
    v126 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)&v155, a3, v15, v6, 0) )
      v8 = 1;
  }
  else
  {
    v126 = a3;
  }
  if ( HIDWORD(v175) && (unsigned int)MiDeletePteList((__int64)&v172, v126, v15, v6, 1) )
    v8 = 1;
  if ( v27 )
    MiUnlockPageTableInternal(v131, v27);
  MiUnlockWorkingSetShared(v131, v140);
  return v8;
}
