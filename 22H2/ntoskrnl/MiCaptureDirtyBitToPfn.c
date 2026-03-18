/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140282FE0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215680 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageAndSetDirty @ 0x140217534 (MiLockPageAndSetDirty.c)
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteValidSystemPage @ 0x1402806F0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285750 (MiMakePteClean.c)
 *     MiTrimSystemImagePages @ 0x140290FD4 (MiTrimSystemImagePages.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeleteBatch @ 0x1402D5F70 (MiDeleteBatch.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMakeFaultPfnActive @ 0x140334D40 (MiMakeFaultPfnActive.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9644 (MmDbgMarkPfnModifiedWorker.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062EB64 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCompleteSecureProcessFault @ 0x140645C08 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x140A32C50 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1403487C4 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1LL, 0LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
