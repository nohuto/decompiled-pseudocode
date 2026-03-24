/*
 * XREFs of ?CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ @ 0x18002EFF4
 * Callers:
 *     ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18002EF2C (-UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002F258 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18003E07C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041988 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x180211210 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180211248 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CLegacyRenderTarget::CalculateMonitorTransform(CLegacyRenderTarget *this)
{
  unsigned int v2; // eax
  __m128i v3; // xmm2
  unsigned int v4; // eax
  __m128i v5; // xmm3
  int v6; // eax
  unsigned __int32 v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  int v14; // eax
  unsigned __int32 v15; // xmm3_4
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // ecx
  _OWORD v27[4]; // [rsp+28h] [rbp-39h] BYREF
  __int16 v28; // [rsp+68h] [rbp+7h]
  _DWORD v29[2]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int32 v30; // [rsp+80h] [rbp+1Fh]
  unsigned __int32 v31; // [rsp+84h] [rbp+23h]
  _DWORD v32[4]; // [rsp+88h] [rbp+27h] BYREF

  v2 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v29[0] = 0;
  v29[1] = 0;
  v3 = _mm_cvtsi32_si128(v2);
  v4 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v27[0] = _xmm;
  v27[1] = _xmm;
  v5 = _mm_cvtsi32_si128(v4);
  v6 = *((_DWORD *)this + 50);
  v27[2] = _xmm;
  v27[3] = _xmm;
  v7 = _mm_cvtepi32_ps(v3).m128_u32[0];
  v28 = 32085;
  v8 = (float)v6;
  v9 = (float)*((int *)this + 51);
  v10 = *((_DWORD *)this + 52);
  *(float *)v32 = v8;
  v11 = (float)v10;
  v12 = *((_DWORD *)this + 53);
  *(float *)&v32[1] = v9;
  v13 = (float)v12;
  v14 = *((_DWORD *)this + 54) - 2;
  v30 = v7;
  *(float *)&v32[2] = v11;
  *(float *)&v32[3] = v13;
  v15 = _mm_cvtepi32_ps(v5).m128_u32[0];
  v31 = v15;
  if ( (v14 & 0xFFFFFFFD) == 0 )
  {
    v30 = v15;
    v31 = v7;
  }
  CMILMatrix::InferAffineMatrix(v27, v29, v32);
  *((_DWORD *)this + 66) = 1065353216;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *(_QWORD *)((char *)this + 284) = 1065353216LL;
  *(_QWORD *)((char *)this + 292) = 0LL;
  *((_DWORD *)this + 75) = 0;
  *((_QWORD *)this + 38) = 1065353216LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 1065353216;
  *((_WORD *)this + 164) = 32085;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 44) = 1065353216LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *(_QWORD *)((char *)this + 372) = 1065353216LL;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 1065353216;
  *((_WORD *)this + 198) = 32085;
  v16 = *((_DWORD *)this + 54);
  v17 = *((_DWORD *)this + 46);
  *((_DWORD *)this + 63) = v16;
  *((_DWORD *)this + 64) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  *((_DWORD *)this + 65) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  if ( v17 || *((_DWORD *)this + 47) )
  {
    CMILMatrix::Translate((CLegacyRenderTarget *)((char *)this + 264), (float)-v17, (float)-*((_DWORD *)this + 47));
    v20 = *((_DWORD *)this + 82);
    v21 = *(_OWORD *)((char *)this + 280);
    v16 = *((_DWORD *)this + 54);
    *(_OWORD *)((char *)this + 332) = *(_OWORD *)((char *)this + 264);
    v22 = *(_OWORD *)((char *)this + 296);
    *(_OWORD *)((char *)this + 348) = v21;
    v23 = *(_OWORD *)((char *)this + 312);
    *(_OWORD *)((char *)this + 364) = v22;
    *(_OWORD *)((char *)this + 380) = v23;
    *((_DWORD *)this + 99) = v20;
  }
  v18 = v16 - 2;
  if ( !v18 )
  {
    CMILMatrix::Rotate270((CLegacyRenderTarget *)((char *)this + 264));
    v26 = *((_DWORD *)this + 64);
    v25 = 0.0;
    goto LABEL_14;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    CMILMatrix::Scale((CLegacyRenderTarget *)((char *)this + 264), -1.0, -1.0, 1.0);
    v26 = *((_DWORD *)this + 65);
    v25 = (float)*((int *)this + 64);
LABEL_14:
    v24 = (float)v26;
    goto LABEL_15;
  }
  if ( v19 == 1 )
  {
    CMILMatrix::Rotate90((CLegacyRenderTarget *)((char *)this + 264));
    v24 = 0.0;
    v25 = (float)*((int *)this + 65);
LABEL_15:
    CMILMatrix::Translate((CLegacyRenderTarget *)((char *)this + 264), v25, v24);
    goto LABEL_9;
  }
  *((_DWORD *)this + 63) = 1;
LABEL_9:
  CMILMatrix::Multiply((CLegacyRenderTarget *)((char *)this + 264), (const struct CMILMatrix *)v27);
  CMILMatrix::SetToInverse((CLegacyRenderTarget *)((char *)this + 400), (CLegacyRenderTarget *)((char *)this + 264));
}
