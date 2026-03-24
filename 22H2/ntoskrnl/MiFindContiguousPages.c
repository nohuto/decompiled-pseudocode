/*
 * XREFs of MiFindContiguousPages @ 0x140281D60
 * Callers:
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403545A0 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateSlabEntry @ 0x140392168 (MiAllocateSlabEntry.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSkipPagesForMdl @ 0x140533E40 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x140552618 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408C63C0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408DA134 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14022F500 (MiReferencePageRuns.c)
 *     MiSetPfnOwnedAndActive @ 0x14023B5B0 (MiSetPfnOwnedAndActive.c)
 *     MiCreatePteCopyList @ 0x1402404A8 (MiCreatePteCopyList.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiClaimPhysicalRun @ 0x1402810AC (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14028271C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1402827B0 (MiPfnsWorthTrying.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiUnlockPage @ 0x140306A9C (MiUnlockPage.c)
 *     MiDereferencePageRunsEx @ 0x14031C868 (MiDereferencePageRunsEx.c)
 *     MiReleasePteCopyList @ 0x140323F44 (MiReleasePteCopyList.c)
 *     MiSufficientAvailablePages @ 0x14033E480 (MiSufficientAvailablePages.c)
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     MiFindLargeNodePage @ 0x1403947D0 (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5454 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x1403CFBA4 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiLockPage @ 0x14054F844 (MiLockPage.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  unsigned __int64 v12; // r11
  unsigned int v14; // edx
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int8 CurrentIrql; // di
  int v19; // ecx
  int v20; // edi
  bool v21; // zf
  unsigned __int64 v22; // rsi
  int v23; // ecx
  int v24; // eax
  int v25; // r8d
  __int64 LargeNodePage; // rax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // r8d
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // r10
  int *v35; // r9
  int v36; // esi
  unsigned int *v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // ebx
  unsigned __int8 *v41; // r8
  int v42; // r14d
  ULONG_PTR v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned __int8 *v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r15
  unsigned __int64 v56; // r12
  bool v57; // r13
  __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  int v62; // ecx
  __int64 v63; // rcx
  unsigned __int8 v64; // r8
  BOOL v65; // eax
  int v66; // eax
  unsigned int *v67; // r10
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r8
  unsigned int v71; // r15d
  unsigned __int64 v72; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v75; // eax
  int v76; // [rsp+50h] [rbp-B0h]
  BOOL v77; // [rsp+54h] [rbp-ACh]
  int v78; // [rsp+58h] [rbp-A8h]
  int *v80; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v81; // [rsp+80h] [rbp-80h]
  int v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+8Ch] [rbp-74h] BYREF
  int v84; // [rsp+90h] [rbp-70h] BYREF
  int v85; // [rsp+94h] [rbp-6Ch]
  int v86; // [rsp+98h] [rbp-68h]
  unsigned int *v87; // [rsp+A0h] [rbp-60h]
  int v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+ACh] [rbp-54h]
  unsigned __int8 *v90; // [rsp+B0h] [rbp-50h]
  __int64 v91; // [rsp+B8h] [rbp-48h]
  __int64 v92; // [rsp+C0h] [rbp-40h]
  __int64 v93; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v94; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v95; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v96; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v97; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v98; // [rsp+F0h] [rbp-10h]
  bool v99; // [rsp+F8h] [rbp-8h]
  int v100; // [rsp+F9h] [rbp-7h]
  __int16 v101; // [rsp+FDh] [rbp-3h]
  char v102; // [rsp+FFh] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v104; // [rsp+108h] [rbp+8h]
  unsigned int *v105; // [rsp+110h] [rbp+10h]
  __int64 *v106; // [rsp+118h] [rbp+18h]
  __int128 v107; // [rsp+120h] [rbp+20h] BYREF
  __int64 v108; // [rsp+130h] [rbp+30h]
  __int64 v109; // [rsp+138h] [rbp+38h]
  _QWORD v110[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v111[2]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a5;
  v14 = a6;
  v15 = a1;
  v106 = a11;
  v16 = 0LL;
  BugCheckParameter2 = a3;
  v93 = 0LL;
  v94 = 0LL;
  v100 = 0;
  v101 = 0;
  v104 = a10;
  v107 = 0LL;
  v108 = 0LL;
  v102 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a7 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(4544LL * a7 + *(_QWORD *)(a1 + 16) + 4176)
    && (_DWORD)InitializationPhase )
  {
    return 3221225495LL;
  }
  v19 = a9 | 8;
  if ( CurrentIrql != 2 )
    v19 = a9;
  v76 = v19;
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v15, a5, 0LL, 2LL) < 0 )
      return 3221225626LL;
    v19 = v76;
    v14 = a6;
    v12 = a5;
  }
  if ( a10 )
    v85 = v12 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v85 = 0;
  if ( (v19 & 0x40) != 0 )
  {
    v20 = v19 | 0x8000;
    v21 = a2 == 0x100000;
    v22 = a5;
    if ( !v21 )
      v20 = v19;
    v23 = (KeFeatureBits & 0x2000000000LL) == 0;
    v83 = v23;
    v24 = v23;
    do
    {
      v25 = v24;
      if ( a5 == MiLargePageSizes[v24] )
        break;
      ++v24;
      v83 = v25 + 1;
      v23 = v25 + 1;
    }
    while ( (unsigned int)(v25 + 1) < 3 );
    LargeNodePage = MiFindLargeNodePage(v15, a7, (unsigned int)&v83, v23, v20, 0, v14);
    if ( LargeNodePage )
    {
      v28 = (LargeNodePage + 0x58000000000LL) / 48;
      *v106 = v28;
      if ( a10 )
      {
        v29 = *(_DWORD *)(a10 + 40);
        v30 = (unsigned __int64 *)(a10 + 8 * (((unsigned __int64)v29 >> 12) + 6));
        if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
          *(_QWORD *)(a10 + 24) = 1LL;
        if ( a5 )
        {
          do
          {
            v31 = v28 + v16++;
            *v30++ = v31;
          }
          while ( v16 < a5 );
          v29 = *(_DWORD *)(a10 + 40);
        }
        *(_DWORD *)(a10 + 40) = v29 + ((_DWORD)a5 << 12);
      }
      return 0LL;
    }
    v27 = -1073741801;
    goto LABEL_129;
  }
  if ( (*(_DWORD *)(v15 + 4) & 0x20) == 0 )
  {
    if ( !(unsigned int)MiSufficientAvailablePages(v15, v12 + 160) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v76;
  }
  v88 = v19 & 0x10000000;
  if ( (v19 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)&v107, a4);
    if ( !DWORD1(v107) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v76;
  }
  v77 = 0;
  if ( (v19 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v77 = CurrentIrql != 2;
  v32 = a7 | 0x80000000;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v32 = a7;
  v78 = v32;
  v33 = (unsigned int *)MiReferencePageRuns(v15, 1u, a3, (_DWORD *)a4);
  v34 = *(_QWORD *)(v15 + 16);
  v35 = (int *)v33;
  v80 = (int *)v33;
  v95 = a2;
  v36 = v76;
  v37 = &v33[4 * *v33 + 4];
  v105 = 0LL;
  v98 = a5;
  v38 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v38 = a4;
  v87 = v37;
  v91 = 0LL;
  v97 = v38;
  v86 = v76 & 0x2000;
  v99 = v86 != 0;
  v82 = 0;
  v92 = v34;
  while ( 2 )
  {
    v39 = -1;
    while ( 2 )
    {
      v40 = MmNumberOfChannels;
      v41 = 0LL;
      v81 = 0LL;
      if ( (unsigned int)MmNumberOfChannels <= 1 )
      {
        v42 = v78;
LABEL_64:
        v47 = &v41[v40];
        v90 = v47;
        goto LABEL_66;
      }
      v42 = v78;
      if ( v78 >= 0 )
      {
        v45 = (unsigned int)v78;
      }
      else
      {
        if ( v39 == -1 )
        {
          v43 = *(_QWORD *)(v15 + 6920);
          if ( BugCheckParameter2 <= v43 )
            v43 = BugCheckParameter2;
          v44 = MiSearchNumaNodeTable(v43);
          v41 = 0LL;
          v35 = v80;
          v39 = *(_DWORD *)(v44 + 8);
          v91 = qword_140C4DE98 + 4LL * v39 * (unsigned __int16)KeNumberNodes;
          v37 = v87;
          v105 = (unsigned int *)(v91 + 4LL * (unsigned __int16)KeNumberNodes);
          v34 = v92;
        }
        v45 = v39;
      }
      if ( (*(_DWORD *)(4544 * v45 + v34 + 4280) & 1) == 0 )
        goto LABEL_64;
      v41 = (unsigned __int8 *)(4544 * v45 + v34 + 4317);
      v81 = v41;
      if ( a8 < 0 )
        goto LABEL_64;
      v46 = 0;
      do
      {
        if ( *v41 == a8 )
          break;
        ++v41;
        ++v46;
      }
      while ( v46 < v40 );
      v81 = v41;
      v47 = v41 + 1;
      v90 = v41 + 1;
      while ( 1 )
      {
LABEL_66:
        v96 = BugCheckParameter2;
        v48 = *v35;
        if ( *v35 )
        {
          while ( 1 )
          {
            v49 = (unsigned int)(v48 - 1);
            v89 = v49;
            v50 = v37[2 * v49];
            v51 = v37[2 * v49 + 1];
            v49 *= 2LL;
            v52 = *(_QWORD *)&v35[2 * v49 + 4];
            v53 = *(_QWORD *)&v35[2 * v49 + 6];
            v93 = v52;
            v94 = v53 + v52;
            if ( v95 >= v53 + v52 )
              break;
            if ( (v42 < 0 || (_DWORD)v50 == v42) && (!v41 || (_DWORD)v51 == *v41) )
            {
              if ( (unsigned int)MiCollapseRunTopDown(&v93, v51) )
              {
                v54 = 4544 * v50;
                v109 = 4544 * v50;
                while ( 1 )
                {
                  if ( !*(_QWORD *)(v54 + *(_QWORD *)(v15 + 16) + 4176) && (_DWORD)InitializationPhase )
                  {
LABEL_100:
                    v42 = v78;
                    break;
                  }
                  v55 = v94;
                  v56 = v98;
                  v84 = 0;
                  v57 = v99;
                  if ( v99 && v98 > v94 - v93 )
                    v56 = v94 - v93;
                  v58 = v94 - v56;
                  v59 = 48 * (v94 - v56) - 0x58000000000LL;
                  if ( !v99 )
                  {
                    v61 = MiPfnsWorthTrying(a1, 48 * ((int)v94 - (int)v56), v98, v36, (__int64)&v84);
                    if ( v61 )
                      goto LABEL_95;
                    if ( v84 == 1 )
                      MiEmptyKernelStackCache();
                  }
                  v61 = MiClaimPhysicalRun(a1, v55 - v56, v56, v96, (__int64)&v107, v76, -1, v104, a6, 0LL);
                  if ( v104 )
                  {
                    v62 = *(_DWORD *)(v104 + 40) >> 12;
                    if ( v62 == v85 )
                      goto LABEL_118;
                    v98 = (unsigned int)(v85 - v62);
                  }
                  else if ( !v61 )
                  {
LABEL_118:
                    MiDereferencePageRunsEx(v80, 1LL);
                    MiReleasePteCopyList(&v107);
                    if ( v86 )
                    {
                      v71 = a6;
                    }
                    else
                    {
                      v69 = (v58 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v70 = (a5 + v58) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v69 < v70 )
                        MiUpdateLargePageBitMap(a1, v69, v70 - v69, 1, 1);
                      v71 = a6;
                      MiConvertContiguousPages(v59, a5, a6);
                    }
                    if ( (v76 & 0x40000000) == 0 )
                    {
                      v72 = v59 + 48 * a5;
                      do
                      {
                        MiSetPfnOwnedAndActive(v59, 0LL, -8LL, v71, ((v76 & 0x100000) != 0) + 1);
                        v59 += 48LL;
                      }
                      while ( v59 != v72 );
                    }
                    *v106 = v58;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v59 + 40) >> 39) & 0x3FFLL)) == a1 )
                  {
                    if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                    {
                      MiLockPage();
                      if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                      {
                        if ( v88 )
                        {
                          MiUnlockPage(v63, v64);
                          v41 = v81;
                          v47 = v90;
                          v65 = 0;
                          v77 = 0;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        v82 = 1;
                      }
                      MiUnlockPage(v63, v64);
                    }
                    else
                    {
                      v82 = 1;
                    }
                  }
LABEL_95:
                  if ( v61 >= v55 - v93 || !v57 && v55 - v93 - v61 < v56 )
                    v96 = v55 - v61 - 1;
                  v94 = v55 - v61;
                  v66 = MiCollapseRunTopDown(&v93, v60);
                  v15 = a1;
                  v54 = v109;
                  v36 = v76;
                  if ( !v66 )
                    goto LABEL_100;
                }
              }
              v41 = v81;
              v35 = v80;
            }
            v48 = v89;
            if ( !v89 )
              break;
            v37 = v87;
          }
          v47 = v90;
        }
        v65 = v77;
LABEL_106:
        if ( !v41 )
          goto LABEL_111;
        v15 = a1;
        ++v41;
        v42 = v78;
        v35 = v80;
        v37 = v87;
        v81 = v41;
        if ( v41 >= v47 )
          break;
        v36 = v76;
      }
      if ( v39 != -1 )
      {
        v67 = (unsigned int *)(v91 + 4);
        v91 = (__int64)v67;
        if ( v67 != v105 )
        {
          v39 = *v67;
          v34 = v92;
          v36 = v76;
          continue;
        }
      }
      break;
    }
LABEL_111:
    if ( v65 && v82 == 1 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v110[1] = 16LL;
        v68 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v111[1] = a5 << 12;
        v111[0] = v68;
        v110[0] = v111;
        EtwTraceKernelEvent((unsigned int)v110, 1, 537919488, 625, 4200962);
      }
      v15 = a1;
      if ( byte_140C4EEDC )
        MiQueueWorkingSetRequest(a1, 32LL);
      v36 = v76;
      v35 = v80;
      v37 = v87;
      v34 = v92;
      v77 = 0;
      continue;
    }
    break;
  }
  v27 = -1073741801;
  MiDereferencePageRunsEx(v80, 1LL);
  v15 = a1;
LABEL_128:
  v20 = v76;
  v22 = a5;
LABEL_129:
  MiReleasePteCopyList(&v107);
  if ( (v20 & 0x20000000) == 0 )
  {
    MiReturnCommit(v15, v22);
    if ( (ULONG_PTR *)v15 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v22 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v22 >= 0x80000 )
              break;
            v75 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v75;
            LODWORD(CachedResidentAvailable) = v75;
            if ( v21 )
              return v27;
          }
          while ( v75 != -1 && v22 + v75 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v22 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v22 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 7168), v22);
  }
  return v27;
}
