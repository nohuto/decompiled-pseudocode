__int64 __fastcall CCubeMapRenderingEffect::UpdateBitmaps(struct IBitmapResource **this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( this[3] )
  {
    v3 = CDrawListBitmap::PrepareOutputTarget(this + 2, a2);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1Du, 0LL);
  }
  return v2;
}
