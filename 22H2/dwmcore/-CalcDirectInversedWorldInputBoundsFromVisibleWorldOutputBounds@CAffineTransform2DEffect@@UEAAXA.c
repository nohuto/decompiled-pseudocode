/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801F51B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180018594 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7F30 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1801B28C8 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1801F5898 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

unsigned __int8 __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        float *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v10; // xmm3_4
  int v13; // xmm1_4
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  unsigned __int8 result; // al
  __int64 v18; // rcx
  float v19; // xmm2_4
  int v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  __int128 v27; // [rsp+20h] [rbp-50h] BYREF
  int v28; // [rsp+30h] [rbp-40h]
  int v29; // [rsp+34h] [rbp-3Ch]
  __int128 v30; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+48h] [rbp-28h]
  int v32; // [rsp+4Ch] [rbp-24h]
  D2D1_MATRIX_3X2_F v33; // [rsp+50h] [rbp-20h] BYREF

  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 12);
  v10 = *((_DWORD *)a2 + 13);
  *(float *)&v27 = *a2;
  *((float *)&v27 + 2) = a2[4];
  DWORD1(v27) = v7;
  v13 = *((_DWORD *)a2 + 5);
  v28 = v8;
  v29 = v10;
  v30 = _xmm;
  HIDWORD(v27) = v13;
  v31 = v8 ^ _xmm;
  v32 = v10 ^ _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v33,
    (const struct D2D1::Matrix3x2F *)&v27,
    (const struct D2D1::Matrix3x2F *)&v30);
  v14 = *(_QWORD *)&v33.m[2][0];
  *(_OWORD *)(a1 + 196) = *(_OWORD *)&v33.m11;
  v15 = *(_OWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 212) = v14;
  v16 = *(_QWORD *)(a1 + 176);
  *(_OWORD *)&v33.m11 = v15;
  *(_QWORD *)&v33.m[2][0] = v16;
  result = D2D1::Matrix3x2F::Invert(&v33);
  if ( result
    && (*a6 = *a3,
        v27 = 0LL,
        v30 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds((__int64)a2, &v30, &v27)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v18, &v33, &v27, &v27);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>((__int64)a2, (float *)&v27, (float *)&v30);
    v19 = *(float *)&v30;
    v20 = DWORD2(v30);
    *(_DWORD *)(a5 + 4) = DWORD1(v30);
    *(_DWORD *)(a5 + 12) = HIDWORD(v30);
    *(float *)a5 = v19;
    *(_DWORD *)(a5 + 8) = v20;
    if ( *(float *)a4 > v19 )
      *(_DWORD *)a5 = *(_DWORD *)a4;
    v21 = *(float *)(a4 + 4);
    if ( v21 > *(float *)(a5 + 4) )
      *(float *)(a5 + 4) = v21;
    v22 = *(float *)(a4 + 8);
    v23 = *(float *)(a5 + 8);
    if ( v23 > v22 )
    {
      *(float *)(a5 + 8) = v22;
      v23 = v22;
    }
    v24 = *(float *)(a4 + 12);
    v25 = *(float *)(a5 + 12);
    if ( v25 > v24 )
    {
      *(float *)(a5 + 12) = v24;
      v25 = v24;
      v23 = *(float *)(a5 + 8);
    }
    v26 = *(float *)a5;
    if ( v23 <= *(float *)a5 || v25 <= *(float *)(a5 + 4) )
    {
      *(_DWORD *)(a5 + 12) = 0;
      v26 = 0.0;
      *(_DWORD *)(a5 + 8) = 0;
      *(_DWORD *)(a5 + 4) = 0;
      *(_DWORD *)a5 = 0;
    }
  }
  else
  {
    *(_OWORD *)a5 = *a3;
    *a6 = *a3;
    v26 = *(float *)a5;
  }
  *(float *)(a1 + 188) = v26 - a2[12];
  *(float *)(a1 + 192) = *(float *)(a5 + 4) - a2[13];
  return result;
}
