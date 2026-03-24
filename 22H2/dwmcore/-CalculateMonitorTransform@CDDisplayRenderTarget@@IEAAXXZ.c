/*
 * XREFs of ?CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018BCB4
 * Callers:
 *     ?UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18018D2F4 (-UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
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

void __fastcall CDDisplayRenderTarget::CalculateMonitorTransform(CDDisplayRenderTarget *this)
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
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // ecx
  int v23; // ecx
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // ecx
  _OWORD v27[4]; // [rsp+28h] [rbp-39h] BYREF
  __int16 v28; // [rsp+68h] [rbp+7h]
  float v29[2]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int32 v30; // [rsp+80h] [rbp+1Fh]
  unsigned __int32 v31; // [rsp+84h] [rbp+23h]
  float v32[4]; // [rsp+88h] [rbp+27h] BYREF

  v2 = *((_DWORD *)this + 4568) - *((_DWORD *)this + 4566);
  v29[0] = 0.0;
  v29[1] = 0.0;
  v3 = _mm_cvtsi32_si128(v2);
  v4 = *((_DWORD *)this + 4569) - *((_DWORD *)this + 4567);
  v27[0] = _xmm;
  v27[1] = _xmm;
  v5 = _mm_cvtsi32_si128(v4);
  v6 = *((_DWORD *)this + 4570);
  v27[2] = _xmm;
  v27[3] = _xmm;
  v7 = _mm_cvtepi32_ps(v3).m128_u32[0];
  v28 = 32085;
  v8 = (float)v6;
  v9 = (float)*((int *)this + 4571);
  v10 = *((_DWORD *)this + 4572);
  v32[0] = v8;
  v11 = (float)v10;
  v12 = *((_DWORD *)this + 4573);
  v32[1] = v9;
  v13 = (float)v12;
  v14 = *((_DWORD *)this + 4574) - 2;
  v30 = v7;
  v32[2] = v11;
  v32[3] = v13;
  v15 = _mm_cvtepi32_ps(v5).m128_u32[0];
  v31 = v15;
  if ( (v14 & 0xFFFFFFFD) == 0 )
  {
    v30 = v15;
    v31 = v7;
  }
  CMILMatrix::InferAffineMatrix((__int64)v27, v29, v32);
  *((_DWORD *)this + 4578) = 1065353216;
  *(_QWORD *)((char *)this + 18316) = 0LL;
  *(_QWORD *)((char *)this + 18324) = 0LL;
  *(_QWORD *)((char *)this + 18332) = 1065353216LL;
  *(_QWORD *)((char *)this + 18340) = 0LL;
  *((_DWORD *)this + 4587) = 0;
  *((_QWORD *)this + 2294) = 1065353216LL;
  *((_QWORD *)this + 2295) = 0LL;
  *((_DWORD *)this + 4592) = 0;
  *((_DWORD *)this + 4593) = 1065353216;
  *((_WORD *)this + 9188) = 32085;
  *(_QWORD *)((char *)this + 18380) = 1065353216LL;
  *(_QWORD *)((char *)this + 18388) = 0LL;
  *((_DWORD *)this + 4599) = 0;
  *((_QWORD *)this + 2300) = 1065353216LL;
  *((_QWORD *)this + 2301) = 0LL;
  *((_DWORD *)this + 4604) = 0;
  *(_QWORD *)((char *)this + 18420) = 1065353216LL;
  *(_QWORD *)((char *)this + 18428) = 0LL;
  *((_DWORD *)this + 4609) = 0;
  *((_DWORD *)this + 4610) = 1065353216;
  *((_WORD *)this + 9222) = 32085;
  v16 = *((_DWORD *)this + 4574);
  v17 = *((_DWORD *)this + 4566);
  *((_DWORD *)this + 4575) = v16;
  *((_DWORD *)this + 4576) = *((_DWORD *)this + 4568) - *((_DWORD *)this + 4566);
  *((_DWORD *)this + 4577) = *((_DWORD *)this + 4569) - *((_DWORD *)this + 4567);
  if ( v17 || *((_DWORD *)this + 4567) )
  {
    CMILMatrix::Translate(
      (CDDisplayRenderTarget *)((char *)this + 18312),
      (float)-v17,
      (float)-*((_DWORD *)this + 4567));
    v18 = *((_DWORD *)this + 4594);
    v19 = *(_OWORD *)((char *)this + 18328);
    v16 = *((_DWORD *)this + 4574);
    *(_OWORD *)((char *)this + 18380) = *(_OWORD *)((char *)this + 18312);
    v20 = *(_OWORD *)((char *)this + 18344);
    *(_OWORD *)((char *)this + 18396) = v19;
    v21 = *(_OWORD *)((char *)this + 18360);
    *(_OWORD *)((char *)this + 18412) = v20;
    *(_OWORD *)((char *)this + 18428) = v21;
    *((_DWORD *)this + 4611) = v18;
  }
  v22 = v16 - 2;
  if ( !v22 )
  {
    CMILMatrix::Rotate270((CDDisplayRenderTarget *)((char *)this + 18312));
    v26 = *((_DWORD *)this + 4576);
    v25 = 0.0;
    goto LABEL_13;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    CMILMatrix::Scale((CDDisplayRenderTarget *)((char *)this + 18312), -1.0, -1.0, 1.0);
    v26 = *((_DWORD *)this + 4577);
    v25 = (float)*((int *)this + 4576);
LABEL_13:
    v24 = (float)v26;
    goto LABEL_14;
  }
  if ( v23 == 1 )
  {
    CMILMatrix::Rotate90((CDDisplayRenderTarget *)((char *)this + 18312));
    v24 = 0.0;
    v25 = (float)*((int *)this + 4577);
LABEL_14:
    CMILMatrix::Translate((CDDisplayRenderTarget *)((char *)this + 18312), v25, v24);
    goto LABEL_15;
  }
  *((_DWORD *)this + 4575) = 1;
LABEL_15:
  CMILMatrix::Multiply((CDDisplayRenderTarget *)((char *)this + 18312), (const struct CMILMatrix *)v27);
  CMILMatrix::SetToInverse(
    (CDDisplayRenderTarget *)((char *)this + 18448),
    (CDDisplayRenderTarget *)((char *)this + 18312));
}
