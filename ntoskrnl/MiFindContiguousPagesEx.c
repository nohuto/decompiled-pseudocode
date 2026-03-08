/*
 * XREFs of MiFindContiguousPagesEx @ 0x1403B5CF8
 * Callers:
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiAllocateSkipPagesForMdl @ 0x1403A71B0 (MiAllocateSkipPagesForMdl.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403A796C (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A44298 (MiCreatePagefileMemoryExtents.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x140244548 (MiCreateUltraThreadContext.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReferencePageRuns @ 0x1402EB520 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSetPfnOwnedAndActive @ 0x14034591C (MiSetPfnOwnedAndActive.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 *     MiClaimPhysicalRun @ 0x1403B545C (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x1403B62B0 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindLargeNodePage @ 0x14061B228 (MiFindLargeNodePage.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x140633040 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiEmptyKernelStackCache @ 0x1406423A0 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        _QWORD *a13)
{
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  int v16; // r12d
  unsigned __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // dl
  unsigned int v20; // r10d
  unsigned int v21; // edi
  _DWORD *v22; // r9
  __int64 v23; // rdx
  unsigned int *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  unsigned int v27; // ebx
  unsigned __int8 *v28; // r8
  unsigned __int8 *v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // r15
  char v36; // al
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned int v40; // esi
  char v41; // r13
  int v42; // r12d
  unsigned __int64 v43; // rdi
  BOOL v45; // r9d
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 LargeNodePage; // rax
  unsigned __int64 v49; // rcx
  unsigned int v50; // ebx
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  ULONG_PTR v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  unsigned __int8 v58; // al
  __int64 v59; // rcx
  unsigned __int64 v60; // r13
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  bool v65; // zf
  unsigned __int8 v66; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  BOOL v70; // eax
  unsigned int *v71; // r10
  __int64 v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // r8
  struct _KPRCB *v75; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v77; // eax
  signed int v78; // [rsp+60h] [rbp-A0h]
  BOOL v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+6Ch] [rbp-94h]
  int v82; // [rsp+70h] [rbp-90h]
  unsigned int v83; // [rsp+74h] [rbp-8Ch]
  __int64 v84; // [rsp+78h] [rbp-88h]
  unsigned int *v85; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v86; // [rsp+88h] [rbp-78h]
  unsigned int v87; // [rsp+90h] [rbp-70h] BYREF
  int v88; // [rsp+94h] [rbp-6Ch]
  int v89; // [rsp+98h] [rbp-68h]
  int v90; // [rsp+9Ch] [rbp-64h]
  int v91; // [rsp+A0h] [rbp-60h]
  unsigned int *v92; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v94; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+D0h] [rbp-30h]
  unsigned int *v98; // [rsp+D8h] [rbp-28h]
  __int64 i; // [rsp+E0h] [rbp-20h]
  _QWORD *v100; // [rsp+E8h] [rbp-18h]
  _QWORD v101[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v102; // [rsp+130h] [rbp+30h]
  __int64 v103; // [rsp+138h] [rbp+38h]
  __int128 v104; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v105[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v106[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v107[128]; // [rsp+170h] [rbp+70h] BYREF

  v14 = a1;
  v15 = a6;
  v16 = a10;
  v83 = a7;
  v78 = a8;
  v90 = a11;
  BugCheckParameter2 = a3;
  v84 = a1;
  v100 = a13;
  v97 = a12;
  v104 = 0LL;
  memset(v107, 0, sizeof(v107));
  v18 = 0LL;
  v80 = 0;
  memset(v101, 0, sizeof(v101));
  if ( (MiZeroCont & 1) != 0 )
    memset(&MiCont, 0, 0x2E0uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  v20 = a8;
  if ( a8 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(25408LL * a8 + *(_QWORD *)(v14 + 16) + 22832)
    && (_DWORD)InitializationPhase )
  {
    return 3221225495LL;
  }
  if ( CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v16 = a10 | 8;
  if ( (v16 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v14, a6, 0LL, 2u) < 0 )
      return 3221225626LL;
    v20 = a8;
  }
  if ( a12 )
    v88 = a6 + (*(_DWORD *)(a12 + 40) >> 12);
  else
    v88 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( a2 == 0x100000 )
      v16 |= 0x8000u;
    v45 = !_bittest64(&KeFeatureBits, 0x25u);
    v87 = v45;
    v46 = v45;
    v47 = v45;
    do
    {
      if ( a6 == MiLargePageSizes[v47] )
        break;
      v47 = ++v46;
      v45 = v46;
      v87 = v46;
    }
    while ( v46 < 3 );
    LargeNodePage = MiFindLargeNodePage(v14, v20, (unsigned int)&v87, v45, v16, v90, v83);
    if ( LargeNodePage )
    {
      v49 = 0xAAAAAAAAAAAAAAABuLL * ((LargeNodePage + 0x220000000000LL) >> 4);
      if ( v49 + a6 - 1 <= BugCheckParameter2 )
      {
        *v100 = v49;
        if ( a12 )
        {
          v51 = (unsigned __int64 *)(a12 + 8 * (((unsigned __int64)*(unsigned int *)(a12 + 40) >> 12) + 6));
          if ( a6 )
          {
            do
            {
              v52 = v49 + v18++;
              *v51++ = v52;
            }
            while ( v18 < a6 );
          }
          *(_DWORD *)(a12 + 40) += (_DWORD)a6 << 12;
        }
        return 0LL;
      }
      MiFreeContiguousPages(v49, a6);
    }
    v50 = -1073741801;
    goto LABEL_147;
  }
  if ( (*(_DWORD *)(v14 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(v14, a6 + 160)
    || (MiInitializePageColorBase(
          (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
          0,
          (__int64)&v104),
        !(unsigned int)MiCreateUltraThreadContext((__int64)v107, (__int64)&v104, 8, 0)) )
  {
    v50 = -1073741670;
    goto LABEL_147;
  }
  v79 = 0;
  if ( (v16 & 0xB800008) == 0x8000000 )
    v79 = InitializationPhase != 0;
  if ( a8 >= (unsigned __int16)KeNumberNodes )
    v78 = a8 | 0x80000000;
  v85 = (unsigned int *)MiReferencePageRuns(v14, 1u);
  v21 = -1;
  v98 = 0LL;
  v22 = v85;
  v96 = 0LL;
  v23 = *v85 + 1LL;
  v101[2] = a2;
  v24 = &v85[4 * v23];
  v101[6] = 0LL;
  v92 = v24;
  v25 = 0LL;
  v101[5] = a6;
  if ( ((a4 - 1) & a4) == 0 )
    v25 = a4;
  v82 = 0;
  v26 = *(_QWORD *)(v14 + 16);
  v101[4] = v25;
  v91 = v16 & 0x2000;
  LOBYTE(v101[7]) = v91 != 0;
  v81 = 0;
  for ( i = v26; ; v26 = i )
  {
    v27 = MmNumberOfChannels;
    v28 = 0LL;
    v86 = 0LL;
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      v53 = (unsigned int)v78;
      if ( v78 < 0 )
      {
        if ( v21 == -1 )
        {
          v54 = *(_QWORD *)(v14 + 17032);
          if ( BugCheckParameter2 <= v54 )
            v54 = BugCheckParameter2;
          v55 = MiSearchNumaNodeTable(v54);
          v28 = 0LL;
          v22 = v85;
          v21 = *((_DWORD *)v55 + 2);
          v96 = qword_140C65718 + 4LL * v21 * (unsigned __int16)KeNumberNodes;
          v24 = v92;
          v98 = (unsigned int *)(v96 + 4LL * (unsigned __int16)KeNumberNodes);
        }
        v53 = v21;
      }
      v56 = v26 + 25408 * v53;
      if ( (*(_DWORD *)(v56 + 23000) & 1) != 0 )
      {
        v28 = (unsigned __int8 *)(v56 + 23037);
        v86 = (unsigned __int8 *)(v56 + 23037);
        if ( a9 >= 0 )
        {
          v57 = 0;
          do
          {
            if ( *v28 == a9 )
              break;
            ++v28;
            ++v57;
          }
          while ( v57 < v27 );
          v86 = v28;
          v27 = 1;
        }
      }
    }
    v29 = &v28[v27];
    v95 = v29;
    do
    {
      LODWORD(v30) = *v22;
      v101[3] = BugCheckParameter2;
      if ( (_DWORD)v30 )
      {
        while ( 1 )
        {
          v30 = (unsigned int)(v30 - 1);
          v89 = v30;
          v31 = v24[2 * v30];
          v32 = v24[2 * v30 + 1];
          v101[0] = *(_QWORD *)&v22[4 * (unsigned int)v30 + 4];
          v101[1] = *(_QWORD *)&v22[4 * (unsigned int)v30 + 6] + v101[0];
          if ( v101[2] >= v101[1] )
            break;
          if ( (v78 < 0 || (_DWORD)v31 == v78) && (!v28 || (_DWORD)v32 == *v28) )
          {
            while ( 1 )
            {
              if ( !(unsigned int)MiCollapseRunTopDown(v101, v32)
                || !*(_QWORD *)(*(_QWORD *)(v14 + 16) + 25408 * v31 + 22832) && (_DWORD)InitializationPhase )
              {
                v22 = v85;
                LODWORD(v30) = v89;
                v28 = v86;
                break;
              }
              v33 = v101[5];
              v94 = v101[5];
              if ( LOBYTE(v101[7]) )
              {
                if ( v101[5] > v101[1] - v101[0] )
                  v33 = v101[1] - v101[0];
                v94 = v33;
              }
              v34 = v101[1] - v33;
              v103 = v101[1] - v33;
              v35 = 48 * (v101[1] - v33) - 0x220000000000LL;
              if ( LOBYTE(v101[7]) )
              {
                v36 = 0;
                v80 = 0;
              }
              else
              {
                v32 = MiPfnsWorthTrying(v84, 48 * (int)v34, v101[5], v16, (__int64)&v80);
                if ( v32 )
                  goto LABEL_36;
                v36 = v80;
              }
              if ( (v36 & 1) != 0 )
              {
                ++dword_140C136F4;
                MiEmptyKernelStackCache(v84, 0LL);
              }
              v32 = MiClaimPhysicalRun(v84, v34, v94, v101[3], (__int64)v107, v16, -1, v97, v83, 0LL, &v80);
              v102 = v32;
              if ( v97 )
              {
                v37 = *(_DWORD *)(v97 + 40) >> 12;
                if ( v37 == v88 )
                  goto LABEL_58;
                v101[5] = (unsigned int)(v88 - v37);
              }
              else if ( !v32 )
              {
LABEL_58:
                MiDereferencePageRunsEx((__int64)v85, 1);
                MiDeleteUltraThreadContext((__int64)v107);
                if ( v91 )
                {
                  v40 = v83;
                }
                else
                {
                  v38 = (v34 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                  v39 = (a6 + v34) & 0xFFFFFFFFFFFFFE00uLL;
                  if ( v38 < v39 && (v16 >= 0 || (v16 & 0x1000) == 0) )
                    MiUpdateLargePageBitMap(v84, v38, v39 - v38, 1, 1);
                  v40 = v83;
                  MiConvertContiguousPages(48 * v34 - 0x220000000000LL, a6, v83);
                }
                if ( (v16 & 0x40000000) == 0 )
                {
                  v41 = v90;
                  v42 = -(v16 & 0x100000);
                  v43 = v35 + 48 * a6;
                  do
                  {
                    MiSetPfnOwnedAndActive(v35, v41, -8LL, v40, (v42 != 0) + 1);
                    v35 += 48LL;
                  }
                  while ( v35 != v43 );
                  v34 = v103;
                }
                *v100 = v34;
                return 0LL;
              }
              if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v35 + 40) >> 43) & 0x3FFLL)) == v84 )
              {
                if ( MiIsPageOnBadList(48 * v34 - 0x220000000000LL) )
                {
                  v58 = MiLockPageInline(48 * v34 - 0x220000000000LL);
                  v59 = 48 * v34 - 0x220000000000LL;
                  v60 = v58;
                  if ( MiIsPageOnBadList(v59) )
                  {
                    if ( (v16 & 0x10000000) != 0 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( KiIrqlFlags )
                      {
                        v66 = KeGetCurrentIrql();
                        if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v66 >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          SchedulerAssist = CurrentPrcb->SchedulerAssist;
                          v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                          v65 = (v69 & SchedulerAssist[5]) == 0;
                          SchedulerAssist[5] &= v69;
                          if ( v65 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                      __writecr8(v60);
                      v14 = v84;
                      v70 = 0;
                      v28 = v86;
                      v79 = 0;
                      goto LABEL_128;
                    }
                  }
                  else
                  {
                    v82 = 1;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    v61 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v61 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v61 >= 2u )
                    {
                      v62 = KeGetCurrentPrcb();
                      v63 = v62->SchedulerAssist;
                      v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                      v65 = (v64 & v63[5]) == 0;
                      v63[5] &= v64;
                      if ( v65 )
                        KiRemoveSystemWorkPriorityKick(v62);
                    }
                  }
                  __writecr8(v60);
                  v32 = v102;
                }
                else
                {
                  v82 = 1;
                }
              }
LABEL_36:
              if ( (v80 & 2) != 0 )
                v81 |= 1u;
              if ( v32 >= v101[1] - v101[0] || !LOBYTE(v101[7]) && v101[1] - v101[0] - v32 < v94 )
                v101[3] = v101[1] - v32 - 1;
              v14 = v84;
              v101[1] -= v32;
            }
          }
          if ( !(_DWORD)v30 )
            break;
          v24 = v92;
        }
        v70 = v79;
LABEL_128:
        v29 = v95;
      }
      else
      {
        v70 = v79;
      }
      if ( !v28 )
        goto LABEL_135;
      v22 = v85;
      ++v28;
      v24 = v92;
      v86 = v28;
    }
    while ( v28 < v29 );
    if ( v21 != -1 )
    {
      v71 = (unsigned int *)(v96 + 4);
      v96 = (__int64)v71;
      if ( v71 != v98 )
      {
        v21 = *v71;
        continue;
      }
    }
LABEL_135:
    if ( !v70 || !v82 )
      break;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v105[1] = 16LL;
      v72 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      v106[1] = a6 << 12;
      v106[0] = v72;
      v105[0] = v106;
      EtwTraceKernelEvent((__int64)v105, 1u, 0x20100000u, 0x271u, 0x401A02u);
    }
    v73 = v81;
    ++dword_140C137D8;
    if ( (v16 & 0x4000000) == 0 )
      v73 = v81 & 0xFFFFFFFE;
    if ( !(unsigned int)MiTrimNoStealPagesFromWorkingSets(v14, v73 | 2) )
      break;
    v22 = v85;
    v21 = -1;
    v24 = v92;
    v79 = 0;
    v82 = 0;
    v81 = 0;
  }
  v50 = -1073741801;
  MiDereferencePageRunsEx((__int64)v85, 1);
LABEL_147:
  MiDeleteUltraThreadContext((__int64)v107);
  if ( (v16 & 0x20000000) == 0 )
  {
    MiReturnCommit(v14, a6, v74);
    if ( (_UNKNOWN *)v14 == &MiSystemPartition )
    {
      v75 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v75->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( a6 + CachedResidentAvailable <= 0x100 && a6 < 0x80000 )
        {
          do
          {
            v77 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v75->CachedResidentAvailable,
                    a6 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v65 = (_DWORD)CachedResidentAvailable == v77;
            LODWORD(CachedResidentAvailable) = v77;
            if ( v65 )
              return v50;
          }
          while ( v77 != -1 && a6 + v77 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v75->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v15 = (int)CachedResidentAvailable - 192 + a6;
        }
      }
    }
    if ( v15 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 17280), v15);
  }
  return v50;
}
