/*
 * XREFs of MiReservePtes @ 0x1403274D0
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiMapContiguousMemory @ 0x14029AF58 (MiMapContiguousMemory.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 *     MiCreatePteCopyList @ 0x1402F54C0 (MiCreatePteCopyList.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiInitializePageFaultResources @ 0x140370C30 (MiInitializePageFaultResources.c)
 *     MiBuildDynamicRegion @ 0x1403715AC (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x140392518 (MiReservePageHash.c)
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140728E84 (MiAllocateProcessShadow.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateDumpHibernateResources @ 0x1407FCCCC (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x140809BDC (MiCreatePfnBitMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmAllocateMappingAddressEx @ 0x140869D20 (MmAllocateMappingAddressEx.c)
 *     MmAllocateNonCachedMemory @ 0x140A2AC20 (MmAllocateNonCachedMemory.c)
 *     MiLockAndMapEntireDriver @ 0x140A31608 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A37488 (MiMapHotPatchImageInSystemSpace.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x140A41CBC (MiExpandPartitionIds.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     MiInitializeGapFrames @ 0x140B36EE8 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140B389FC (MiMapDummyPages.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 *     MiInitializeMirroring @ 0x140B3AF20 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MiInitializePteInfo @ 0x140B3B548 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
 *     MiCreateRetpolineBitmap @ 0x140B966F0 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiExpandPtes @ 0x140210210 (MiExpandPtes.c)
 *     MiEmptyPteBins @ 0x140299F00 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x14029A168 (MiPteBinsNeedTrimming.c)
 *     MiFlushTbAsNeeded @ 0x140324290 (MiFlushTbAsNeeded.c)
 *     MiCheckProcessorPteCache @ 0x140327B90 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x1403293B0 (RtlInterlockedSetClearRunEx.c)
 *     MiCheckPteReserve @ 0x14065CFD4 (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  ULONG_PTR v8; // r14
  int v9; // r14d
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // r8
  __int128 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v29; // r10
  unsigned int v30; // r11d
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned __int64 v42; // r9
  unsigned __int64 *v43; // rcx
  __int64 v44; // r8
  unsigned __int64 *v45; // r8
  unsigned int v46; // r8d
  __int64 v47; // rcx
  bool v48; // sf
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+30h] [rbp-98h]
  __int128 *v58; // [rsp+50h] [rbp-78h]
  unsigned __int64 v59; // [rsp+58h] [rbp-70h]
  __int128 v60; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 *v61; // [rsp+70h] [rbp-58h]
  int v62; // [rsp+D8h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  v5 = a2;
  v6 = a2;
  v60 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140C695C0 && a2 <= 0x40uLL )
  {
    v8 = MiCheckProcessorPteCache(a2);
    if ( v8 )
    {
LABEL_34:
      if ( (dword_140D1D1CC & 2) != 0 )
        MiCheckPteReserve(v8, v5);
LABEL_36:
      if ( (unsigned int)v4 > 0x10 )
        goto LABEL_47;
      if ( (_DWORD)v4 )
      {
        do
        {
          v26 = v8 + 8LL * v3;
          v27 = *(_QWORD *)v26;
          if ( v26 >= 0xFFFFF6FB7DBED000uLL
            && v26 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v27 & 1) != 0
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v54 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
              if ( (v54 & 0x20) != 0 )
                v27 |= 0x20uLL;
              if ( (v54 & 0x42) != 0 )
                v27 |= 0x42uLL;
            }
          }
          if ( qword_140C657C0 && (v27 & 0x10) == 0 )
            v27 &= ~qword_140C657C0;
          if ( (v27 & 0xFFFFFFFF00000000uLL) != 0 )
            break;
          ++v3;
        }
        while ( v3 < (unsigned int)v4 );
      }
      if ( v3 != (_DWORD)v4 )
LABEL_47:
        MiFlushTbAsNeeded(v8, v5, 0, 0);
      return v8;
    }
  }
  if ( (unsigned int)v4 < 0x200 )
    goto LABEL_8;
  MiEmptyPteBins(a1);
  v37 = MiExpandPtes((__int64 *)a1, v4);
  v8 = v37;
  if ( v37 )
  {
    if ( (__int64 *)a1 == &qword_140C695C0 && (dword_140D1D1CC & 2) != 0 )
      MiCheckPteReserve(v37, v4);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)v6);
    return v8;
  }
  if ( (__int64 *)a1 != &qword_140C695C0 )
  {
LABEL_8:
    v9 = 0;
    v62 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (unsigned __int64 *)a1;
        v12 = *(_QWORD *)(a1 + 56);
        v55 = v12;
        v58 = (__int128 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_74:
        if ( !v10 || v10 == *(_QWORD *)(a1 + 64) )
        {
          if ( (v9 & 1) != 0 || (v9 |= 1u, v62 = v9, !(unsigned int)MiEmptyPteBins(a1)) )
          {
            if ( (v9 & 2) != 0
              || (v9 |= 2u, v62 = v9, !MiPteBinsNeedTrimming((_QWORD *)a1))
              || !(unsigned int)MiEmptyPteBins(a1) )
            {
              v8 = MiExpandPtes((__int64 *)a1, v5);
              if ( v8 )
                goto LABEL_33;
              if ( (v62 & 4) != 0 )
                goto LABEL_136;
              v9 = v62 | 4;
              v62 |= 4u;
              MiEmptyPteBins(a1);
            }
          }
        }
      }
      v10 = *(_QWORD *)(a1 + 64);
      v59 = v10;
      if ( v10 )
      {
        if ( *(_QWORD *)a1 < v10 )
        {
          v10 = 0LL;
          v59 = 0LL;
        }
        else
        {
          *(_QWORD *)&v13 = *(_QWORD *)a1 - v10;
          *((_QWORD *)&v13 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v10 >> 6);
          v60 = v13;
          v11 = (unsigned __int64 *)&v60;
          v58 = &v60;
          if ( v12 )
          {
            v12 -= v10;
            v55 = v12;
          }
        }
      }
      v14 = *v11;
      v15 = v12;
      v56 = *v11;
      if ( v12 >= *v11 )
        v15 = 0LL;
      v16 = v14 - 1;
      if ( v6 )
      {
        v17 = v11[1];
        while ( v16 - v15 + 1 < v6 )
        {
          v23 = -1LL;
LABEL_53:
          if ( !v15 )
          {
LABEL_25:
            v10 = v59;
            v24 = v23;
            v11 = (unsigned __int64 *)v58;
            v5 = v4;
            goto LABEL_26;
          }
          v29 = v6 + v12;
          v15 = 0LL;
          if ( v6 + v12 > v14 )
            v29 = v14;
          v16 = v29 - 1;
        }
        v18 = v16 - v6 + 1;
        v57 = v18;
        v19 = v17 + 8 * (v18 >> 6);
        v20 = *(_QWORD *)(v17 + 8 * (v15 >> 6)) | ((1LL << (v15 & 0x3F)) - 1);
        v21 = (unsigned __int64 *)(v17 + 8 * (v15 >> 6));
        if ( v6 > 0x7F )
        {
          v31 = (v18 & 0x3F) == 0;
          v39 = v19 + 8;
          if ( v31 )
            v39 = v17 + 8 * ((v16 - v6 + 1) >> 6);
          if ( v20 )
          {
            if ( *++v21 )
            {
              v42 = v16 - v6 + 1;
              goto LABEL_102;
            }
            v31 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
            if ( v31 )
              v41 = 64;
            else
              v41 = 63 - v40;
            v42 = v16 - v6 + 1;
          }
          else
          {
            v42 = v16 - v6 + 1;
            v41 = 0;
          }
          while ( 1 )
          {
            v23 = ((__int64)((__int64)v21 - v17) >> 3 << 6) - v41;
            if ( v23 > v42 )
              break;
            v45 = &v21[(v6 - v41) >> 6];
            for ( ++v21; v21 != v45; ++v21 )
            {
              if ( *v21 )
                goto LABEL_102;
            }
            v46 = ((_BYTE)v6 - (_BYTE)v41) & 0x3F;
            if ( (((_BYTE)v6 - (_BYTE)v41) & 0x3F) == 0 )
              goto LABEL_24;
            v31 = !_BitScanForward64((unsigned __int64 *)&v47, *v21);
            if ( v31 )
              LODWORD(v47) = 64;
            if ( (unsigned int)v47 >= v46 )
              goto LABEL_24;
            do
            {
LABEL_102:
              v43 = v21;
              if ( (unsigned __int64)v21 > v39 )
              {
LABEL_83:
                v23 = -1LL;
                goto LABEL_52;
              }
              ++v21;
            }
            while ( *v21 );
            v31 = !_BitScanReverse64((unsigned __int64 *)&v44, *v43);
            if ( v31 )
              v41 = 64;
            else
              v41 = 63 - v44;
          }
        }
        else if ( v6 >= 0x40 )
        {
LABEL_115:
          v48 = v20 < 0;
          while ( !v48 )
          {
LABEL_117:
            v31 = !_BitScanReverse64((unsigned __int64 *)&v49, v20);
            if ( v31 )
              v50 = 64;
            else
              v50 = 63 - v49;
            v23 = ((((__int64)((__int64)v21 - v17) >> 3) + 1) << 6) - v50;
            if ( v23 > v18 )
              goto LABEL_51;
            v51 = v6 - v50;
            if ( v6 == v50 )
              goto LABEL_24;
            v20 = v21[1];
            ++v21;
            if ( v51 < 0x40 )
              goto LABEL_122;
            v48 = v20 < 0;
            if ( !v20 )
            {
              v51 -= 64LL;
              if ( !v51 )
                goto LABEL_24;
              v20 = v21[1];
              ++v21;
LABEL_122:
              v31 = !_BitScanForward64(&v52, v20);
              if ( v31 )
                v52 = 64LL;
              if ( v52 >= v51 )
                goto LABEL_24;
              goto LABEL_115;
            }
          }
          while ( (unsigned __int64)++v21 <= v19 )
          {
            v20 = *v21;
            if ( (*v21 & 0x8000000000000000uLL) == 0LL )
              goto LABEL_117;
          }
        }
        else if ( v6 > 1 )
        {
          v30 = 0;
          v61 = (unsigned __int64 *)(v17 + 8 * (v16 >> 6));
          while ( 1 )
          {
            if ( v20 == -1 )
            {
              while ( 1 )
              {
                if ( (unsigned __int64)++v21 > v19 )
                  goto LABEL_83;
                v20 = *v21;
                if ( *v21 != -1LL )
                {
                  v30 = 0;
                  break;
                }
              }
            }
            v31 = !_BitScanForward64((unsigned __int64 *)&v32, v20);
            if ( v31 )
              LODWORD(v32) = 64;
            if ( v30 + (unsigned int)v32 >= v6 )
              break;
            v33 = v6;
            v34 = ~v20;
            while ( 1 )
            {
              v34 &= v34 >> (v33 >> 1);
              if ( !v34 )
                break;
              v33 -= v33 >> 1;
              if ( v33 <= 1 )
              {
                _BitScanForward64(&v35, v34);
                v36 = (unsigned int)v35;
                goto LABEL_66;
              }
            }
            if ( v21 == v61 )
              goto LABEL_83;
            v31 = !_BitScanReverse64((unsigned __int64 *)&v38, v20);
            if ( v31 )
              v30 = 64;
            else
              v30 = 63 - v38;
            v20 = v21[1];
            ++v21;
          }
          v36 = -(__int64)v30;
LABEL_66:
          v23 = ((__int64)((__int64)v21 - v17) >> 3 << 6) + v36;
          if ( v23 <= v57 )
            goto LABEL_24;
        }
        else
        {
          if ( v20 != -1 )
          {
LABEL_23:
            _BitScanForward64(&v22, ~v20);
            v23 = v22 + ((__int64)((__int64)v21 - v17) >> 3 << 6);
            if ( v23 > v18 )
            {
              v23 = -1LL;
            }
            else
            {
LABEL_24:
              if ( v23 != -1LL )
                goto LABEL_25;
            }
            goto LABEL_52;
          }
          while ( (unsigned __int64)++v21 <= v19 )
          {
            v20 = *v21;
            if ( *v21 != -1LL )
              goto LABEL_23;
          }
        }
LABEL_51:
        v23 = -1LL;
LABEL_52:
        v14 = v56;
        v12 = v55;
        goto LABEL_53;
      }
      v24 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_26:
      if ( v24 == -1LL )
      {
        v9 = v62;
        goto LABEL_74;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v11, v24, v6) )
      {
        if ( v58 == &v60 )
          v24 += v10;
        *(_QWORD *)(a1 + 56) = v6 + v24;
        v25 = 16 * v24;
        if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
          v25 = v24;
        v8 = *(_QWORD *)(a1 + 16) + 8 * v25;
LABEL_33:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)v6);
        if ( (__int64 *)a1 != &qword_140C695C0 )
          goto LABEL_36;
        goto LABEL_34;
      }
      v9 = v62;
    }
  }
LABEL_136:
  ++*(_DWORD *)(a1 + 32);
  return 0LL;
}
