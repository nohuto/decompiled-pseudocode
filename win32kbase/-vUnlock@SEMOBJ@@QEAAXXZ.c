/*
 * XREFs of ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4
 * Callers:
 *     ulIndexToRGB @ 0x1C0008B00 (ulIndexToRGB.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00214A0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C006BFB0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006C084 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     bDeletePalette @ 0x1C00CB0A0 (bDeletePalette.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00D2150 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     freepathalloc @ 0x1C0181AB0 (freepathalloc.c)
 *     newpathalloc @ 0x1C0181B40 (newpathalloc.c)
 *     ?vTrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0182D50 (-vTrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?vUntrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0182E20 (-vUntrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?bGarbageCollect@XEPALOBJ@@QEAAHXZ @ 0x1C0184A40 (-bGarbageCollect@XEPALOBJ@@QEAAHXZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0185270 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     pProcessDfbSurfaces2 @ 0x1C0187750 (pProcessDfbSurfaces2.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C019A380 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJ::vUnlock(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion(v3, v2);
    }
    *this = 0LL;
  }
}
