/*
 * XREFs of MiReleasePtes @ 0x14027CE90
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiMapContiguousMemory @ 0x14029AF58 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     MiReturnPteMappingSet @ 0x14032DFE8 (MiReturnPteMappingSet.c)
 *     MmDeleteProcessor @ 0x14061578C (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x140636BC4 (MiExtendPagingFileMaximum.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiReleasePteCopyList @ 0x14065EA2C (MiReleasePteCopyList.c)
 *     MiFreeForkMaps @ 0x1406621B0 (MiFreeForkMaps.c)
 *     MiReleasePageHash @ 0x14066465C (MiReleasePageHash.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiCreatePfnBitMaps @ 0x140809BDC (MiCreatePfnBitMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmFreeMappingAddress @ 0x14086B720 (MmFreeMappingAddress.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     MmFreeNonCachedMemory @ 0x140A2AE10 (MmFreeNonCachedMemory.c)
 *     MmReleaseDumpHibernateResources @ 0x140A2DDF8 (MmReleaseDumpHibernateResources.c)
 *     MiUnlockEntireDriver @ 0x140A31880 (MiUnlockEntireDriver.c)
 *     MiReleaseHotPatchResources @ 0x140A39030 (MiReleaseHotPatchResources.c)
 *     MmFreeIsrStack @ 0x140A39B00 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x140A404AC (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x140A41CBC (MiExpandPartitionIds.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MiDeleteEnclavePages @ 0x140AAA2F8 (MiDeleteEnclavePages.c)
 *     MiInitializeGapFrames @ 0x140B36EE8 (MiInitializeGapFrames.c)
 *     MiInitializePteInfo @ 0x140B3B548 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 *     MiCreateRetpolineBitmap @ 0x140B966F0 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14020E538 (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x14027D0C0 (MiInsertCachedPte.c)
 *     MiAttemptCoalesce @ 0x14027E1A0 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1402EB3FC (MiReturnSystemPtes.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiCheckPteRelease @ 0x14065CD04 (MiCheckPteRelease.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, __int64 *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v7; // rsi
  int v8; // r12d
  _QWORD *v9; // rcx
  ULONG_PTR v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  bool v17; // zf
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // r10
  unsigned __int64 v21; // r8
  volatile signed __int32 *v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v24 = 0LL;
  memset(v25, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C695C0 && (dword_140D1D1CC & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 < 0x200 || (__int64 *)a1 != &qword_140C695C0 )
  {
    v8 = 0;
    if ( BugCheckParameter4 >= *(_QWORD *)a1 )
      goto LABEL_27;
    if ( v7 > 1 )
    {
      if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
        goto LABEL_27;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v14 = (_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v15 = (_QWORD *)(v12 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6));
      if ( v14 == v15 )
      {
        v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4) & v13) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4;
      }
      else
      {
        if ( ((-1LL << BugCheckParameter4) & v13) != -1LL << BugCheckParameter4 )
          goto LABEL_27;
        v16 = v14 + 1;
        if ( v16 != v15 )
        {
          while ( *v16 == -1LL )
          {
            if ( ++v16 == v15 )
              goto LABEL_24;
          }
          goto LABEL_27;
        }
LABEL_24:
        v17 = (*v16 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1);
      }
      if ( v17 )
        goto LABEL_13;
    }
    else if ( v7 == 1
           && _bittest64(
                (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                BugCheckParameter4 & 0x3F) )
    {
LABEL_13:
      if ( !(_DWORD)v3 )
        goto LABEL_16;
      goto LABEL_14;
    }
LABEL_27:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  v8 = 1;
LABEL_14:
  v9 = a2;
  v10 = v3;
  do
  {
    *v9++ = ZeroPte;
    --v10;
  }
  while ( v10 );
LABEL_16:
  result = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( !(_DWORD)result )
  {
    if ( v8 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      return MiReturnSystemPtes(a1, v8, BugCheckParameter4, (v3 + 511) & 0xFFFFFE00, 1);
    }
    else
    {
      v24 = 0LL;
      MiInitializeTbFlushStamps(&v24);
      v18 = v24;
      if ( (_DWORD)v3 )
      {
        v19 = v3;
        do
        {
          *a2++ = v18;
          --v19;
        }
        while ( v19 );
      }
      if ( qword_140C657C0 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C657C0;
      if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
      {
        v25[1] = 20LL;
        LODWORD(v25[0]) = 0;
        WORD2(v25[0]) = 0;
        v25[2] = 0LL;
        v25[3] = 0LL;
        MiInsertTbFlushEntry(v25, (__int64)((_QWORD)&a2[-v3] << 25) >> 16, v3);
        MiFlushTbList(v25);
      }
      v20 = BugCheckParameter4 & 0x1F;
      v21 = v7;
      v22 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v7 + v20 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v22, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v20));
          v21 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v22;
        }
        if ( v21 >= 0x20 )
        {
          v23 = v21 >> 5;
          v21 += -32LL * (v21 >> 5);
          do
          {
            *v22++ = 0;
            --v23;
          }
          while ( v23 );
        }
        if ( v21 )
          _InterlockedAnd(v22, -1 << v21);
      }
      else if ( v7 == 32 )
      {
        *v22 = 0;
      }
      else
      {
        _InterlockedAnd(v22, ~(((1 << v7) - 1) << v20));
      }
      result = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      if ( result > 0x40000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return result;
}
