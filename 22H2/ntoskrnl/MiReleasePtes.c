/*
 * XREFs of MiReleasePtes @ 0x140245170
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x1402E8974 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     MmCopyMemory @ 0x14030C030 (MmCopyMemory.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x140323F44 (MiReleasePteCopyList.c)
 *     MiDeleteKernelStack @ 0x14033B750 (MiDeleteKernelStack.c)
 *     MiZeroInParallelWorker @ 0x140357570 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiUnmapSinglePage @ 0x14036AA14 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397174 (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x14052DF10 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x1405374F0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x140542FD0 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 *     MiReleasePageHash @ 0x14055D604 (MiReleasePageHash.c)
 *     MiReturnPteMappingPair @ 0x140563600 (MiReturnPteMappingPair.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140660414 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x140680124 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075C368 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     MmFreeMappingAddress @ 0x140767D20 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140774230 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407B9CA4 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1408C6930 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x1408CE49C (MiReleaseHotPatchResources.c)
 *     MiUnlockEntireDriver @ 0x1408D0DC4 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1408D12A8 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x1408D87A0 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1408DAEA8 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x1409B0CA0 (MiDeleteEnclavePages.c)
 *     MiInitializePteInfo @ 0x140A4E918 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x140A9244C (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A92754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertCachedPte @ 0x140245570 (MiInsertCachedPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiAttemptCoalesce @ 0x1402C95B0 (MiAttemptCoalesce.c)
 *     MiInitializeTbFlushStamps @ 0x1402E9930 (MiInitializeTbFlushStamps.c)
 *     MiReturnSystemPtes @ 0x14031B16C (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiCheckPteRelease @ 0x140553A10 (MiCheckPteRelease.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r10
  _QWORD *v10; // r8
  _QWORD *v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rbx
  unsigned __int64 result; // rax
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  _QWORD *v20; // rbx
  char v21; // al
  ULONG_PTR v22; // r10
  unsigned __int64 v23; // r9
  volatile signed __int32 *v24; // r8
  unsigned __int64 v25; // rdx
  signed __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-118h]
  __int64 v28; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v29[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v28 = 0LL;
  memset(v29, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C4EF40 && (dword_140CFB17C & 2) != 0 )
    MiCheckPteRelease(a2, (unsigned int)v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C4EF40 )
  {
    v27 = 1;
    goto LABEL_25;
  }
  v27 = 0;
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_55;
  if ( v7 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
      goto LABEL_55;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 8 * (BugCheckParameter4 >> 6));
    v10 = (_QWORD *)(v8 + 8 * (BugCheckParameter4 >> 6));
    v11 = (_QWORD *)(v8 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6));
    if ( v10 == v11 )
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4;
      v13 = v9 & v12;
    }
    else
    {
      if ( (v9 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
        goto LABEL_55;
      v14 = v10 + 1;
      if ( v14 != v11 )
      {
        while ( *v14 == -1LL )
        {
          if ( ++v14 == v11 )
            goto LABEL_23;
        }
        goto LABEL_55;
      }
LABEL_23:
      v12 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1);
      v13 = v12 & *v14;
    }
    if ( v13 == v12 )
      goto LABEL_25;
LABEL_55:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v7 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_55;
LABEL_25:
  if ( (_DWORD)v3 )
  {
    v15 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v15;
    }
    while ( v15 );
  }
  v16 = &a2[-v3];
  if ( v27 )
    goto LABEL_50;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v16, (unsigned int)v3), (_DWORD)result != 1) )
  {
    MiInitializeTbFlushStamps(&v28);
    v18 = v28;
    if ( (_DWORD)v3 )
    {
      v19 = v3;
      do
      {
        *v16++ = v18;
        --v19;
      }
      while ( v19 );
    }
    v20 = &v16[-v3];
    if ( qword_140C4DF40 && (v18 & 0x10) == 0 )
      v18 &= ~qword_140C4DF40;
    if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v21 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      WORD2(v29[0]) = 0;
      v29[2] = 0LL;
      LODWORD(v29[0]) = v21 & 2;
      LODWORD(v29[1]) = 20;
      v29[3] = 0LL;
      MiInsertTbFlushEntry(v29, (__int64)((_QWORD)v20 << 25) >> 16, v3, 0LL);
      MiFlushTbList(v29);
    }
    v22 = BugCheckParameter4 & 0x1F;
    v23 = v7;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v7 + v22 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v24, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v22));
        v23 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v24;
      }
      if ( v23 >= 0x20 )
      {
        v25 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v24++ = 0;
          --v25;
        }
        while ( v25 );
      }
      if ( v23 )
        _InterlockedAnd(v24, -1 << v23);
    }
    else if ( v7 == 32 )
    {
      *v24 = 0;
    }
    else
    {
      _InterlockedAnd(v24, ~(((1 << v7) - 1) << v22));
    }
LABEL_50:
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v7);
    if ( v27 == 1 )
    {
      return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
    }
    else
    {
      result = v7 + v26;
      if ( result > 0x40000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return result;
}
