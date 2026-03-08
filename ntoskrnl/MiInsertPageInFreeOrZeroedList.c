/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x140277CE0
 * Callers:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x140225A14 (MiRelinkStandbyPage.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiReturnPhysicalPoolPages @ 0x1402D878C (MiReturnPhysicalPoolPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     MiReturnPfnList @ 0x140371724 (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140387CB4 (MiLockAndInsertPageInFreeList.c)
 *     MiDrainZeroLookasides @ 0x1403B6E88 (MiDrainZeroLookasides.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiEnableNewPfns @ 0x140618520 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x140620DF0 (MiFreeSmallPageFromMdl.c)
 *     MiPurgeSubsection @ 0x140623294 (MiPurgeSubsection.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiDeleteEnclavePage @ 0x140645874 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140646460 (MiReturnEnclavePage.c)
 *     MiPurgeZeroList @ 0x14064B790 (MiPurgeZeroList.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x14065BCD0 (MiMakePageBad.c)
 *     MiFreePageFileHashPfn @ 0x1406638E8 (MiFreePageFileHashPfn.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiEnumerateSlabAllocators @ 0x140360F88 (MiEnumerateSlabAllocators.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     VslSetPlaceholderPages @ 0x1404570C8 (VslSetPlaceholderPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x140639DF4 (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  signed __int64 v2; // r14
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  char v10; // al
  int PagePrivilege; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR v18; // r14
  __int64 v19; // r9
  __int64 v20; // rdx
  char *v21; // rax
  int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  _DWORD *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  char v31; // al
  unsigned int v32; // eax
  __int64 v33; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v35; // r14d
  unsigned int v36; // ecx
  __int64 v37; // r9
  volatile signed __int32 *v38; // r8
  int v39; // r10d
  int v40; // r14d
  unsigned __int64 v41; // rax
  __int64 v42; // r14
  int v43; // edx
  ULONG_PTR v44; // r14
  char *v45; // rax
  int v46; // r8d
  int v47; // ecx
  int v48; // ebx
  int v49; // r11d
  unsigned int v50; // r11d
  unsigned __int64 *v51; // rbx
  unsigned __int64 v52; // rdx
  unsigned int v53; // r8d
  char v54; // al
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r10
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int16 v61; // r14
  __int64 v62; // rbx
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rsi
  __int64 v66; // r12
  __int64 v67; // r11
  __int64 *v68; // rdi
  _QWORD *v69; // r10
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int16 **v72; // r10
  __int64 v73; // r11
  unsigned __int16 *v74; // rcx
  char v75; // cl
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  struct _KEVENT *v81; // rbx
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // r8
  int v84; // r9d
  unsigned __int64 v85; // r12
  __int64 v86; // rdi
  int i; // ecx
  __int64 v88; // rax
  unsigned int v89; // esi
  __int64 v90; // r9
  __int64 v91; // rdx
  signed __int64 v92; // r8
  signed __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned __int64 v95; // r8
  unsigned __int16 **v96; // r11
  __int64 v97; // r10
  unsigned __int16 *v98; // rcx
  unsigned int v99; // edx
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r15
  unsigned __int64 v102; // rbx
  unsigned __int64 v103; // r14
  unsigned __int64 v104; // rbx
  unsigned __int64 v105; // rcx
  KIRQL v106; // al
  __int64 v107; // rcx
  unsigned __int64 v108; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v112; // eax
  bool v113; // zf
  signed __int32 v114[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v115; // [rsp+30h] [rbp-118h]
  int v116; // [rsp+34h] [rbp-114h] BYREF
  __int64 v117; // [rsp+38h] [rbp-110h]
  unsigned __int64 v118; // [rsp+40h] [rbp-108h]
  int v119; // [rsp+48h] [rbp-100h]
  unsigned __int64 v120; // [rsp+50h] [rbp-F8h]
  __int64 v121; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v122; // [rsp+60h] [rbp-E8h]
  volatile signed __int64 *v123; // [rsp+68h] [rbp-E0h]
  __int64 v124; // [rsp+70h] [rbp-D8h]
  __int64 v125; // [rsp+78h] [rbp-D0h]
  __int128 v126; // [rsp+80h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v128; // [rsp+A8h] [rbp-A0h]
  __int128 v129; // [rsp+B8h] [rbp-90h]
  __int64 v130; // [rsp+C8h] [rbp-80h]
  signed __int64 v131; // [rsp+D0h] [rbp-78h]
  __int128 v132; // [rsp+D8h] [rbp-70h]
  __int128 v133; // [rsp+E8h] [rbp-60h]
  __int64 v134; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v135; // [rsp+100h] [rbp-48h]
  void *retaddr; // [rsp+148h] [rbp+0h]
  unsigned __int32 v138; // [rsp+150h] [rbp+8h]
  unsigned __int32 v139; // [rsp+150h] [rbp+8h]
  unsigned int v140; // [rsp+160h] [rbp+18h]
  signed __int32 v141; // [rsp+160h] [rbp+18h]
  __int64 v142; // [rsp+168h] [rbp+20h]
  unsigned int v143; // [rsp+168h] [rbp+20h]
  unsigned int v144; // [rsp+168h] [rbp+20h]

  v2 = 48 * BugCheckParameter2;
  v5 = *(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40);
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( (v5 & 0x20000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x220000000000LL);
    return MiClearFileOnlyPfn(v6);
  }
  v8 = 0LL;
  v9 = *(_QWORD *)(qword_140C67048 + 8 * ((v5 >> 43) & 0x3FF));
  v117 = v9;
  if ( (a2 & 1) != 0 )
  {
    v123 = (volatile signed __int64 *)(v9 + 2560);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v6 + 40);
    }
    v140 = 0;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v10 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v6 + 34) = v10 & 0xF8 | 5;
      *(_BYTE *)(v6 + 35) |= 0x10u;
      return MiInsertPageInList(v6);
    }
    v123 = (volatile signed __int64 *)(v9 + 2688);
    v140 = 1;
  }
  v126 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v6);
    if ( PagePrivilege )
    {
      v12 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v12 = 16LL;
      if ( (int)KeSetPagePrivilege(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), &v126, v12) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), 0LL, 0LL);
    }
    MiSetPfnIdentity(v6, 0LL);
  }
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v114, 0);
  v13 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v6 + 35) &= 0xF8u;
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (v13 << 59)) & 0x3800000000000000LL;
  *(_QWORD *)(v6 + 8) |= 0x8000000000000000uLL;
  v14 = *(_QWORD *)(v6 + 40);
  v130 = 0LL;
  v131 = v14;
  v134 = 0LL;
  v135 = v14 & 0x8FFFFFFFFFFFFFFFuLL;
  v128 = 0LL;
  v129 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v14 & 0x8FFFFFFFFFFFFFFFuLL, v14);
  v135 = v15;
  if ( v131 != v15 )
  {
    do
    {
      v16 = v15;
      v131 = v15;
      v135 = v15 & 0x8FFFFFFFFFFFFFFFuLL;
      v135 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v15 & 0x8FFFFFFFFFFFFFFFuLL, v15);
      v15 = v135;
    }
    while ( v16 != v135 );
  }
  *(_QWORD *)(v6 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(v6 + 34) &= 0xC7u;
  *(_BYTE *)(v6 + 35) &= ~0x20u;
  result = MiCheckSlabPfnBitmap(v6, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( (a2 & 0x800) != 0 )
      return result;
    *(_BYTE *)(v6 + 34) = v140 | *(_BYTE *)(v6 + 34) & 0xF8;
    v18 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
    v19 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
    v20 = (unsigned int)dword_140C65708;
    v142 = v19;
    if ( dword_140C65704 > (unsigned int)dword_140C65708
      || (v21 = (char *)qword_140C65748 + 16 * dword_140C65704, v18 < *(_QWORD *)v21)
      || dword_140C65704 != dword_140C65708 && v18 >= *((_QWORD *)v21 + 2) )
    {
      v17 = 0LL;
      if ( dword_140C65708 < 0 )
LABEL_240:
        KeBugCheckEx(0x1Au, 0x6201uLL, v18, 0LL, 0LL);
      while ( 1 )
      {
        v22 = ((int)v17 + (int)v20) >> 1;
        v21 = (char *)qword_140C65748 + 16 * v22;
        if ( v18 >= *(_QWORD *)v21 )
        {
          if ( v22 == dword_140C65708 || v18 < *((_QWORD *)v21 + 2) )
          {
            dword_140C65704 = ((int)v17 + (int)v20) >> 1;
            break;
          }
          v17 = (unsigned int)(v22 + 1);
        }
        else
        {
          if ( !v22 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v18, (ULONG_PTR)qword_140C65748, 0LL);
          v20 = (unsigned int)(v22 - 1);
        }
        if ( (int)v20 < (int)v17 )
          goto LABEL_240;
      }
    }
    v23 = *((unsigned int *)v21 + 2);
    v24 = *(_QWORD *)(25408 * v23 + *(_QWORD *)(v19 + 16) + 25240);
    if ( !v24 )
      goto LABEL_96;
    if ( (*(_BYTE *)(v24 + 8) & 1) != 0 )
    {
      if ( !*(_QWORD *)v24 )
        goto LABEL_96;
      v25 = *(_QWORD *)v24 ^ v24;
    }
    else
    {
      v25 = *(_QWORD *)v24;
    }
    if ( v25 )
    {
      v26 = (_DWORD *)(v24 + 16);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v20) = -1;
        result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v24 + 16, v20);
      }
      else
      {
        _m_prefetchw(v26);
        v138 = *v26 & 0x7FFFFFFF;
        v141 = _InterlockedCompareExchange(v26, v138 + 1, v138);
        result = v138;
        if ( v141 != v138 )
        {
          while ( v141 >= 0 )
          {
            v139 = v141;
            v141 = _InterlockedCompareExchange(v26, v141 + 1, v141);
            result = v139;
            if ( v141 == v139 )
              goto LABEL_48;
          }
          LOBYTE(v20) = -1;
          result = ExpWaitForSpinLockSharedAndAcquire(v24 + 16, v20);
        }
      }
