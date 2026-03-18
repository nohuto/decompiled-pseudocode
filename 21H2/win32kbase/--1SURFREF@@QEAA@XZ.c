/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C001F08C
 * Callers:
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     GreSetBitmapOwner @ 0x1C0019F20 (GreSetBitmapOwner.c)
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     EngLockSurface @ 0x1C0020170 (EngLockSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     bDfbSurfacesMigrated @ 0x1C00626A0 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0096FB8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     EngModifySurface @ 0x1C00AE7E0 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00B3FE0 (EngAssociateSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B4240 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0168DF0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitBMOBJ @ 0x1C02E5FA0 (bInitBMOBJ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
