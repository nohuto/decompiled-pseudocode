/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180253EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800E6F98 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180219ABC (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1802545E0 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

float *__fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        CMILMatrix *a2,
        _OWORD *a3,
        float *a4,
        __int64 a5,
        _OWORD *a6)
{
  int v7; // xmm1_4
  int v8; // xmm3_4
  int v10; // xmm2_4
  int v13; // xmm1_4
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  float v18; // xmm4_4
  float *result; // rax
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
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
  LODWORD(v27) = *(_DWORD *)a2;
  DWORD2(v27) = *((_DWORD *)a2 + 4);
  DWORD1(v27) = v7;
  v13 = *((_DWORD *)a2 + 5);
  v28 = v8;
  v29 = v10;
  v30 = *(_OWORD *)&_xmm;
  HIDWORD(v27) = v13;
  v31 = v8 ^ _xmm;
  v32 = v10 ^ _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v33,
    (const struct D2D1::Matrix3x2F *)&v27,
    (const struct D2D1::Matrix3x2F *)&v30);
  v14 = *(_QWORD *)&v33.m[2][0];
  *(_OWORD *)(a1 + 220) = *(_OWORD *)&v33.m11;
  v15 = *(_OWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 236) = v14;
  v16 = *(_QWORD *)(a1 + 200);
  *(_OWORD *)&v33.m11 = v15;
  *(_QWORD *)&v33.m[2][0] = v16;
  if ( D2D1::Matrix3x2F::Invert(&v33)
    && (*a6 = *a3,
        v27 = 0LL,
        v30 = *a3,
        (unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds((__int64)a2, &v30, &v27)) )
  {
    CAffineTransform2DEffect::TransformBounds(v17, &v33, &v27, &v27);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v27, (float *)&v30);
    v18 = *(float *)&v30;
    result = (float *)(a5 + 4);
    v20 = *((float *)&v30 + 1);
    v21 = *((float *)&v30 + 2);
    v22 = *((float *)&v30 + 3);
    *(_DWORD *)a5 = v30;
    *(float *)(a5 + 4) = v20;
    *(float *)(a5 + 8) = v21;
    *(float *)(a5 + 12) = v22;
    v23 = *a4;
    if ( *a4 > v18 )
    {
      *(float *)a5 = v23;
      v18 = v23;
    }
    v24 = a4[1];
    if ( v24 > v20 )
    {
      *result = v24;
      v20 = v24;
    }
    v25 = a4[2];
    if ( v21 > v25 )
    {
      *(float *)(a5 + 8) = v25;
      v21 = v25;
    }
    v26 = a4[3];
    if ( v22 > v26 )
    {
      *(float *)(a5 + 12) = v26;
      v22 = v26;
    }
    if ( v21 <= v18 || v22 <= v20 )
    {
      *(_DWORD *)(a5 + 12) = 0;
      *(_DWORD *)(a5 + 8) = 0;
      *result = 0.0;
      *(_DWORD *)a5 = 0;
    }
  }
  else
  {
    result = (float *)(a5 + 4);
    *(_OWORD *)a5 = *a3;
    *a6 = *a3;
  }
  *(float *)(a1 + 212) = *(float *)a5 - *((float *)a2 + 12);
  *(float *)(a1 + 216) = *result - *((float *)a2 + 13);
  return result;
}