LABEL_48:
      v27 = *(_QWORD *)(v24 + 40);
      if ( v27 && v18 <= *(_QWORD *)(v27 + 32) && v18 >= *(_QWORD *)(v27 + 24) )
      {
LABEL_65:
        if ( (*(_DWORD *)(v24 + 88) & 4) != 0 && (*(_BYTE *)(v6 + 34) & 7) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 108));
          if ( (*(_BYTE *)(v6 + 34) & 0xC0) == 0x40 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v24 + 16));
            MiZeroPhysicalPage(v30, v18, 0LL, 1LL);
            *(_BYTE *)(v6 + 34) &= 0xF8u;
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v24 + 16));
          }
        }
        *(_QWORD *)(v6 + 8) = (*(_DWORD *)(v24 + 80) != 2) - 2LL;
        *(_QWORD *)(v6 + 24) &= 0xFFFFFF0000000000uLL;
        *(_QWORD *)(v6 + 16) = ZeroPte;
        v31 = *(_BYTE *)(v6 + 34) & 7;
        *(_QWORD *)v6 = 0LL;
        if ( v31 == 1 )
          MiSetOriginalPtePfnFromFreeList(v6 + 16, v20, v17);
        *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
        v32 = *(_DWORD *)(v24 + 80);
        if ( v32 <= 3 && v32 != 2 )
        {
          MiSetPfnIdentity(48 * v18 - 0x220000000000LL, 3LL);
          MiAbortCombineScan(48 * v18 - 0x220000000000LL);
          v33 = *(unsigned int *)(v24 + 80);
          if ( (unsigned int)v33 > 3 )
            v33 = (unsigned int)(v33 - 4);
          BugCheckParameter4 = *((int *)MiSlabTypeToMmSlabType + v33);
          if ( (MiFlags & 0x4000) != 0
            && (int)VslSetPlaceholderPages(v18, 1LL, 0LL, (unsigned int)BugCheckParameter4) < 0 )
          {
            KeBugCheckEx(0x1Au, 0x5150FuLL, v18, 0LL, BugCheckParameter4);
          }
          v26 = (_DWORD *)(v24 + 16);
        }
        v35 = v18 - *(_DWORD *)(v27 + 24);
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 132));
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 48));
        LOBYTE(v36) = 1;
        v37 = v35 & 0x1F;
        v38 = (volatile signed __int32 *)(*(_QWORD *)(v27 + 56) + 4 * ((unsigned __int64)v35 >> 5));
        if ( (unsigned __int64)(v37 + 1) > 0x20 )
        {
          v40 = v35 & 0x1F;
          if ( v40 )
          {
            _InterlockedAnd(v38++, ~(((1 << (32 - v40)) - 1) << v37));
            v36 = 1 - (32 - v40);
            if ( v36 >= 0x20 )
            {
              v41 = (unsigned __int64)v36 >> 5;
              do
              {
                *v38 = 0;
                v36 -= 32;
                ++v38;
                --v41;
              }
              while ( v41 );
            }
            if ( !v36 )
              goto LABEL_87;
          }
          v39 = (1 << v36) - 1;
        }
        else
        {
          v39 = 1 << v37;
        }
        _InterlockedAnd(v38, ~v39);
