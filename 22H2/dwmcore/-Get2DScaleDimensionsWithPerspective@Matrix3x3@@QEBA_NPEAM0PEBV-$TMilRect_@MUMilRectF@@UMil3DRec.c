/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040B90
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001CB74 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003F9A8 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BA1F8 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x180012E34 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUfloat2@Numerics@Foundation@Windows@@U2345@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180042158 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F3FDB (sqrtf_0.c)
 */

char __fastcall Matrix3x3::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, float *a4)
{
  int v6; // xmm1_4
  char result; // al
  __int64 *v8; // r10
  float *v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // r11
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  _DWORD v18[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+28h] [rbp-58h] BYREF
  float v20; // [rsp+38h] [rbp-48h]
  float v21; // [rsp+3Ch] [rbp-44h]

  if ( COERCE_FLOAT(*(_DWORD *)(a1 + 8) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(*(_DWORD *)(a1 + 20) & _xmm) < 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 1.0) & _xmm) < 0.0000011920929 )
    {
      Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)a1);
      v6 = v18[1];
      *a2 = *(float *)v18;
      *(_DWORD *)a3 = v6;
      return 1;
    }
    v20 = 0.0;
    v19 = _xmm;
    v21 = 1.0;
LABEL_7:
    v8 = (__int64 *)&v19;
    do
    {
      v9 = Matrix3x3::TransformHomogeneousPoint((float *)a1, (__int64)v18, *v8);
      v8 = (__int64 *)(v10 + 8);
      *v11 = *(_QWORD *)v9;
    }
    while ( v12 != 1 );
    v13 = v20 - *(float *)&v19;
    v14 = v21 - *((float *)&v19 + 1);
    v15 = sqrtf_0(
            (float)((float)(*((float *)&v19 + 2) - *(float *)&v19) * (float)(*((float *)&v19 + 2) - *(float *)&v19))
          + (float)((float)(*((float *)&v19 + 3) - *((float *)&v19 + 1))
                  * (float)(*((float *)&v19 + 3) - *((float *)&v19 + 1))));
    v16 = sqrtf_0((float)(v13 * v13) + (float)(v14 * v14));
    *a2 = v15;
    *a3 = v16;
    return 1;
  }
  if ( a4 )
  {
    v17 = (float)((float)(a4[3] - a4[1]) * 0.5) + a4[1];
    *(float *)&v19 = (float)((float)(a4[2] - *a4) * 0.5) + *a4;
    *((float *)&v19 + 1) = v17;
    *((float *)&v19 + 3) = v17;
    v20 = *(float *)&v19;
    *((float *)&v19 + 2) = *(float *)&v19 + 1.0;
    v21 = v17 + 1.0;
    goto LABEL_7;
  }
  result = 0;
  *a2 = 1.0;
  *a3 = 1.0;
  return result;
}
