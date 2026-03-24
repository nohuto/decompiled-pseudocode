/*
 * XREFs of ?UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180268C60
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x180040D9C (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x180054500 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::UpdateBitmaps(CCubeMapRenderingEffect *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDrawListBitmap *v3; // rdi
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  v3 = (CCubeMapRenderingEffect *)((char *)this + 16);
  if ( *((_OWORD *)this + 1) != 0LL )
  {
    CDrawListBitmap::RecordContentInfo(v3, a2);
    v5 = CDrawListBitmap::EnsureDeviceResource(v3, a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Eu, 0LL);
  }
  return v2;
}