LABEL_87:
        if ( (unsigned int)(*(_DWORD *)(v27 + 132) + *(_DWORD *)(v27 + 136)) >= 0x200 )
          _InterlockedOr((volatile signed __int32 *)(v24 + 88), 1u);
        v42 = v142;
        *(_QWORD *)(v24 + 40) = v27;
        result = *(_QWORD *)(v142 + 16);
        *(_QWORD *)(25408LL * *(unsigned int *)(v24 + 84) + result + 25240) = v24;
LABEL_91:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v26, retaddr);
        }
        else
        {
          _InterlockedAnd(v26, 0xBFFFFFFF);
          _InterlockedDecrement(v26);
        }
        if ( v27 )
          return result;
        return MiEnumerateSlabAllocators(v42, MiFreePageToSlabAllocator, v6, (unsigned int)v23);
      }
      v28 = *(_QWORD *)(v24 + 8);
      v27 = *(_QWORD *)v24;
      if ( (v28 & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_90;
        v27 ^= v24;
      }
      v29 = v28 & 1;
      if ( v27 )
      {
        do
        {
          if ( v18 <= *(_QWORD *)(v27 + 32) )
          {
            if ( v18 >= *(_QWORD *)(v27 + 24) )
              break;
            result = *(_QWORD *)v27;
          }
          else
          {
            result = *(_QWORD *)(v27 + 8);
          }
          if ( v29 && result )
            v27 ^= result;
          else
            v27 = result;
        }
        while ( v27 );
        if ( v27 )
          goto LABEL_65;
      }
LABEL_90:
      v42 = v142;
      goto LABEL_91;
    }
