/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C006BFB0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     DrvEnumDisplaySettings @ 0x1C006C130 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C018C1F0 (NtGdiGetDeviceCapsAll.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0193FD4 (DrvFunctionalizeDisplayConfig.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // r8d

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v3 = *(_QWORD *)(v2 + 80);
  if ( v3 )
    ExEnterPriorityRegionAndAcquireResourceShared(v3);
  v4 = *(_QWORD *)(v2 + 80);
  v5 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v5 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v5,
      (unsigned int)&LockAcquireShared,
      v6,
      v4,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  return this;
}
