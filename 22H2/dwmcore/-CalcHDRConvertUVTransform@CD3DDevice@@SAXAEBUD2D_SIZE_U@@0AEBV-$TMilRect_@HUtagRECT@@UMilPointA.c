/*
 * XREFs of ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023D70C
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023F6DC (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023F9B0 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002F258 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18003E07C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041988 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1802117EC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

void __fastcall CD3DDevice::CalcHDRConvertUVTransform(
        int *a1,
        int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        CMILMatrix *a6)
{
  int v6; // eax
  __m128i v7; // xmm11
  __m128i v8; // xmm7
  __m128i v9; // xmm6
  __m128i v10; // xmm12
  __m128i v11; // xmm9
  __m128i v12; // xmm8
  unsigned int v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  __m128i v17; // xmm0
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  int v25; // r10d
  enum DXGI_MODE_ROTATION v26; // r11d
  const struct CMILMatrix *v27; // rdx
  _BYTE v28[64]; // [rsp+28h] [rbp-E0h] BYREF
  int v29; // [rsp+68h] [rbp-A0h]
  _BYTE v30[64]; // [rsp+78h] [rbp-90h] BYREF
  int v31; // [rsp+B8h] [rbp-50h]
  _BYTE v32[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v33; // [rsp+108h] [rbp+0h]
  __int128 v34; // [rsp+118h] [rbp+10h] BYREF
  float v35[4]; // [rsp+128h] [rbp+20h] BYREF
  float v36[4]; // [rsp+138h] [rbp+30h] BYREF
  float v37[4]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v38; // [rsp+158h] [rbp+50h] BYREF

  v6 = *a1;
  v7 = _mm_cvtsi32_si128(*a3);
  v8 = _mm_cvtsi32_si128(*(_DWORD *)a5);
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  v10 = _mm_cvtsi32_si128(a3[1]);
  v11 = _mm_cvtsi32_si128(a3[2]);
  v12 = _mm_cvtsi32_si128(a3[3]);
  *(_QWORD *)&v34 = 0LL;
  v37[0] = 0.0;
  v37[1] = 0.0;
  v36[0] = 0.0;
  v36[1] = 0.0;
  v38 = _xmm;
  *(float *)&v13 = (float)v6;
  v14 = *a2;
  *((_QWORD *)&v34 + 1) = __PAIR64__((float)a1[1], v13);
  v15 = (float)v14;
  v16 = a2[1];
  v37[2] = v15;
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 8));
  v37[3] = (float)v16;
  v18 = (float)*(int *)(a5 + 12);
  v29 = 0;
  v19 = _mm_cvtepi32_ps(v8).m128_f32[0];
  v20 = _mm_cvtepi32_ps(v9).m128_f32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v10).m128_u32[0];
  LODWORD(v23) = _mm_cvtepi32_ps(v11).m128_u32[0];
  LODWORD(v24) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v36[3] = v18 - v20;
  v35[0] = v21;
  v35[1] = v22;
  v35[2] = v23;
  v35[3] = v24;
  v36[2] = _mm_cvtepi32_ps(v17).m128_f32[0] - v19;
  CMILMatrix::InferAffineMatrix((__int64)a6, (float *)&v38, (float *)&v34);
  if ( v19 != 0.0 || v20 != 0.0 )
    CMILMatrix::Translate(a6, COERCE_FLOAT(LODWORD(v19) ^ _xmm), COERCE_FLOAT(LODWORD(v20) ^ _xmm));
  if ( v26 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix((__int64)v28, v36, v35);
    v27 = (const struct CMILMatrix *)v28;
  }
  else
  {
    v31 = v25;
    v33 = v25;
    v34 = 0LL;
    CMILMatrix::SetToRotation((CMILMatrix *)v30, v23 - v21, v24 - v22, v26);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v30, (__int64)v35, (float *)&v34);
    CMILMatrix::InferAffineMatrix((__int64)v28, v36, (float *)&v34);
    CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v28);
    CMILMatrix::SetToInverse((CMILMatrix *)v32, (const struct CMILMatrix *)v30);
    v27 = (const struct CMILMatrix *)v32;
  }
  CMILMatrix::Multiply(a6, v27);
  CMILMatrix::InferAffineMatrix((__int64)v28, v37, (float *)&v38);
  CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v28);
}
