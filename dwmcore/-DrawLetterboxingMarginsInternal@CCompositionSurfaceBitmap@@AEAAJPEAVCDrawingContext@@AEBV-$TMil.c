__int64 __fastcall CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
        CCompositionSurfaceBitmap *a1,
        CDrawingContext *a2,
        float *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v7; // edi
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ecx
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  float v15[4]; // [rsp+48h] [rbp-40h] BYREF

  v14 = 0LL;
  v7 = 0;
  if ( CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(a1, (__int64)&v14) )
  {
    CDrawingContext::PushTransformInternal(a2, 0LL, a4, 1, 1);
    v9 = a3[1] - *((float *)&v14 + 1);
    v15[0] = *a3 - *(float *)&v14;
    v10 = *((float *)&v14 + 2) + a3[2];
    v15[1] = v9;
    v11 = *((float *)&v14 + 3) + a3[3];
    v15[2] = v10;
    v15[3] = v11;
    v12 = CCompositionSurfaceBitmap::DrawContentBorders(a2, v15, a3, &stru_180383220);
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x311u, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v7;
}
