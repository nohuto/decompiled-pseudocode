/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180254F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        float *a5,
        _OWORD *a6)
{
  float v6; // xmm1_4
  bool IsEmpty; // al
  _OWORD *v8; // r8
  _OWORD *v9; // r9
  __int64 v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  _OWORD *result; // rax
  float v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(float *)(a1 + 176) * 3.0;
  *(_OWORD *)v20 = *a3;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v20);
  v10 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v20, v6, v6);
  *(_OWORD *)a5 = *v9;
  v11 = *a5;
  v12 = v20[0];
  if ( v20[0] > *a5 )
  {
    *a5 = v20[0];
    v11 = v12;
  }
  v13 = a5[1];
  v14 = v20[1];
  if ( v20[1] > v13 )
  {
    a5[1] = v20[1];
    v13 = v14;
  }
  v15 = a5[2];
  v16 = v20[2];
  if ( v15 > v20[2] )
  {
    a5[2] = v20[2];
    v15 = v16;
  }
  v17 = a5[3];
  v18 = v20[3];
  if ( v17 > v20[3] )
  {
    a5[3] = v20[3];
    v17 = v18;
  }
  if ( v15 <= v11 || v17 <= v13 )
  {
    *((_QWORD *)a5 + 1) = v10;
    *(_QWORD *)a5 = v10;
  }
  result = a6;
  *a6 = *v8;
  return result;
}
