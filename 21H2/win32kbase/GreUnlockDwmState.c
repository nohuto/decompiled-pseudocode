/*
 * XREFs of GreUnlockDwmState @ 0x1C0030A50
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0006AA0 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00907F0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C009090C (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C0090B20 (UserReferenceDwmApiPort.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0211930 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C0211E50 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0212060 (NtDCompositionSetChildRootVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0212E40 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0229060 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022D3FC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022DCF8 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion();
  }
  return result;
}