LABEL_96:
    v42 = v19;
    return MiEnumerateSlabAllocators(v42, MiFreePageToSlabAllocator, v6, (unsigned int)v23);
  }
  if ( (*(_BYTE *)(v6 + 35) & 0x40) != 0 )
    return MiInsertPageInList(v6);
  v43 = dword_140C65708;
  v44 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
  if ( dword_140C65704 <= (unsigned int)dword_140C65708 )
  {
    v45 = (char *)qword_140C65748 + 16 * dword_140C65704;
    if ( v44 >= *(_QWORD *)v45 && (dword_140C65704 == dword_140C65708 || v44 < *((_QWORD *)v45 + 2)) )
      goto LABEL_114;
  }
  v46 = 0;
  if ( dword_140C65708 < 0 )
LABEL_243:
    KeBugCheckEx(0x1Au, 0x6201uLL, v44, 0LL, 0LL);
  while ( 1 )
  {
    v47 = (v46 + v43) >> 1;
    v45 = (char *)qword_140C65748 + 16 * v47;
    if ( v44 < *(_QWORD *)v45 )
    {
      if ( !v47 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v44, (ULONG_PTR)qword_140C65748, 0LL);
      v43 = v47 - 1;
      goto LABEL_111;
    }
    if ( v47 == dword_140C65708 || v44 < *((_QWORD *)v45 + 2) )
      break;
    v46 = v47 + 1;
LABEL_111:
    if ( v43 < v46 )
      goto LABEL_243;
  }
  dword_140C65704 = (v46 + v43) >> 1;
