__int64 __fastcall CCompositionSurfaceBitmap::DrawLetterboxingMargins(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v9[64]; // [rsp+30h] [rbp-88h] BYREF
  int v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h] BYREF

  v4 = 0;
  v10 = 0;
  v11 = 0LL;
  CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v9, &v11);
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
  {
    v6 = CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
           this,
           a2,
           (float *)&v11,
           (const struct CMILMatrix *)v9);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2EEu, 0LL);
  }
  return v4;
}
