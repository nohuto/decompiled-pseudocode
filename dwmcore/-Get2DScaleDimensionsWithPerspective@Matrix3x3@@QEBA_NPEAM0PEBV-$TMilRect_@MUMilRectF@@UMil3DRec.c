/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64
 * Callers:
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800378C4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18005A02C (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4B20 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800FB7A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180037C60 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x1800E5A70 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUfloat2@Numerics@Foundation@Windows@@U2345@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

char __fastcall Matrix3x3::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, float *a4)
{
  int v6; // xmm1_4
  char result; // al
  __int128 *v8; // r9
  __int128 *v9; // r10
  float v10; // xmm2_4
  _QWORD *v11; // rax
  __int64 v12; // r10
  _QWORD *v13; // r9
  __int64 v14; // r11
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  float v18; // xmm0_4
  _DWORD v19[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+28h] [rbp-58h] BYREF
  float v21; // [rsp+38h] [rbp-48h]
  float v22; // [rsp+3Ch] [rbp-44h]

  if ( COERCE_FLOAT(*(_DWORD *)(a1 + 8) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(*(_DWORD *)(a1 + 20) & _xmm) < 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 1.0) & _xmm) < 0.0000011920929 )
    {
      Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)a1);
      v6 = v19[1];
      *a2 = *(float *)v19;
      *(_DWORD *)a3 = v6;
      return 1;
    }
    v21 = 0.0;
    v20 = _xmm;
    v22 = 1.0;
LABEL_7:
    v8 = &v20;
    v9 = &v20;
    do
    {
      v11 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint(a1, v19, *(_QWORD *)v9, v8);
      v9 = (__int128 *)(v12 + 8);
      *v13 = *v11;
      v8 = (__int128 *)(v13 + 1);
    }
    while ( v14 != 1 );
    v15 = v21 - *(float *)&v20;
    v16 = v22 - *((float *)&v20 + 1);
    v17 = sqrtf_0(
            (float)((float)(*((float *)&v20 + 2) - *(float *)&v20) * (float)(*((float *)&v20 + 2) - *(float *)&v20))
          + (float)((float)(*((float *)&v20 + 3) - *((float *)&v20 + 1))
                  * (float)(*((float *)&v20 + 3) - *((float *)&v20 + 1))));
    v18 = sqrtf_0((float)(v15 * v15) + (float)(v16 * v16));
    *a2 = v17;
    *a3 = v18;
    return 1;
  }
  if ( a4 )
  {
    v10 = (float)((float)(a4[3] - a4[1]) * 0.5) + a4[1];
    *(float *)&v20 = (float)((float)(a4[2] - *a4) * 0.5) + *a4;
    *((float *)&v20 + 1) = v10;
    *((float *)&v20 + 3) = v10;
    v21 = *(float *)&v20;
    *((float *)&v20 + 2) = *(float *)&v20 + 1.0;
    v22 = v10 + 1.0;
    goto LABEL_7;
  }
  result = 0;
  *a2 = 1.0;
  *a3 = 1.0;
  return result;
}
