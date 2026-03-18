/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1C0159C40
 * Callers:
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C0062058 (GreSetBitmapOwnerEx.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 *     EngModifySurface @ 0x1C00ABA10 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00B09D0 (EngAssociateSurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B3F10 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00D2BB8 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
