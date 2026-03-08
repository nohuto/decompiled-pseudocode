/*
 * XREFs of MiDecommitPages @ 0x140329B10
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14065A994 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14029DAB8 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCombinedPteEx @ 0x14029DAF4 (MiDecrementCombinedPteEx.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiReducePteUseCount @ 0x1402D0E3C (MiReducePteUseCount.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiDeletePteWsleCluster @ 0x14032A9F0 (MiDeletePteWsleCluster.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FB09C (EtwTraceShouldYieldProcessor.c)
 *     MiFlushGraphicsPtes @ 0x140623FF8 (MiFlushGraphicsPtes.c)
 *     MiDecommitLargePte @ 0x1406334B0 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x14066176C (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r15
  bool i; // cc
  int v28; // ecx
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  char v34; // di
  __int64 v35; // rax
  BOOL v36; // r15d
  struct _KPRCB *CurrentPrcb; // rax
  int v38; // r8d
  __int64 v39; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  _KTHREAD *NextThread; // rcx
  __int16 v44; // ax
  int v45; // r12d
  __int64 v46; // rdi
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  ULONG_PTR v49; // rbx
  int v50; // edx
  unsigned __int64 v51; // rbx
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rax
  __int64 v55; // rbx
  _DWORD *v56; // rax
  __int64 v57; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v59; // r9
  char *AnyMultiplexedVm; // rdi
  int v61; // eax
  unsigned int v62; // ecx
  unsigned __int64 v63; // r8
  _QWORD *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // r15d
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned int v71; // ebx
  __int64 v72; // rbx
  __int64 v73; // rax
  ULONG_PTR v74; // r10
  __int64 v75; // rdi
  __int64 v76; // r15
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rbx
  unsigned __int64 v80; // rdi
  __int64 v81; // rax
  struct _KPRCB *v82; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v84; // eax
  signed __int32 v85; // ett
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v90; // rax
  int v91; // eax
  int v92; // ecx
  struct _LIST_ENTRY *v93; // rcx
  __int64 v94; // rcx
  struct _LIST_ENTRY *v95; // r8
  __int64 v96; // rcx
  __int64 v97; // r8
  int v98; // eax
  int v99; // ecx
  __int64 v101; // r9
  int v102; // eax
  unsigned __int64 v103; // r9
  _QWORD *CloneAddress; // rax
  ULONG_PTR v105; // rdx
  unsigned __int64 v106; // rbx
  __int64 v107; // r8
  __int64 v108; // r8
  unsigned __int64 v109; // rax
  struct _LIST_ENTRY *v110; // rcx
  __int64 v111; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v113; // [rsp+30h] [rbp-D0h]
  int v114; // [rsp+34h] [rbp-CCh]
  __int64 v115; // [rsp+38h] [rbp-C8h]
  __int64 v116; // [rsp+48h] [rbp-B8h]
  int v117; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v118; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v119; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v121; // [rsp+68h] [rbp-98h]
  __int64 v122; // [rsp+70h] [rbp-90h]
  unsigned int v123; // [rsp+78h] [rbp-88h]
  int v124; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v125; // [rsp+80h] [rbp-80h]
  BOOL v126; // [rsp+88h] [rbp-78h]
  int v127; // [rsp+8Ch] [rbp-74h]
  __int64 v128; // [rsp+90h] [rbp-70h]
  __int64 v129; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v130; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v131; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v132; // [rsp+B8h] [rbp-48h]
  int v133; // [rsp+C8h] [rbp-38h] BYREF
  int v134; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v135; // [rsp+D0h] [rbp-30h]
  __int64 v136; // [rsp+D8h] [rbp-28h]
  __int64 v137; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v138; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v139; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v140; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v141; // [rsp+100h] [rbp+0h] BYREF
  __int64 v142; // [rsp+110h] [rbp+10h] BYREF
  __int64 v143; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v144[22]; // [rsp+120h] [rbp+20h] BYREF
  int v145; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v146; // [rsp+1D4h] [rbp+D4h]
  __int16 v147; // [rsp+1D6h] [rbp+D6h]
  __int64 v148; // [rsp+1D8h] [rbp+D8h]
  __int64 v149; // [rsp+1E0h] [rbp+E0h]
  __int64 v150; // [rsp+1E8h] [rbp+E8h]
  _BYTE v151[2040]; // [rsp+1F0h] [rbp+F0h] BYREF

  v138 = a2;
  v147 = 0;
  v137 = a4;
  v129 = 0LL;
  memset(v151, 0, sizeof(v151));
  v9 = *(_DWORD *)(a4 + 48);
  v148 = 256LL;
  v145 = 1;
  v146 = 0;
  v132 = 0LL;
  v117 = v9 & 0x2200000;
  v131 = 0LL;
  DWORD2(v132) = 2;
  v10 = 1LL;
  v149 = 0LL;
  v150 = 0LL;
  v115 = 1LL;
  v126 = 0;
  v127 = 0;
  v11 = MiSwizzleInvalidPte(512LL);
  v14 = *(unsigned __int8 *)(a4 + 33);
  v15 = v11;
  v135 = v11;
  v16 = v11;
  v17 = 0xFFFFF68000000000uLL;
  v18 = *(_DWORD *)(a4 + 52);
  v19 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v14 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v20 = *(unsigned __int8 *)(a4 + 34);
  v139 = v19;
  v21 = (unsigned int)v18;
  LODWORD(v21) = v18 & 0x7FFFFFFF;
  if ( (v21 | (v20 << 31)) == 0x7FFFFFFFELL )
  {
    v15 = MiSwizzleInvalidPte(32LL * (((unsigned int)v12 >> 7) & 0x1F));
    v135 = v15;
    v16 = v15;
  }
  else if ( v18 >= 0 )
  {
    if ( (v12 & 0x6200000) != 0x4200000 )
      v16 = 0LL;
    v139 = 0LL;
    v126 = MiVadPureReserve(a4);
  }
  v136 = v13;
  v123 = 3;
  if ( (v12 & 0xA00000) == 0xA00000 )
  {
    v22 = (v12 >> 19) & 3;
    v10 = MiVadPageSizes[v22];
    v123 = MiVadPageIndices[v22];
    v23 = 16LL;
    v115 = v10;
    if ( v10 != 16 )
      v23 = v13;
    v136 = v23;
  }
  v24 = 0LL;
  v121 = 0LL;
  v116 = 0LL;
  if ( !a5 )
    v127 = 2;
  v125 = 0LL;
  v25 = v17 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v26 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v124 = v13;
  v118 = v26;
  v114 = 0;
  v122 = a3 + 1664;
  v128 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v113 = MiLockWorkingSetShared(a3 + 1664);
  for ( i = v25 <= a2; ; i = v25 <= v138 )
  {
    if ( !i )
    {
      v64 = a6;
      goto LABEL_95;
    }
    v28 = 0;
    v29 = v25;
    if ( v124 )
    {
      v28 = 1;
    }
    else if ( v123 <= 1 )
    {
      v86 = 2 - v123;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v86;
      }
      while ( v86 );
      v15 = v135;
      v10 = v115;
    }
    if ( (v29 & 0xFFF) == 0 || v28 )
      break;
LABEL_18:
    v30 = *(_QWORD *)v29;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v90 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
        if ( (v90 & 0x20) != 0 )
          v30 |= 0x20uLL;
        if ( (v90 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    v140 = v30;
    if ( !v30 )
    {
      if ( v25 > v139 )
        a6[4] += v10;
      if ( v16 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v29 << 25) >> 16);
        v53 = v136;
        MiIncreaseUsedPtesCount(UsedPtesHandle, v136);
        v54 = 0LL;
        do
          *(_QWORD *)(v29 + 8 * v54++) = v16;
        while ( v54 < v53 );
      }
LABEL_34:
      v25 += 8 * v10;
      if ( (v25 & 0x78) == 0 )
      {
        v55 = a3 + 1664;
        v56 = (*(_BYTE *)(a3 + 1848) & 7) == 2 ? &unk_140C69E00 : (_DWORD *)(a3 + 1856);
        if ( (*v56 & 0x40000000) != 0 )
        {
LABEL_114:
          if ( (unsigned int)MiDeletePteWsleCluster(&v131, a3, v16, a6) )
            v114 = 1;
          if ( v117 == 35651584 && v116 )
          {
            MiFlushGraphicsPtes(v121, v116);
            v121 = 0LL;
            v116 = 0LL;
          }
          if ( HIDWORD(v148) )
          {
            LODWORD(BugCheckParameter4) = 1;
            if ( (unsigned int)MiDeletePteList((__int64)&v145, a3, v16, a6, BugCheckParameter4) )
              v114 = 1;
          }
          if ( v125 )
          {
            MiUnlockPageTableInternal(v55, v125);
            v125 = 0LL;
          }
          MiUnlockWorkingSetShared(v55, v113);
          v124 = 1;
          MiLockWorkingSetShared(v55);
          goto LABEL_41;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v38 = 0;
      v39 = 0LL;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v38 = 1;
        if ( DpcTimeCount <= 7 )
          goto LABEL_40;
        if ( CurrentPrcb->QuantumEnd )
        {
          v71 = 1;
          goto LABEL_110;
        }
      }
      else if ( CurrentPrcb->NestingLevel )
      {
        v39 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_41;
        if ( CurrentPrcb->QuantumEnd )
        {
          v71 = 7;
          goto LABEL_110;
        }
      }
      else
      {
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v71 = 2;
LABEL_110:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v71, DpcWatchdogCount, DpcTimeCount, v39);
          if ( v71 )
          {
            v55 = a3 + 1664;
            goto LABEL_114;
          }
          goto LABEL_41;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v71 = 3;
          goto LABEL_110;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v71 = 4;
          goto LABEL_110;
        }
LABEL_40:
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_41:
          v26 = (v10 << 12) + v118;
          v118 = v26;
          goto LABEL_42;
        }
        if ( !v38 )
        {
LABEL_155:
          _disable();
          v71 = 0;
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          v82 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v82->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v84 = *SchedulerAssist;
            do
            {
              v85 = v84;
              v84 = _InterlockedCompareExchange(SchedulerAssist, v84 & 0xFFDFFFFF, v84);
            }
            while ( v85 != v84 );
            if ( (v84 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v82);
          }
          _enable();
          goto LABEL_110;
        }
      }
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v71 = 5;
        goto LABEL_110;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v71 = 6;
        goto LABEL_110;
      }
      goto LABEL_155;
    }
    if ( (v30 & 1) != 0 )
    {
      v31 = v136 + v116;
      if ( !v121 )
        v121 = v29;
      if ( v115 != 1 )
      {
        v91 = MiDecommitLargePte(v137, v29, v16, (_DWORD)a6, (__int64)&v145);
        v92 = v114;
        v116 = v31;
        if ( v91 )
          v92 = 1;
        v114 = v92;
        goto LABEL_33;
      }
      v133 = 0;
      if ( (HIBYTE(*(_QWORD *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF) == 8 )
      {
LABEL_65:
        MiTerminateWsle(v122, v26, 0LL, &v133);
        MiInsertTbFlushEntry((__int64)&v145, v26, 1LL, 0);
        v51 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v140 = v51;
        if ( MiPteInShadowRange(v25) && MiPteHasShadow() )
        {
          *(_QWORD *)v25 = v51;
          MiWritePteShadow(v25, v51, v97);
        }
        else
        {
          *(_QWORD *)v25 = v51;
        }
      }
      else
      {
        v32 = (((unsigned __int64)((__int64)(v25 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = *(_QWORD *)v32;
        if ( v32 >= 0xFFFFF6FB7DBED000uLL
          && v32 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v93 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v93 )
          {
            v94 = *((_QWORD *)&v93->Flink + ((v32 >> 3) & 0x1FF));
            if ( (v94 & 0x20) != 0 )
              v33 |= 0x20uLL;
            if ( (v94 & 0x42) != 0 )
              v33 |= 0x42uLL;
          }
        }
        v34 = HIBYTE(v33) & 0xF | (16 * ((v33 >> 60) & 7));
        v35 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v95 )
          {
            v96 = *((_QWORD *)&v95->Flink + ((v25 >> 3) & 0x1FF));
            if ( (v96 & 0x20) != 0 )
              v35 |= 0x20uLL;
            if ( (v96 & 0x42) != 0 )
              v35 |= 0x42uLL;
          }
        }
        v142 = v35;
        v36 = *(_QWORD *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v142) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL
                        + 40) >= 0LL;
        if ( *((_QWORD *)&v131 + 1) )
        {
          if ( v25 == *((_QWORD *)&v131 + 1) + 8LL * (_QWORD)v132 && v34 == BYTE12(v132) && v36 == (BYTE8(v132) & 1) )
          {
            *(_QWORD *)&v132 = v132 + 1;
            goto LABEL_32;
          }
          if ( (BYTE8(v132) & 2) != 0 )
          {
            v26 = v118;
            goto LABEL_65;
          }
          MiTerminateWsleCluster((__int64 *)&v131);
        }
        *(_QWORD *)&v131 = a3 + 1664;
        *(_QWORD *)&v132 = 1LL;
        *((_QWORD *)&v131 + 1) = v25;
        BYTE12(v132) = v34;
        DWORD2(v132) = v36 | DWORD2(v132) & 0xFFFFFFFE;
      }
LABEL_32:
      v116 = v31;
      if ( HIDWORD(v148) == (_DWORD)v148 - 1 )
      {
        v98 = MiDeletePteWsleCluster(&v131, a3, v16, a6);
        v99 = v114;
        v116 = v31;
        if ( v98 )
          v99 = 1;
        v114 = v99;
        if ( v117 == 35651584 )
        {
          v116 = v31;
          if ( v31 )
          {
            MiFlushGraphicsPtes(v121, v31);
            v121 = 0LL;
            v116 = 0LL;
          }
        }
        LODWORD(BugCheckParameter4) = 1;
        v10 = 1LL;
        if ( (unsigned int)MiDeletePteList((__int64)&v145, a3, v16, a6, BugCheckParameter4) )
          v114 = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    if ( (v30 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v30) )
      {
        v102 = MiDecrementCombinedPteEx(v122, v101, 0);
LABEL_237:
        if ( v102 == 3 )
        {
          ++a6[1];
        }
        else if ( v102 == 5 )
        {
          ++a6[3];
        }
      }
      else if ( !MiIsPrototypePteVadLookup(v30) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v103);
        if ( CloneAddress )
        {
          v102 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v105);
          goto LABEL_237;
        }
      }
      v106 = v16;
      if ( MiPteInShadowRange(v25) )
      {
        if ( MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C6697C) && (v16 & 1) != 0 )
            v106 = v16 | 0x8000000000000000uLL;
          *(_QWORD *)v25 = v106;
          MiWritePteShadow(v25, v106, v107);
          goto LABEL_251;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v16 & 1) != 0 )
        {
          v106 = v16 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v25 = v106;
LABEL_251:
      if ( !v16 && MiReducePteUseCount(v25, 1u) )
        v114 = 1;
      goto LABEL_34;
    }
    if ( (v30 & 0x800) == 0 )
    {
      if ( ((v30 >> 5) & 0x1F) == 0x10 )
      {
        a6[4] += v10;
        goto LABEL_34;
      }
      v44 = v30;
      if ( qword_140C657C0 && (v30 & 0x10) == 0 )
        v44 = v30 & ~(_WORD)qword_140C657C0;
      if ( (v44 & 0x400) != 0 || (v44 & 0x800) != 0 || (v44 & 4) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v45 = 1;
      v46 = v16;
      v128 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a3 + 1838));
      if ( ((v30 >> 1) & 1) != 0
        && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(
                            *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a3 + 1838)),
                            &v140) )
      {
        v45 = 0;
        HIDWORD(v70) = HIDWORD(v30);
        if ( qword_140C657C0 && (v30 & 0x10) == 0 )
          v70 = v30 & ~qword_140C657C0;
        v46 = MiTransferSoftwarePte(
                v15,
                *(_QWORD *)(v69 + 8LL * ((unsigned __int16)v30 >> 12) + 17056),
                HIDWORD(v70),
                2LL);
      }
      v130 = v30;
      *(_QWORD *)v25 = v46;
      if ( (v30 & 4) != 0 )
      {
        v109 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130);
        if ( !v45 )
          v109 &= ~2uLL;
      }
      else
      {
        if ( !v45 || ((v30 >> 1) & 1) == 0 )
        {
          v130 = 0LL;
          goto LABEL_57;
        }
        v109 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130);
      }
      v130 = v109;
      if ( v109 )
        MiReleasePageFileInfo(v128, v109, 0);
LABEL_57:
      if ( !v46 )
      {
        v47 = ((((__int64)(v25 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
        v48 = *(_QWORD *)v47;
        if ( v47 >= 0xFFFFF6FB7DBED000uLL
          && v47 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v48 & 1) != 0
          && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
        {
          v110 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v110 )
          {
            v111 = *((_QWORD *)&v110->Flink + ((v47 >> 3) & 0x1FF));
            if ( (v111 & 0x20) != 0 )
              v48 |= 0x20uLL;
            if ( (v111 & 0x42) != 0 )
              v48 |= 0x42uLL;
          }
        }
        v143 = v48;
        v49 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v143) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        if ( (*(_DWORD *)(v49 + 16) & 0x3FF0000) == 0 )
          KeBugCheckEx(0x1Au, 0x41790uLL, v49, HIWORD(*(_DWORD *)(v49 + 16)) & 0x3FF, 1uLL);
        v134 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v134);
          while ( *(__int64 *)(v49 + 24) < 0 );
        }
        v50 = ((*(_QWORD *)(v49 + 16) >> 16) & 0x3FF) - 1;
        *(_QWORD *)(v49 + 16) ^= ((unsigned int)*(_QWORD *)(v49 + 16) ^ (v50 << 16)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = v115;
        if ( !v50 )
          v114 = 1;
        goto LABEL_34;
      }
      goto LABEL_33;
    }
    if ( v10 != 1 )
    {
      if ( (unsigned int)MiDecommitLargePte(v137, v29, v16, (_DWORD)a6, (__int64)&v145) )
        v114 = 1;
      goto LABEL_34;
    }
    v72 = 0LL;
    v129 = 0LL;
    v73 = MiLockTransitionLeafPageEx(v25, 0LL, 0);
    v74 = v73;
    if ( v73 )
    {
      v75 = 0LL;
      v76 = 0LL;
      if ( !*(_WORD *)(v73 + 32) )
      {
        v72 = *(_QWORD *)(v73 + 16);
        v77 = *(_QWORD *)(v73 + 40);
        v75 = v72;
        v76 = v72;
        v129 = v72;
        v78 = *(_QWORD *)(qword_140C67048 + 8 * ((v77 >> 43) & 0x3FF));
        v128 = v78;
        if ( (v72 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v78, &v129) )
          LODWORD(v10) = 0;
      }
      if ( (unsigned int)MiDeleteTransitionPte(v25, v74, 0x11u, 0) == 3 )
      {
        v75 = v76;
        ++a6[1];
      }
      if ( v75 )
        MiReleasePageFileSpace(v128, v72, (unsigned int)v10);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v79 = v16;
      if ( !(_DWORD)v10 )
      {
        HIDWORD(v81) = HIDWORD(v129);
        if ( qword_140C657C0 && (v129 & 0x10) == 0 )
          v81 = v129 & ~qword_140C657C0;
        v79 = MiTransferSoftwarePte(
                v15,
                *(_QWORD *)(v128 + 8LL * ((unsigned __int16)v129 >> 12) + 17056),
                HIDWORD(v81),
                2LL);
      }
      v80 = v79;
      if ( MiPteInShadowRange(v25) )
      {
        if ( !MiPteHasShadow() )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v79 & 1) != 0 )
          {
            v80 = v79 | 0x8000000000000000uLL;
          }
          goto LABEL_133;
        }
        if ( !HIBYTE(word_140C6697C) && (v79 & 1) != 0 )
          v80 = v79 | 0x8000000000000000uLL;
        *(_QWORD *)v25 = v80;
        MiWritePteShadow(v25, v80, v108);
      }
      else
      {
LABEL_133:
        *(_QWORD *)v25 = v80;
      }
      if ( !v79 )
      {
        v10 = v115;
        if ( MiReducePteUseCount(v25, 1u) )
          v114 = 1;
        goto LABEL_34;
      }
LABEL_33:
      v10 = v115;
      goto LABEL_34;
    }
LABEL_42:
    v24 = v116;
  }
  if ( (unsigned int)MiDeletePteWsleCluster(&v131, a3, v16, a6) )
    v114 = 1;
  if ( v117 == 35651584 && v24 )
  {
    MiFlushGraphicsPtes(v121, v24);
    v121 = 0LL;
    v116 = 0LL;
  }
  if ( HIDWORD(v148) )
  {
    LODWORD(BugCheckParameter4) = 1;
    if ( (unsigned int)MiDeletePteList((__int64)&v145, a3, v16, a6, BugCheckParameter4) )
      v114 = 1;
  }
  if ( v125 )
  {
    MiUnlockPageTableInternal(v122, v125);
    v125 = 0LL;
  }
  if ( !v126 )
  {
    v29 = v25;
    if ( v123 <= 1 )
    {
      v88 = 2 - v123;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v88;
      }
      while ( v88 );
      v15 = v135;
      v10 = v115;
    }
    MiMakeSystemAddressValid(v29, 0LL, (*(_DWORD *)(v137 + 48) >> 12) & 0x7F, v113, v127);
    goto LABEL_91;
  }
  v141 = 0LL;
  memset((char *)v144 + 4, 0, 0xACuLL);
  v119 = (__int64)(v25 << 25) >> 16;
  v57 = (__int64)(v138 << 25) >> 16;
  LODWORD(v144[0]) = 2145;
  LeafVa = MiGetLeafVa(v119);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C6A1D8 && LeafVa <= qword_140C66CF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v61 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v59, 0);
  if ( v61 )
  {
    v62 = v61 - 1;
    LODWORD(v141) = v61 - 1;
    v63 = ((v119 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v141 + 1) = v63;
  }
  else
  {
    LODWORD(v144[0]) |= 4u;
    v144[21] = &v141;
    v144[2] = 0LL;
    v144[3] = AnyMultiplexedVm;
    BYTE4(v144[0]) = BYTE4(v144[0]) & 0xE3 | 4;
    v144[20] = MiGetNextPageTableTail;
    HIBYTE(v144[0]) = v113;
    v144[4] = (__int64)(v25 << 25) >> 16;
    v144[5] = v57;
    MiWalkPageTables((__m128i *)v144);
    v63 = *((_QWORD *)&v141 + 1);
    v62 = v141;
  }
  v64 = a6;
  v65 = a6[4];
  if ( v63 )
  {
    v66 = v63 - v25;
    v25 = v63;
    a6[4] = v65 + (v66 >> 3);
    v29 = v63;
    if ( v62 )
    {
      v29 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v62 > 1 )
      {
        v87 = v62 - 1;
        do
        {
          v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v87;
        }
        while ( v87 );
      }
    }
    v26 = (__int64)(v63 << 25) >> 16;
    v118 = v26;
LABEL_91:
    v124 = 0;
    v125 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_18;
  }
  v24 = v116;
  a6[4] = v65 + ((__int64)(v138 - v25) >> 3) + 1;
LABEL_95:
  if ( (unsigned int)MiDeletePteWsleCluster(&v131, a3, v16, v64) )
    v67 = 1;
  else
    v67 = v114;
  if ( v117 == 35651584 && v24 )
    MiFlushGraphicsPtes(v121, v24);
  if ( HIDWORD(v148) )
  {
    LODWORD(BugCheckParameter4) = 1;
    if ( (unsigned int)MiDeletePteList((__int64)&v145, a3, v16, v64, BugCheckParameter4) )
      v67 = 1;
  }
  if ( v125 )
    MiUnlockPageTableInternal(v122, v125);
  MiUnlockWorkingSetShared(v122, v113);
  return v67;
}