LABEL_114:
  v48 = *((_DWORD *)v45 + 2);
  if ( qword_140C65750 )
    v49 = MiPageToChannel(v44);
  else
    v49 = 0;
  v119 = a2 & 0x400;
  v50 = dword_140C65778 & BugCheckParameter2 | (v48 << byte_140C6570D) | (v49 << byte_140C6570E);
  v51 = (unsigned __int64 *)(v6 + 16);
  v52 = *(_QWORD *)(v9 + 16) + 25408 * ((unsigned __int64)v50 >> byte_140C6570D);
  v53 = *(unsigned __int8 *)(v6 + 34);
  v54 = v53 & 0xF8;
  v55 = v53 >> 6;
  *(_BYTE *)(v6 + 34) = v140 | v54;
  v120 = v52;
  v56 = v50;
  v115 = v50;
  v118 = v50;
  v57 = *(_QWORD *)(v6 + 16);
  v143 = v55;
  if ( v57 )
  {
    if ( qword_140C657C0 )
    {
      if ( (v57 & 0x10) != 0 )
        LODWORD(v57) = v57 & 0xFFFFFFEF;
      else
        LODWORD(v57) = ~(_DWORD)qword_140C657C0 & v57;
    }
  }
  else
  {
    LODWORD(v57) = 0;
  }
  v58 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v57;
  v59 = qword_140C657C0;
  if ( qword_140C657C0 )
  {
    if ( (qword_140C657C0 & v58) != 0 )
      v58 |= 0x10uLL;
    else
      v58 |= qword_140C657C0;
  }
  *v51 = v58;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      result = MiCoalesceFreePages(BugCheckParameter2);
      if ( !(_DWORD)result )
      {
        v56 = v118;
        v55 = v143;
        v50 = v115;
        goto LABEL_131;
      }
      return result;
    }
LABEL_131:
    if ( (a2 & 0x400) == 0 && (_DWORD)v55 == 1 && (*(_DWORD *)(v9 + 4) & 0x10) == 0 )
    {
      v59 = v140;
      v60 = *(_QWORD *)(v9 + 16) + 25408 * (v56 >> byte_140C6570D);
      v61 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v50 >> byte_140C6570E);
      v55 = 2 * (v140 ^ 1) + 4096;
      if ( *(unsigned __int16 *)(*(_QWORD *)(v9 + 8LL * v140 + 6808) + 16 * v56) < *(int *)(v9 + 16512) )
      {
        v59 = 0LL;
        v62 = 0LL;
        v124 = ((unsigned int)~(_DWORD)v55 >> 1) & 1;
        do
        {
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v63 = *(_QWORD *)(v60 + 8 * v62 + 22752) + v59;
          else
            v63 = *(_QWORD *)(v60 + 8 * (v62 + 2LL * v61) + 22936) + v59;
          v64 = 3LL;
          v122 = v63;
          v121 = 3LL;
          v65 = MiLargePageSizes;
          v66 = 0LL;
          v55 = v61;
          v67 = 0LL;
          v68 = (__int64 *)(v60 + 8 * v62);
          v69 = (_QWORD *)v60;
          do
          {
            v125 = *v65;
            if ( v61 == 4 )
            {
              if ( v62 == 2 )
                v70 = *v69 + v69[1];
              else
                v70 = *v68;
              v55 = 4LL;
            }
            else
            {
              v71 = v67 + 4 * (v55 + 4 * v62);
              v70 = *(_QWORD *)(v60 + 8 * v71 + 48)
                  + *(_QWORD *)(v60 + 8 * v71 + 56)
                  + *(_QWORD *)(v60 + 8 * v71 + 72)
                  + *(_QWORD *)(v60 + 8 * v71 + 304)
                  + *(_QWORD *)(v60 + 8 * v71 + 312)
                  + *(_QWORD *)(v60 + 8 * v71 + 328)
                  + *(_QWORD *)(v60 + 8 * v71 + 64)
                  + *(_QWORD *)(v60 + 8 * v71 + 320);
              v64 = v121;
            }
            ++v65;
            v69 += 134;
            v66 += v125 * v70;
            v67 += 134LL;
            v68 += 134;
            v121 = --v64;
          }
          while ( v64 );
          ++v62;
          v59 = v66 + v122;
        }
        while ( v62 <= v124 );
        v9 = v117;
        if ( v59 > 0x40 )
        {
          *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFF7FFF3FFuLL;
          v55 = *(_QWORD *)(v9 + 17216);
          if ( v55 < 0x420 )
          {
            v72 = (unsigned __int16 **)(v9 + 6808);
            v73 = 0LL;
            while ( 1 )
            {
              v74 = *v72;
              v59 = 0LL;
              if ( dword_140C6577C )
                break;
LABEL_154:
              ++v73;
              ++v72;
              if ( v73 > 1 )
                goto LABEL_170;
            }
            while ( 1 )
            {
              v55 += *v74;
              if ( v55 >= 0x420 )
                break;
              v59 = (unsigned int)(v59 + 1);
              v74 += 8;
              if ( (unsigned int)v59 >= dword_140C6577C )
                goto LABEL_154;
            }
          }
          v75 = *(_BYTE *)(v6 + 34);
          if ( (v75 & 7) != 5 )
            *(_BYTE *)(v6 + 34) = v75 & 0xF8 | 5;
          v76 = ((unsigned __int64)v140 << 12) | *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v76 )
          {
            LODWORD(v8) = (v140 << 12) | *(_DWORD *)(v6 + 16) & 0xFFFF0FFF;
            if ( qword_140C657C0 )
            {
              if ( (*(_BYTE *)(v6 + 16) & 0x10) != 0 )
                LODWORD(v8) = (v140 << 12) | *(_DWORD *)(v6 + 16) & 0xFFFF0FEF;
              else
                LODWORD(v8) = v76 & ~(_DWORD)qword_140C657C0;
            }
          }
          v77 = (unsigned int)v8 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C657C0 )
          {
            if ( (qword_140C657C0 & v77) != 0 )
              v77 = (unsigned int)v8 | 0xFFFFFFFE00000010uLL;
            else
              v77 |= qword_140C657C0;
          }
          v78 = 16 * v118;
          *(_QWORD *)(v6 + 16) = v77;
          return (__int64)RtlpInterlockedPushEntrySList(
                            (PSLIST_HEADER)(*(_QWORD *)(v9 + 8LL * v140 + 6808) + v78),
                            (PSLIST_ENTRY)v6);
        }
        v51 = (unsigned __int64 *)(v6 + 16);
      }
    }
  }
  *v51 &= 0xFFFFFFFFF7FFF3FFuLL;
