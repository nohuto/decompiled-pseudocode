/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8
 * Callers:
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0016AF0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCaps @ 0x1C002E300 (NtGdiGetDeviceCaps.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0074EDC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00CD460 (NtGdiGetDeviceCapsAll.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
