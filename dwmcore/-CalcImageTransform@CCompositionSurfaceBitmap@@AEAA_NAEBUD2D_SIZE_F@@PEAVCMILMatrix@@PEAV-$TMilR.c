char __fastcall CCompositionSurfaceBitmap::CalcImageTransform(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        CMILMatrix *a3,
        __int128 *a4)
{
  char v5; // di
  struct IBitmapRealization *RenderingRealization; // r12
  int SizePreference; // r13d
  char ScaledLetterboxingMargins; // r12
  float v12; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float height; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  __int128 v24; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v25[80]; // [rsp+58h] [rbp-79h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-19h] BYREF

  v5 = 0;
  RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization(this);
  if ( RenderingRealization )
  {
    SizePreference = CCompositionSurfaceBitmap::GetSizePreference(this);
    v5 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, CMILMatrix *, __int128 *))(*(_QWORD *)RenderingRealization
                                                                                          + 8LL))(
           RenderingRealization,
           a3,
           a4);
    v27 = 0LL;
    ScaledLetterboxingMargins = CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(this, &v27);
    v12 = 0.0;
    if ( ScaledLetterboxingMargins )
    {
      CMILMatrix::PrependTranslate(a3, *(float *)&v27, *((float *)&v27 + 1), 0.0);
      v5 = 1;
    }
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) && SizePreference != 1 )
    {
      v26 = 0LL;
      v24 = *a4;
      LODWORD(v14) = v24;
      v15 = *((float *)&v24 + 1);
      v16 = *((float *)&v24 + 2);
      v17 = *((float *)&v24 + 3);
      if ( ScaledLetterboxingMargins )
      {
        v14 = *(float *)&v24 - *(float *)&v27;
        v15 = *((float *)&v24 + 1) - *((float *)&v27 + 1);
        v16 = *((float *)&v24 + 2) + *((float *)&v27 + 2);
        v17 = *((float *)&v24 + 3) + *((float *)&v27 + 3);
        *(float *)&v24 = *(float *)&v24 - *(float *)&v27;
        *((float *)&v24 + 1) = *((float *)&v24 + 1) - *((float *)&v27 + 1);
        *((float *)&v24 + 2) = *((float *)&v24 + 2) + *((float *)&v27 + 2);
        *((float *)&v24 + 3) = *((float *)&v24 + 3) + *((float *)&v27 + 3);
      }
      if ( v5 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)&v24);
        v17 = *((float *)&v26 + 3);
        v16 = *((float *)&v26 + 2);
        v15 = *((float *)&v26 + 1);
      }
      else
      {
        *(_QWORD *)&v26 = __PAIR64__(LODWORD(v15), LODWORD(v14));
        *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v17), LODWORD(v16));
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v26) )
      {
        v19 = v16 - v18;
        v20 = v17 - v15;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - v19) & _xmm) > 0.00390625
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v20) & _xmm) > 0.00390625 )
        {
          CMILMatrix::SetToIdentity((CMILMatrix *)v25);
          height = a2->height;
          v22 = a2->width / v19;
          if ( SizePreference )
          {
            v23 = 0.0;
            if ( height < (float)(v22 * v20) )
            {
              v22 = height / v20;
              v12 = (float)(a2->width - (float)((float)(height / v20) * v19)) * 0.5;
            }
            else
            {
              v23 = (float)(height - (float)(v22 * v20)) * 0.5;
            }
            CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v25, v22, v22, v12, v23);
          }
          else
          {
            CMILMatrix::SetScale((CMILMatrix *)v25, v22, height / v20, 1.0, 0.0, 0.0, 0.0);
          }
          CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v25);
          return 1;
        }
      }
    }
  }
  else
  {
    CMILMatrix::SetToIdentity(a3);
    *((_QWORD *)a4 + 1) = 0LL;
    *(_QWORD *)a4 = 0LL;
  }
  return v5;
}