LABEL_170:
  memset(&LockHandle, 0, sizeof(LockHandle));
  v79 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 17216));
  if ( v79 <= 0x420 )
  {
    switch ( v79 )
    {
      case 0xA0uLL:
        v80 = 15912LL;
        goto LABEL_177;
      case 0x420uLL:
        v80 = 15944LL;
        goto LABEL_177;
      case 0x22uLL:
        v80 = 15880LL;
LABEL_177:
        v81 = (struct _KEVENT *)(v80 + v9);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 15872), &LockHandle);
        KeSetEvent(v81, 0, 0);
        ++v81[1].Header.LockNV;
        KxReleaseQueuedSpinLock(&LockHandle);
        break;
    }
  }
  v82 = v79 - 1;
  if ( v82 == *(_QWORD *)(v9 + 16152) || v82 == *(_QWORD *)(v9 + 16160) )
    MiUpdateAvailableEvents(v9, v59, v55);
  v83 = v120;
  v84 = v143;
  v85 = _InterlockedIncrement64((volatile signed __int64 *)(v120 + 8LL * v140 + 22752));
  _InterlockedIncrement64((volatile signed __int64 *)(v83 + 8LL * v143 + 22768));
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v59 = v115 >> byte_140C6570E;
    LOWORD(v59) = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & v59);
    _InterlockedIncrement64((volatile signed __int64 *)(v83 + 8 * (v140 + 2LL * (unsigned __int16)v59) + 22936));
  }
  if ( v143 == 3 )
    v84 = 1;
  v144 = v84;
  v86 = *(_QWORD *)(v117 + 8LL * v140 + 2496) + 88LL * (unsigned int)(dword_140C6577C * v84) + 88 * v118;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v59) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v86 + 32, v59);
  }
  else
  {
    v116 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v86 + 32), 0x1Fu) )
      v116 = ExpWaitForSpinLockExclusiveAndAcquire(v86 + 32);
    for ( i = *(_DWORD *)(v86 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v86 + 32) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(v86 + 32), 0x40000000u);
      KeYieldProcessorEx(&v116);
    }
  }
  v88 = *(_QWORD *)(v86 + 16);
  if ( v88 == 0x3FFFFFFFFFLL )
  {
    _InterlockedOr64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v117 + 16)
                                            + 25408 * (v118 >> byte_140C6570D)
                                            + 16 * (v140 + 2 * (v144 + 702LL))
                                            + 8)
                                + 8 * ((unsigned __int64)(v115 & dword_140C65778) >> 6)),
      1LL << (v115 & dword_140C65778 & 0x3F));
    v89 = v140;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)(v86 + 16) = BugCheckParameter2;
    *(_QWORD *)(v86 + 24) = BugCheckParameter2;
  }
  else
  {
    v89 = v140;
    if ( v140 == 1 || v119 )
    {
      v94 = 48LL * *(_QWORD *)(v86 + 24);
      *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (0xAAAAAAAAAAAAAAABuLL * (v94 >> 4))) & 0xFFFFFFFFFFLL;
      *(_QWORD *)(v94 - 0x220000000000LL) ^= (*(_QWORD *)(v94 - 0x220000000000LL) ^ BugCheckParameter2) & 0xFFFFFFFFFFLL;
      *(_QWORD *)(v86 + 24) = BugCheckParameter2;
      *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    }
    else
    {
      v90 = 48 * v88;
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
      v91 = *(_QWORD *)(48 * v88 - 0x220000000000LL + 24);
      v92 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v90 - 0x220000000000LL + 24),
              BugCheckParameter2 & 0xFFFFFFFFFFLL | v91 & 0xFFFFFF0000000000uLL,
              *(_QWORD *)(v90 - 0x220000000000LL + 24));
      if ( v91 != v92 )
      {
        do
        {
          v93 = v92;
          v92 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v90 - 0x220000000000LL + 24),
                  BugCheckParameter2 & 0xFFFFFFFFFFLL | v92 & 0xFFFFFF0000000000uLL,
                  v92);
        }
        while ( v93 != v92 );
      }
      v89 = v140;
      *(_QWORD *)(v86 + 16) = BugCheckParameter2;
      *(_QWORD *)v6 ^= (*(_QWORD *)v6 ^ (0xAAAAAAAAAAAAAAABuLL * (v90 >> 4))) & 0xFFFFFFFFFFLL;
    }
  }
  ++*(_QWORD *)v86;
  result = (__int64)v123;
  _InterlockedIncrement64(v123);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v86 + 32, retaddr);
  else
    *(_DWORD *)(v86 + 32) = 0;
  if ( v89 == 1 && v85 >= 0x40 )
  {
    v95 = *(_QWORD *)(v117 + 17216);
    if ( v95 < 0xA0 )
    {
      v96 = (unsigned __int16 **)(v117 + 6808);
      v97 = 0LL;
      while ( 1 )
      {
        v98 = *v96;
        v99 = 0;
        if ( dword_140C6577C )
          break;
LABEL_211:
        ++v97;
        ++v96;
        if ( v97 > 1 )
          return result;
      }
      while ( 1 )
      {
        result = *v98;
        v95 += result;
        if ( v95 >= 0xA0 )
          break;
        ++v99;
        v98 += 8;
        if ( v99 >= dword_140C6577C )
          goto LABEL_211;
      }
    }
    result = *(unsigned int *)(v117 + 16480);
    if ( !(_DWORD)result )
    {
      v100 = v120;
      v101 = 64LL;
      if ( v120 )
      {
        result = *(unsigned int *)(v117 + 4);
        if ( (result & 0x20) != 0 )
          return result;
        v101 = 1024LL;
        v103 = v120 + 25408;
        v8 = 0x100000LL;
        v102 = v120;
      }
      else
      {
        result = (unsigned __int16)KeNumberNodes;
        v102 = *(_QWORD *)(v117 + 16);
        v103 = v102 + 25408LL * (unsigned __int16)KeNumberNodes;
      }
      if ( v102 < v103 )
      {
        v104 = v102 + 2152;
        do
        {
          if ( !*(_BYTE *)(v104 + 21024) )
          {
            v105 = 16LL * *(_QWORD *)v104 + (*(_QWORD *)(v104 - 1072) << 9) + (*(_QWORD *)(v104 - 2144) << 18);
            if ( !v100 )
              v105 += *(_QWORD *)(v104 + 20608);
            if ( v105 >= v101
              && (!v8
               || 16LL * *(_QWORD *)(v104 - 8) + (*(_QWORD *)(v104 - 1080) << 9) + (*(_QWORD *)(v104 - 2152) << 18) < v8) )
            {
              v106 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v104 + 21008));
              v107 = *(_QWORD *)(v104 + 21000);
              v108 = v106;
              if ( v107 && !*(_BYTE *)(v104 + 21024) )
              {
                *(_BYTE *)(v104 + 21024) = 1;
                MiWakeZeroingThreads(v107, 0LL);
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v104 + 21008));
              if ( KiIrqlFlags )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v108 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v112 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v108 + 1));
                  v113 = (v112 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v112;
                  if ( v113 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(v108);
              v100 = v120;
            }
          }
          v104 += 25408LL;
          result = v104 - 2152;
        }
        while ( v104 - 2152 < v103 );
      }
    }
  }
  return result;
}
