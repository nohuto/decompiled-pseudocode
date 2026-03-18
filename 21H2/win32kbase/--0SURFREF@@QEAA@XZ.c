/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1C016C500
 * Callers:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     GreSetBitmapOwner @ 0x1C0019F20 (GreSetBitmapOwner.c)
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     EngModifySurface @ 0x1C00AE7E0 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00B3FE0 (EngAssociateSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B4240 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
