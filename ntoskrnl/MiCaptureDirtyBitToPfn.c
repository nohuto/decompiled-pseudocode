/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14032D790
 * Callers:
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiTrimSystemImagePages @ 0x1402B0298 (MiTrimSystemImagePages.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A4834 (MmDbgMarkPfnModifiedWorker.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062C6E4 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  unsigned __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (unsigned __int64 *)(a1 + 16);
    if ( (((*v4 & 0x400) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
      result = MiCapturePageFileInfoInline(v4, 1, 0);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
