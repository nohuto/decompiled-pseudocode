/*
 * XREFs of MiReservePtes @ 0x140226570
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiCreatePteCopyList @ 0x1402404A8 (MiCreatePteCopyList.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x1402E8974 (MiMapContiguousMemory.c)
 *     MmCopyMemory @ 0x14030C030 (MmCopyMemory.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiMapSinglePage @ 0x14036AA54 (MiMapSinglePage.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397174 (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildDynamicRegion @ 0x1403B5924 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x1403BF958 (MiReservePageHash.c)
 *     MiInitializePageFaultResources @ 0x1403CA0A8 (MiInitializePageFaultResources.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052A844 (MiReserveLowPrioritySystemPtes.c)
 *     MmMapMdl @ 0x1405374F0 (MmMapMdl.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x140680124 (MiValidateImagePfn.c)
 *     MmAllocateMappingAddressEx @ 0x140691450 (MmAllocateMappingAddressEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075C368 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x14078EA9C (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x1407B9CA4 (MiCreatePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6740 (MmAllocateNonCachedMemory.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CC8DC (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0B44 (MiLockAndMapEntireDriver.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1408DAEA8 (MiExpandPartitionIds.c)
 *     MmInitializeProcessor @ 0x14099F378 (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A4E918 (MiInitializePteInfo.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiInitializeKernelCfg @ 0x140A55E64 (MiInitializeKernelCfg.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A70FCC (MiMapDummyPages.c)
 *     MiInitializeCrashDumpPtes @ 0x140A92264 (MiInitializeCrashDumpPtes.c)
 *     MiCreateRetpolineBitmap @ 0x140A9244C (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A92754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiCheckProcessorPteCache @ 0x140225E50 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x140228C50 (RtlInterlockedSetClearRunEx.c)
 *     MiEmptyPteBins @ 0x14028F900 (MiEmptyPteBins.c)
 *     MiFlushTbAsNeeded @ 0x1402B66A0 (MiFlushTbAsNeeded.c)
 *     MiExpandPtes @ 0x14030A9E8 (MiExpandPtes.c)
 *     MiPteBinsNeedTrimming @ 0x14033B3E4 (MiPteBinsNeedTrimming.c)
 *     MiCheckPteReserve @ 0x140553CDC (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  ULONG_PTR v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v14; // r14d
  unsigned __int64 v15; // r12
  __int128 *v16; // r13
  unsigned __int64 v17; // r8
  __int128 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r13
  __int64 v24; // r8
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r10
  unsigned int v32; // r11d
  unsigned __int64 *v33; // r13
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // r10d
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // r11
  __int64 v43; // r8
  unsigned int v44; // ecx
  unsigned __int64 *v45; // r8
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rax
  bool v49; // sf
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 v60; // [rsp+50h] [rbp-78h]
  __int128 *v61; // [rsp+58h] [rbp-70h]
  __int128 v62; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-58h]
  int v64; // [rsp+D8h] [rbp+10h]

  v4 = *(_DWORD *)(a1 + 24);
  v5 = 0;
  v6 = a2;
  v7 = a2;
  v8 = a2;
  v62 = 0LL;
  if ( (v4 & 4) != 0 )
  {
    v8 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140C4EF40 && a2 <= 0x40uLL )
  {
    v10 = MiCheckProcessorPteCache(a2);
    if ( v10 )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
        goto LABEL_48;
      if ( (__int64 *)a1 == &qword_140C4EF40 && (dword_140CFB17C & 2) != 0 )
        MiCheckPteReserve(v10, v7);
      if ( (unsigned int)v6 > 0x10 )
        goto LABEL_48;
      if ( (_DWORD)v6 )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + 8LL * v5);
          v12 = v10 + 8LL * v5;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL
            && v12 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v11 & 1) != 0
            && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v55 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
              v56 = v11 | 0x20;
              if ( (v55 & 0x20) == 0 )
                v56 = *(_QWORD *)(v10 + 8LL * v5);
              v11 = v56;
              if ( (v55 & 0x42) != 0 )
                v11 = v56 | 0x42;
            }
          }
          if ( qword_140C4DF40 && (v11 & 0x10) == 0 )
            v11 &= ~qword_140C4DF40;
          if ( (v11 & 0xFFFFFFFF00000000uLL) != 0 )
            break;
          ++v5;
        }
        while ( v5 < (unsigned int)v6 );
      }
      if ( v5 != (_DWORD)v6 )
LABEL_48:
        MiFlushTbAsNeeded(v10);
      return v10;
    }
  }
  if ( (unsigned int)v6 < 0x200 )
    goto LABEL_23;
  v41 = MiExpandPtes(a1, v6);
  v10 = v41;
  if ( v41 )
  {
    if ( (__int64 *)a1 == &qword_140C4EF40 && (dword_140CFB17C & 2) != 0 )
      MiCheckPteReserve(v41, v6);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v8);
    return v10;
  }
  if ( (__int64 *)a1 != &qword_140C4EF40 )
  {
LABEL_23:
    v14 = 0;
    v64 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (__int128 *)a1;
        v17 = *(_QWORD *)(a1 + 64);
        v57 = v17;
        v61 = (__int128 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_59:
        if ( !v15 || v15 == *(_QWORD *)(a1 + 72) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v14 & 1) != 0 || (v14 |= 1u, v64 = v14, (unsigned int)MiEmptyPteBins(a1, 0LL) != 1))
            && ((v14 & 2) != 0
             || (v14 |= 2u, v64 = v14, (unsigned int)MiPteBinsNeedTrimming(a1) != 1)
             || (unsigned int)MiEmptyPteBins(a1, 1LL) != 1) )
          {
            v10 = MiExpandPtes(a1, v6);
            if ( v10 )
              goto LABEL_47;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v64 & 4) != 0 )
              goto LABEL_68;
            v14 = v64 | 4;
            v64 |= 4u;
            MiEmptyPteBins(a1, 1LL);
          }
        }
      }
      v15 = *(_QWORD *)(a1 + 72);
      v60 = v15;
      if ( v15 )
      {
        if ( *(_QWORD *)a1 < v15 )
        {
          v15 = 0LL;
          v60 = 0LL;
        }
        else
        {
          *(_QWORD *)&v18 = *(_QWORD *)a1 - v15;
          *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v15 >> 6);
          v62 = v18;
          v16 = &v62;
          v61 = &v62;
          if ( v17 )
          {
            v17 -= v15;
            v57 = v17;
          }
        }
      }
      v19 = *(_QWORD *)v16;
      v20 = v17;
      v21 = *((_QWORD *)v16 + 1);
      v58 = *(_QWORD *)v16;
      if ( v17 >= *(_QWORD *)v16 )
        v20 = 0LL;
      v59 = *((_QWORD *)v16 + 1);
      v22 = v19 - 1;
      if ( v8 )
      {
        while ( v22 - v20 + 1 < v8 )
        {
          v27 = -1LL;
LABEL_54:
          if ( !v20 )
          {
LABEL_39:
            v15 = v60;
            v28 = v27;
            v16 = v61;
            goto LABEL_40;
          }
          v31 = v8 + v17;
          if ( v8 + v17 > v19 )
            v31 = v19;
          v21 = v59;
          v22 = v31 - 1;
          v20 = 0LL;
        }
        v23 = v22 - v8 + 1;
        v63 = v23;
        a4 = v21 + 8 * (v23 >> 6);
        v24 = *(_QWORD *)(v21 + 8 * (v20 >> 6)) | ((1LL << (v20 & 0x3F)) - 1);
        v25 = (unsigned __int64 *)(v21 + 8 * (v20 >> 6));
        if ( v8 > 0x7F )
        {
          v42 = a4 + 8;
          if ( (v23 & 0x3F) == 0 )
            v42 = a4;
          if ( v24 )
          {
            if ( *++v25 )
            {
              a4 = v59;
              goto LABEL_103;
            }
            v34 = !_BitScanReverse64((unsigned __int64 *)&v48, v24);
            if ( v34 )
              v44 = 64;
            else
              v44 = 63 - v48;
            a4 = v59;
          }
          else
          {
            a4 = v59;
            v44 = 0;
          }
          while ( 1 )
          {
            v27 = ((__int64)((__int64)v25 - a4) >> 3 << 6) - v44;
            if ( v27 > v23 )
              break;
            v45 = &v25[(v8 - v44) >> 6];
            if ( ++v25 == v45 )
            {
LABEL_111:
              v46 = ((_BYTE)v8 - (_BYTE)v44) & 0x3F;
              if ( (((_BYTE)v8 - (_BYTE)v44) & 0x3F) != 0 )
              {
                v34 = !_BitScanForward64((unsigned __int64 *)&v47, *v25);
                if ( v34 )
                  LODWORD(v47) = 64;
                if ( (unsigned int)v47 < v46 )
                  goto LABEL_103;
              }
              goto LABEL_38;
            }
            while ( !*v25 )
            {
              if ( ++v25 == v45 )
                goto LABEL_111;
            }
            do
            {
LABEL_103:
              if ( (unsigned __int64)v25 > v42 )
              {
LABEL_87:
                v27 = -1LL;
                goto LABEL_53;
              }
              ++v25;
            }
            while ( *v25 );
            v34 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v25 - 1));
            if ( v34 )
              v44 = 64;
            else
              v44 = 63 - v43;
          }
        }
        else
        {
          if ( v8 >= 0x40 )
          {
            while ( 2 )
            {
              v49 = v24 < 0;
              while ( 1 )
              {
                if ( v49 )
                {
                  do
                  {
                    if ( (unsigned __int64)++v25 > a4 )
                      goto LABEL_52;
                    v24 = *v25;
                  }
                  while ( (*v25 & 0x8000000000000000uLL) != 0LL );
                }
                v34 = !_BitScanReverse64((unsigned __int64 *)&v50, v24);
                if ( v34 )
                  v51 = 64;
                else
                  v51 = 63 - v50;
                v27 = ((((__int64)((__int64)v25 - v21) >> 3) + 1) << 6) - v51;
                if ( v27 > v23 )
                  goto LABEL_52;
                v52 = v8 - v51;
                if ( v8 == v51 )
                  goto LABEL_38;
                v24 = v25[1];
                ++v25;
                if ( v52 < 0x40 )
                  break;
                v49 = v24 < 0;
                if ( !v24 )
                {
                  v52 -= 64LL;
                  if ( !v52 )
                    goto LABEL_38;
                  v24 = v25[1];
                  ++v25;
                  break;
                }
              }
              v34 = !_BitScanForward64(&v53, v24);
              if ( v34 )
                v53 = 64LL;
              if ( v53 < v52 )
                continue;
              goto LABEL_38;
            }
          }
          if ( v8 > 1 )
          {
            v32 = 0;
            v33 = (unsigned __int64 *)(v59 + 8 * (v22 >> 6));
            while ( 1 )
            {
              if ( v24 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++v25 > a4 )
                    goto LABEL_87;
                  v24 = *v25;
                  if ( *v25 != -1LL )
                  {
                    v32 = 0;
                    break;
                  }
                }
              }
              v34 = !_BitScanForward64((unsigned __int64 *)&v35, v24);
              if ( v34 )
                LODWORD(v35) = 64;
              if ( v32 + (unsigned int)v35 >= v8 )
                break;
              v36 = v8;
              v37 = ~v24;
              while ( 1 )
              {
                v37 &= v37 >> (v36 >> 1);
                if ( !v37 )
                  break;
                v36 -= v36 >> 1;
                if ( v36 <= 1 )
                {
                  _BitScanForward64(&v38, v37);
                  v39 = (unsigned int)v38;
                  goto LABEL_78;
                }
              }
              if ( v25 == v33 )
                goto LABEL_87;
              v34 = !_BitScanReverse64((unsigned __int64 *)&v40, v24);
              if ( v34 )
                v32 = 64;
              else
                v32 = 63 - v40;
              v24 = v25[1];
              ++v25;
            }
            v39 = -(__int64)v32;
LABEL_78:
            v27 = ((__int64)((__int64)v25 - v59) >> 3 << 6) + v39;
            if ( v27 <= v63 )
              goto LABEL_38;
          }
          else
          {
            if ( v24 != -1 )
            {
LABEL_37:
              _BitScanForward64(&v26, ~v24);
              v27 = v26 + ((__int64)((__int64)v25 - v21) >> 3 << 6);
              if ( v27 > v23 )
              {
                v27 = -1LL;
              }
              else
              {
LABEL_38:
                if ( v27 != -1LL )
                  goto LABEL_39;
              }
LABEL_53:
              v19 = v58;
              v17 = v57;
              goto LABEL_54;
            }
            while ( (unsigned __int64)++v25 <= a4 )
            {
              v24 = *v25;
              if ( *v25 != -1LL )
                goto LABEL_37;
            }
          }
        }
LABEL_52:
        v27 = -1LL;
        goto LABEL_53;
      }
      v28 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_40:
      if ( v28 == -1LL )
      {
        v14 = v64;
        goto LABEL_59;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v16, v28, v8, a4) )
      {
        v29 = v28 + v15;
        if ( v16 != &v62 )
          v29 = v28;
        v30 = 16 * v29;
        *(_QWORD *)(a1 + 64) = v29 + v8;
        if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
          v30 = v29;
        v10 = *(_QWORD *)(a1 + 16) + 8 * v30;
LABEL_47:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v8);
        v7 = v6;
        goto LABEL_5;
      }
      v14 = v64;
    }
  }
LABEL_68:
  ++**(_DWORD **)(a1 + 32);
  return 0LL;
}
