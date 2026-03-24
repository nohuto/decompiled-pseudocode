/*
 * XREFs of ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E6FA8
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D2530 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801E7A20 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x180210D58 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_180210D58.c)
 */

__int64 __fastcall CGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  char v4; // al
  float v5; // xmm2_4
  unsigned __int64 v6; // xmm1_8
  D2D1_MATRIX_3X2_F *v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-19h] BYREF
  __int128 v12; // [rsp+40h] [rbp-9h]
  __int128 v13; // [rsp+50h] [rbp+7h]
  __int128 v14; // [rsp+60h] [rbp+17h]
  __int16 v15; // [rsp+70h] [rbp+27h]
  __int128 v16; // [rsp+80h] [rbp+37h] BYREF

  LODWORD(v3) = (_DWORD)FLOAT_1_0;
  v4 = *(_BYTE *)(a1 + 104);
  if ( v4 == 1 && *(_BYTE *)(a1 + 178) )
  {
    v5 = 1.0 / *(float *)(a3 + 8);
  }
  else
  {
    v5 = 0.0;
    if ( v4 != 1 )
      goto LABEL_6;
  }
  v3 = 1.0 - (float)(1.0 / *(float *)(a3 + 8));
LABEL_6:
  *((float *)&v16 + 3) = v3;
  v11 = _xmm;
  v12 = _xmm;
  v13 = _xmm;
  *(float *)&v16 = v5;
  *(_QWORD *)((char *)&v16 + 4) = __PAIR64__(LODWORD(v3), LODWORD(v5));
  v14 = _xmm;
  v15 = 32085;
  CMILMatrix::InferAffineMatrix(&v11, &v16, a2);
  *(_QWORD *)&v16 = v11;
  *((_QWORD *)&v16 + 1) = v12;
  v6 = _mm_unpacklo_ps((__m128)(unsigned int)v14, (__m128)DWORD1(v14)).m128_u64[0];
  *(_OWORD *)&v7->m11 = v16;
  *(_QWORD *)&v7->m[2][0] = v6;
  if ( D2D1InvertMatrix(v7) )
  {
    return 0;
  }
  else
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180304EE0, 2u, -2003304441, 0x1B2u, 0LL);
  }
  return v9;
}
