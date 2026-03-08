/*
 * XREFs of MiPfPutPagesInTransition @ 0x140288890
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406A3DCC (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 *     MiPfnZeroingNeeded @ 0x140214AC4 (MiPfnZeroingNeeded.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     MiLockProtoPoolPageForce @ 0x14028331C (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiUseSlabAllocator @ 0x140289310 (MiUseSlabAllocator.c)
 *     MiInitializeReadInProgressPfn @ 0x140289390 (MiInitializeReadInProgressPfn.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiSetInPagePriority @ 0x1402CCCBC (MiSetInPagePriority.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CF5DC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReduceMdl @ 0x1402D674C (MiReduceMdl.c)
 *     MiReleasePrefetchGapPages @ 0x1402EDD24 (MiReleasePrefetchGapPages.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiPrefetchPagesViable @ 0x1402FCD14 (MiPrefetchPagesViable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRefillPurgedExtents @ 0x14063CD7C (MiRefillPurgedExtents.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiFreeReadListPages @ 0x1406A4F10 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  BOOL v11; // r14d
  char v12; // r10
  struct _SLIST_ENTRY *v13; // r12
  unsigned int v14; // esi
  __int64 v15; // r11
  struct _SLIST_ENTRY *v16; // r13
  int v17; // edi
  _DWORD *SchedulerAssist; // r9
  _SLIST_ENTRY *Next; // rbx
  __int64 v20; // r10
  unsigned __int64 v21; // r15
  __int64 Flink; // rdx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // r15
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r14
  int v35; // r12d
  ULONG_PTR v36; // r14
  unsigned __int8 v37; // al
  __int64 v38; // r13
  int v39; // eax
  _QWORD **v40; // r14
  _QWORD **v41; // r15
  _QWORD *v42; // r8
  unsigned __int64 v43; // r13
  __int64 v44; // rbx
  ULONG_PTR v45; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // r12
  _QWORD *v50; // r14
  struct _SLIST_ENTRY *v51; // r14
  __int64 v53; // rcx
  _DWORD *v54; // rdx
  __int64 v55; // r14
  unsigned __int64 v56; // rax
  int v57; // r9d
  _SLIST_ENTRY *v58; // rax
  struct _SLIST_ENTRY *v59; // rcx
  PSLIST_ENTRY *v60; // rdx
  __int64 v61; // r15
  unsigned __int64 PageForHeader; // rax
  _QWORD *v63; // r12
  __int64 v64; // r15
  char v65; // cl
  __int64 v66; // rax
  signed __int32 v67; // ecx
  unsigned int v68; // edx
  __int64 v69; // r9
  __int64 Page; // rax
  unsigned int v71; // r8d
  __int64 v72; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  int v74; // eax
  bool v75; // zf
  __int64 v76; // r14
  unsigned int PagingFileOffset; // eax
  __int64 v78; // r13
  int v79; // r15d
  __int64 v80; // r12
  __int64 *v81; // r8
  __int64 v82; // rax
  unsigned __int8 v83; // dl
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  int v88; // [rsp+30h] [rbp-D0h]
  __int64 v89; // [rsp+38h] [rbp-C8h]
  int v90; // [rsp+40h] [rbp-C0h]
  struct _SLIST_ENTRY *v91; // [rsp+48h] [rbp-B8h]
  __int64 v92; // [rsp+50h] [rbp-B0h]
  __int64 v93; // [rsp+58h] [rbp-A8h]
  unsigned int v94; // [rsp+60h] [rbp-A0h] BYREF
  int v95; // [rsp+64h] [rbp-9Ch]
  unsigned int v96; // [rsp+68h] [rbp-98h]
  unsigned __int64 v97; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v98; // [rsp+78h] [rbp-88h]
  int v99; // [rsp+80h] [rbp-80h]
  int v100; // [rsp+84h] [rbp-7Ch]
  int v101; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v102; // [rsp+8Ch] [rbp-74h]
  BOOL v103; // [rsp+90h] [rbp-70h]
  _QWORD *v104; // [rsp+98h] [rbp-68h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-58h]
  _SLIST_ENTRY *v107; // [rsp+B0h] [rbp-50h]
  void *Src; // [rsp+B8h] [rbp-48h]
  int v109; // [rsp+C0h] [rbp-40h] BYREF
  int v110; // [rsp+C4h] [rbp-3Ch]
  int v111; // [rsp+C8h] [rbp-38h] BYREF
  int v112; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h]
  __int128 v116; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v117; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v118; // [rsp+100h] [rbp+0h]
  unsigned __int64 v119; // [rsp+108h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+110h] [rbp+10h]
  void *retaddr; // [rsp+168h] [rbp+68h]
  int v124; // [rsp+180h] [rbp+80h] BYREF
  int v125; // [rsp+188h] [rbp+88h]

  v125 = a4;
  v124 = a3;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 80);
  v102 = *(_DWORD *)(a1 + 84);
  v6 = *(_QWORD *)(a1 + 8);
  v106 = 0LL;
  v116 = 0LL;
  v7 = *(_WORD *)(v6 + 60) & 0x3FF;
  v96 = v5;
  v89 = 0LL;
  v115 = 0LL;
  v93 = *(_QWORD *)(qword_140C67048 + 8 * v7);
  v8 = *(_DWORD *)(v6 + 56) & 8;
  LOBYTE(v124) = 17;
  v110 = v8;
  v9 = *(_DWORD *)(v4 + 88) + 1;
  v94 = 0;
  v99 = v9;
  v92 = 0LL;
  v11 = (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2;
  v103 = v11;
  v13 = 0LL;
  v95 = v12 & 7 | 0x18;
  v14 = (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 56LL) >> 20) & 0x7F;
  MiInitializePageColorBase(v10 + 1664, v14, &v116);
  v16 = *(struct _SLIST_ENTRY **)(v4 + 120);
  v118 = (__int64 *)(v4 + 120);
  v91 = v16;
  if ( v16 == (struct _SLIST_ENTRY *)(v4 + 120) )
    goto LABEL_69;
  v17 = v95;
  while ( 2 )
  {
    SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
    ListEntry = v16;
    if ( v11 )
    {
      LODWORD(v16[12].Next) |= 0x80u;
    }
    else if ( (*(_DWORD *)(v4 + 104) & 1) != 0 )
    {
      LODWORD(v16[12].Next) |= 0x20u;
    }
    Next = v16[15].Next;
    v20 = 0LL;
    v21 = *((_QWORD *)&v16[12].Next + 1) + 8LL;
    v107 = Next;
    v119 = v21;
    v16[15].Next = (_SLIST_ENTRY *)((unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL);
    v105 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
    Src = v16[16].Next;
    Flink = (__int64)Src + 48;
    v23 = 0;
    v24 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v24 )
    {
      do
      {
        ++v23;
        *(_QWORD *)Flink = qword_140C69388;
        Flink += 8LL;
      }
      while ( v23 < v24 );
    }
    v88 = 0;
    v25 = 0;
    v113 = 0LL;
    if ( !v13 )
    {
      v26 = MiGetInPageSupportBlock(0LL);
      v20 = 0LL;
      v92 = v26;
      if ( v26 )
      {
        v27 = v102;
        v28 = v96;
        *(_QWORD *)(v26 + 248) = 0LL;
        MiSetInPagePriority(v26, v27, v28);
      }
      v15 = v89;
      SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
    }
    if ( (unsigned __int64)Next >= v21 )
      goto LABEL_62;
    while ( 2 )
    {
      v29 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFCuLL;
      v98 = v20;
      v114 = v29;
      if ( v15 )
      {
        Flink = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v115 == Flink )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, v124);
      }
      v115 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v89 = MiLockProtoPoolPageForce(v29, (__int64)&v124);
      v20 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_15:
          v30 = *(_QWORD *)v29;
          v31 = *(_QWORD *)v29;
          if ( (*(_QWORD *)v29 & 1) != 0 )
            goto LABEL_84;
          if ( (*(_QWORD *)v29 & 0xC00LL) != 0x800 )
          {
            v32 = v20;
            goto LABEL_18;
          }
          if ( MiInvalidPteConforms(*(_QWORD *)v29) )
          {
            v31 = v30;
            if ( qword_140C657C0 && (v30 & 0x10) == 0 )
              v31 = v30 & ~qword_140C657C0;
LABEL_84:
            v56 = (v31 >> 12) & 0xFFFFFFFFFFLL;
            if ( v56 <= qword_140C65820 )
            {
              Flink = 6 * v56;
              if ( _bittest64((const signed __int64 *)(48 * v56 - 0x21FFFFFFFFD8LL), 0x36u) )
                break;
            }
          }
        }
        v32 = 48 * v56 - 0x220000000000LL;
        v109 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v109);
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
          v20 = 0LL;
        }
        if ( *(_QWORD *)v29 == v30 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      Flink = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
      if ( (*(_DWORD *)(Flink + 4) & 0x80u) != 0 )
      {
        v32 = MiLockSpecialPurposeMemoryCachedPage(v32, 2LL);
        v20 = 0LL;
      }
LABEL_18:
      v33 = *(_QWORD *)v29;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL
        && v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v66 = *(_QWORD *)(Flink + 8 * ((v29 >> 3) & 0x1FF));
          if ( (v66 & 0x20) != 0 )
            v33 |= 0x20uLL;
          if ( (v66 & 0x42) != 0 )
            v33 |= 0x42uLL;
        }
      }
      v117 = v33;
      if ( v32 )
      {
        MiUpdatePfnPriority(v32, v96, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_56;
      }
      if ( (v33 & 0x400) == 0 )
      {
        v35 = 2;
        v100 = 2;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v33) || !v92 )
          goto LABEL_56;
        v36 = v98;
LABEL_26:
        v38 = v20;
        if ( v113 )
        {
          if ( v110 )
          {
            v55 = ((__int64)(v29 - v113) >> 3) - 1;
            if ( (__int64)(v29 - v113) >> 3 != 1 )
            {
              if ( !(unsigned int)MiPrefetchPagesViable(v93, a2, v99, v55, v20) )
                goto LABEL_61;
              v61 = 0LL;
              while ( 1 )
              {
                PageForHeader = MiGetPageForHeader(v93, v14);
                v97 = PageForHeader;
                if ( PageForHeader == -1LL )
                  break;
                ++v61;
                *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v38;
                v38 = 48 * PageForHeader - 0x220000000000LL;
                if ( v61 == v55 )
                  goto LABEL_112;
              }
              if ( v61 != v55 )
                goto LABEL_184;
LABEL_112:
              v20 = 0LL;
            }
            v36 = v98;
          }
        }
        else
        {
          v53 = (__int64)(v29 - v105) >> 3;
          if ( v53 )
          {
            v54 = Src;
            v105 = v29;
            *((_WORD *)Src + 4) += -8 * v53;
            v54[10] += -4096 * v53;
            v91[6].Next += 256 * v53;
            v91[15].Next = (_SLIST_ENTRY *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
          }
        }
        v90 = v20;
        if ( v35 == 1 && (v39 = MiUseSlabAllocator(v93, v36, v33, &v94), v20 = 0LL, v39) && v94 <= 3 )
        {
          v40 = (_QWORD **)(a1 + 8 * (v94 + 6LL));
          v41 = (_QWORD **)(a1 + 40);
        }
        else
        {
          v40 = (_QWORD **)(a1 + 40);
          v41 = (_QWORD **)(a1 + 40);
        }
        v42 = *v40;
        v104 = v42;
        if ( v42 )
        {
          *v40 = (_QWORD *)*v42;
          v97 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v42 + 0x44000000000LL) >> 4);
          goto LABEL_33;
        }
        if ( (unsigned int)MiPrefetchPagesViable(v93, a2, v99, 1, 1) )
        {
          v67 = _InterlockedExchangeAdd((volatile signed __int32 *)v116, 1u);
          v68 = DWORD2(v116) & v67 | HIDWORD(v116);
          if ( v40 == v41 )
          {
            v71 = 770;
            if ( ((__int64)v107->Next & 1) == 0 )
              v71 = 512;
            Page = MiGetPage(v93, v68, v71);
          }
          else
          {
            v69 = 10LL;
            if ( v14 )
              v69 = 8LL;
            Page = MiGetSlabPage(v93, v94, v68, v69, 0LL);
          }
          v97 = Page;
          if ( Page != -1 )
          {
            v42 = (_QWORD *)(48 * Page - 0x220000000000LL);
            v104 = v42;
            v20 = 0LL;
LABEL_33:
            if ( v38 )
            {
              v63 = (char *)Src + 8 * ((__int64)(v113 - v105) >> 3) + 56;
              do
              {
                v64 = *(_QWORD *)v38;
                v111 = v20;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v111);
                    while ( *(__int64 *)(v38 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
                  v20 = 0LL;
                }
                v65 = *(_BYTE *)(v38 + 34);
                *(_QWORD *)(v38 + 8) = -3LL;
                *(_BYTE *)(v38 + 34) = v65 | 7;
                *(_BYTE *)(v38 + 34) = v65 | 0x27;
                *(_QWORD *)v38 = v20;
                _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                *v63 = 0xAAAAAAAAAAAAAAABuLL * ((v38 + 0x220000000000LL) >> 4);
                v38 = v64;
                ++v63;
              }
              while ( v64 );
              v17 = v95;
              v35 = v100;
              v42 = v104;
            }
            v43 = v114;
            if ( v35 == 1 )
              v113 = v114;
            if ( ((__int64)v107->Next & 1) != 0 )
            {
              if ( MiPfnZeroingNeeded((__int64)v42) )
                v57 = 1;
              v90 = v57;
            }
            if ( v35 == 1 )
            {
              if ( !*((_QWORD *)&v91[15].Next + 1) )
                *((_QWORD *)&v91[15].Next + 1) = v42;
              ++v88;
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v97, 1, v43, (__int64)v91, v17);
              v44 = *(_QWORD *)(a1 + 8);
              if ( (*(_DWORD *)(v44 + 56) & 0x20) != 0 || !*(_QWORD *)(v44 + 64) )
                v45 = 0LL;
              else
                v45 = v98;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql == 2 )
                  LODWORD(v72) = 4;
                else
                  v72 = (-1LL << (CurrentIrql + 1)) & 4;
                v24 = (unsigned int)v72 | SchedulerAssist[5];
                SchedulerAssist[5] = v24;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44 + 72, CurrentIrql);
              }
              else
              {
                v101 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)(v44 + 72), 0x1Fu) )
                  v101 = ExpWaitForSpinLockExclusiveAndAcquire(v44 + 72);
                while ( 1 )
                {
                  v47 = *(unsigned int *)(v44 + 72);
                  if ( (*(_DWORD *)(v44 + 72) & 0xBFFFFFFF) == 0x80000000 )
                    break;
                  if ( (v47 & 0x40000000) == 0 )
                    _InterlockedOr((volatile signed __int32 *)(v44 + 72), 0x40000000u);
                  KeYieldProcessorEx(&v101);
                }
              }
              ++*(_QWORD *)(v44 + 32);
              if ( v45 )
                ++*(_DWORD *)(v45 + 104);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v44 + 72, retaddr);
                Flink = 0LL;
              }
              else
              {
                Flink = 0LL;
                *(_DWORD *)(v44 + 72) = 0;
              }
              if ( KiIrqlFlags )
              {
                v47 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0
                  && (unsigned __int8)v47 <= 0xFu
                  && CurrentIrql <= 0xFu
                  && (unsigned __int8)v47 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v47 = (unsigned int)CurrentIrql + 1;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v75 = (v74 & SchedulerAssist[5]) == 0;
                  v24 = (unsigned int)v74 & SchedulerAssist[5];
                  SchedulerAssist[5] = v24;
                  if ( v75 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  Flink = 0LL;
                }
              }
              __writecr8(CurrentIrql);
              v48 = v97;
              v49 = v89;
              *((_QWORD *)Src + ((__int64)(v43 - v105) >> 3) + 6) = v97;
              v16 = v91;
              if ( !v91[10].Next )
              {
                v112 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v89 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v112);
                  while ( *(__int64 *)(v89 + 24) < 0 );
                }
                MiAddLockedPageCharge(v89, 1LL);
                _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v48 = v97;
                v91[10].Next = (_SLIST_ENTRY *)v89;
              }
              v50 = v104;
            }
            else
            {
              MiReturnCommit(v93, 1LL, (__int64)v42);
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v97, 1, v43, v92, v17);
              v76 = (unsigned __int16)v33 >> 12;
              PagingFileOffset = MiGetPagingFileOffset(&v117);
              v78 = PagingFileOffset;
              v79 = 0;
              LODWORD(v106) = PagingFileOffset;
              if ( (v33 & 4) != 0 )
                LOBYTE(v79) = (_DWORD)v76 == *(_DWORD *)(v93 + 1188);
              v75 = !v103;
              v80 = *(_QWORD *)(v93 + 8 * v76 + 17056);
              *(_QWORD *)(v92 + 256) = v92 + 272;
              if ( !v75 )
                *(_DWORD *)(v92 + 192) |= 0x80u;
              v48 = v97;
              *(_QWORD *)(v92 + 272) = 0LL;
              *(_DWORD *)(v92 + 280) = 56;
              *(_QWORD *)(v92 + 304) = 0LL;
              *(_QWORD *)(v92 + 312) = 4096LL;
              *(_WORD *)(v92 + 282) |= 0x4042u;
              *(_QWORD *)(v92 + 320) = v48;
              MiObtainProtoReference(v89, 0LL);
              v81 = v118;
              *(_QWORD *)(v92 + 160) = v89;
              v82 = *v81;
              if ( *(__int64 **)(*v81 + 8) != v81 )
                goto LABEL_185;
              *(_QWORD *)v92 = v82;
              *(_QWORD *)(v92 + 8) = v81;
              *(_QWORD *)(v82 + 8) = v92;
              *v81 = v92;
              v83 = v124;
              ++*(_DWORD *)(a1 + 108);
              MiUnlockProtoPoolPage(v89, v83);
              v89 = 0LL;
              *(_QWORD *)(v92 + 224) = 0LL;
              if ( v79 )
              {
                *(_DWORD *)(v92 + 192) |= 0x100u;
                *(_QWORD *)(v92 + 96) = v78 | (v76 << 60);
              }
              else
              {
                v106 = (unsigned __int64)(unsigned int)v106 << 12;
                *(_QWORD *)(v92 + 96) = v106;
              }
              v84 = v114;
              *(_DWORD *)(v92 + 192) |= 0x200000u;
              v50 = v104;
              *(_QWORD *)(v92 + 240) = v84;
              *(_QWORD *)(v92 + 248) = v50;
              *(_QWORD *)(v92 + 200) = v80;
              v85 = MiGetInPageSupportBlock(0LL);
              v92 = v85;
              if ( v85 )
              {
                v86 = v102;
                v87 = v96;
                *(_QWORD *)(v85 + 248) = 0LL;
                MiSetInPagePriority(v85, v86, v87);
              }
              v49 = 0LL;
              v16 = v91;
            }
            if ( v90 )
            {
              if ( v49 )
              {
                MiUnlockProtoPoolPage(v49, v124);
                v89 = 0LL;
              }
              MiZeroPhysicalPage(v47, v48, 0LL, *((unsigned __int8 *)v50 + 34) >> 6);
            }
            goto LABEL_56;
          }
          MiReturnFaultCharges(v93, 1LL, 1LL);
          if ( !v38 )
            goto LABEL_61;
        }
        else if ( !v38 )
        {
          goto LABEL_61;
        }
LABEL_184:
        MiReleasePrefetchGapPages(v38);
        goto LABEL_61;
      }
      v34 = v33;
      if ( qword_140C657C0 && (v33 & 0x10) == 0 )
        v34 = v33 & ~qword_140C657C0;
      v35 = 1;
      v36 = v34 >> 16;
      v98 = v36;
      v100 = 1;
      v37 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 62LL);
      v24 = v37;
      LOBYTE(v24) = v37 & 0xC;
      if ( (v37 & 0xC) == 4 )
      {
        MiUnlockProtoPoolPage(v89, v124);
        v89 = 0LL;
        if ( (int)MiRefillPurgedExtents(v36) >= 0 )
          goto LABEL_56;
        v25 = v88;
      }
      else
      {
        if ( (v37 & 0xC) != 8 )
          goto LABEL_26;
LABEL_56:
        Next = (_SLIST_ENTRY *)(&v107->Next + 1);
        v107 = Next;
        if ( (unsigned __int64)Next < v119 )
        {
          v15 = v89;
          v20 = 0LL;
          SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
          continue;
        }
LABEL_61:
        v25 = v88;
LABEL_62:
        if ( v89 )
        {
          MiUnlockProtoPoolPage(v89, v124);
          v89 = 0LL;
        }
        v16 = v91;
      }
      break;
    }
    if ( v25 )
    {
      v51 = (struct _SLIST_ENTRY *)Src;
      MiReduceMdl(Src, Flink, v24, SchedulerAssist);
      if ( v51 != &v16[17] && *((_DWORD *)&v51[2].Next + 2) <= 0x10000u )
      {
        memmove(&v16[17], v51, *((__int16 *)&v51->Next + 4));
        ExFreePoolWithTag(v51, 0);
        v16[16].Next = v16 + 17;
      }
      v16 = v16->Next;
      v4 = a1;
      v91 = v16;
      goto LABEL_68;
    }
    v58 = v16->Next;
    v59 = ListEntry;
    v16 = v58;
    v91 = v58;
    v60 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
    if ( *(&v58->Next + 1) != ListEntry || *v60 != ListEntry )
LABEL_185:
      __fastfail(3u);
    v4 = a1;
    *v60 = v58;
    *((_QWORD *)&v58->Next + 1) = v60;
    --*(_DWORD *)(a1 + 108);
    MiFreeInPageSupportBlock(v59);
LABEL_68:
    v13 = (struct _SLIST_ENTRY *)v92;
    if ( v16 != (struct _SLIST_ENTRY *)(v4 + 120) )
    {
      v15 = v89;
      v11 = v103;
      continue;
    }
    break;
  }
LABEL_69:
  MiFreeReadListPages(v4);
  if ( v13 )
    MiFreeInPageSupportBlock(v13);
  return 0LL;
}
