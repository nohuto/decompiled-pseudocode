/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850
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

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v2 = *(_QWORD *)(v1 + 80);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v4,
      (unsigned int)&LockRelease,
      v5,
      v2,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v6 = *(struct _ERESOURCE **)(v1 + 80);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion(v8, v7);
  }
}
