/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C004344C
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00DE6A0 (_lambda_c42d5e148a0c8c495193b965072d0c08_--_lambda_invoker_cdecl_.c)
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00DE830 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    HmgDecrementShareReferenceCountEx(v1, 0LL);
}
