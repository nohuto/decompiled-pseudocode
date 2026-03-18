/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24
 * Callers:
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     bDfbSurfacesMigrated @ 0x1C00626A0 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0096FB8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0168DF0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bInitBMOBJ @ 0x1C02E5FA0 (bInitBMOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  unsigned int v2; // ebx

  v2 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = HmgShareLockCheck(v2, 5);
  return this;
}
