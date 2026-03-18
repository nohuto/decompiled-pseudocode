/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C001C510 (GreSuspendDirectDraw.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00A67F0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C015F630 (NtGdiGetDeviceCapsAll.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0167244 (DrvFunctionalizeDisplayConfig.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreSetMagicColors @ 0x1C016C76C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v3 = *(_QWORD *)(v2 + 80);
  if ( v3 )
    ExEnterPriorityRegionAndAcquireResourceShared(v3);
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v2 + 80));
  return this;
}
