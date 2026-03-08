/*
 * XREFs of ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6A08
 * Callers:
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6850 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

int *__fastcall CBackdropVisualImage::ValidateRealizationSize(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct D2D_RECT_F *a4)
{
  double v4; // xmm2_8
  double v6; // xmm1_8
  int *result; // rax
  double v8; // xmm1_8
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  __int128 v12; // xmm0
  float v13; // xmm2_4
  _BYTE v14[32]; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v15; // [rsp+40h] [rbp-20h] BYREF
  float v16; // [rsp+50h] [rbp-10h]
  float v17; // [rsp+54h] [rbp-Ch]

  v4 = *(double *)(a1 + 120);
  v6 = (double)*(int *)(a1 + 1872);
  result = (int *)(a1 + 128);
  if ( v4 > v6 || *(double *)result > v6 )
  {
    if ( v4 <= *(double *)result )
      v8 = v6 / *(double *)result;
    else
      v8 = v6 / v4;
    v9 = v8;
    v10 = v9 * *(float *)(a1 + 1880);
    v11 = v9 * *(float *)(a1 + 1876);
    *(float *)(a1 + 1880) = v10;
    *(float *)(a1 + 1876) = v11;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v12 = *a2;
      v15.top = 0.0;
      v15.right = 0.0;
      v15.left = v11;
      *(_OWORD *)v14 = v12;
      *(_OWORD *)&v14[16] = v12;
      v15.bottom = v10;
      v16 = 0.0 - (float)(v11 * 0.0);
      v17 = 0.0 - (float)(v10 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)&v14[16],
        &v15,
        (const struct D2D_MATRIX_3X2_F *)v14,
        a4);
      *(_OWORD *)&v14[16] = *(_OWORD *)v14;
      result = PixelAlign((int *)v14, (float *)&v14[16]);
      v13 = (float)result[3];
      *(float *)&v12 = (float)result[1];
      *(double *)(a1 + 120) = (float)((float)result[2] - (float)*result);
      *(double *)(a1 + 128) = (float)(v13 - *(float *)&v12);
    }
  }
  return result;
}
