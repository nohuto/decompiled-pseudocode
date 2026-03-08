/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18000E370
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000E12C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ??0CTreeEffectLayer@@AEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18000E614 (--0CTreeEffectLayer@@AEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18000E6AC (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003493C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v8; // rdi
  float v9; // xmm6_4
  void (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  __m128i v14; // xmm1
  __int64 v15; // rax
  unsigned __int64 v16; // xmm0_8
  int v17; // r15d
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // ecx
  float v21; // xmm0_4
  signed int v22; // ecx
  float v23; // xmm0_4
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  void *v30; // rax
  __m128 v32; // xmm2
  __m128 v33; // xmm2
  __int64 v34; // [rsp+48h] [rbp-71h] BYREF
  __m128i v35; // [rsp+50h] [rbp-69h] BYREF
  __int64 v36; // [rsp+60h] [rbp-59h]
  const char *v37; // [rsp+68h] [rbp-51h] BYREF
  int v38; // [rsp+70h] [rbp-49h]
  _BYTE v39[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v40[4]; // [rsp+90h] [rbp-29h] BYREF
  int v41; // [rsp+94h] [rbp-25h]

  v8 = 0LL;
  v9 = *(float *)&FLOAT_1_0;
  v36 = a5;
  *a7 = 0LL;
  v13 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v13)(v13, v40);
  v41 = 1;
  v14 = *(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(&v37, a3, a2, a5);
  v15 = *(_QWORD *)(a1 + 8);
  v35 = v14;
  v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
  v18 = HIDWORD(v16);
  if ( (unsigned int)v17 > HIDWORD(v16) )
    LODWORD(v18) = v17;
  v19 = a1 + *(int *)(v15 + 8) + 8LL;
  v20 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19) + 928);
  if ( (unsigned int)v18 > v20 )
    v9 = (float)v20 / (float)(int)v18;
  v21 = (float)v17 * v9;
  *(float *)&v34 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v32 = 0LL;
    v32.m128_f32[0] = (float)(int)v21 - v21;
    v22 = (int)v21 - _mm_cmple_ss(v32, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v34 = v21 + 6291456.25;
    v22 = (int)((_DWORD)v34 << 10) >> 11;
  }
  v35.m128i_i32[2] = v22;
  v23 = (float)v35.m128i_i32[3] * v9;
  *(float *)&v34 = v23;
  if ( COERCE_UNSIGNED_INT(fabs(v23)) > 0x497FFFF0 )
  {
    v33 = 0LL;
    v33.m128_f32[0] = (float)(int)v23 - v23;
    LODWORD(v34) = _mm_cmple_ss(v33, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v24 = (int)v23 - v34;
  }
  else
  {
    *(float *)&v34 = v23 + 6291456.25;
    v24 = (int)((_DWORD)v34 << 10) >> 11;
  }
  v35.m128i_i32[3] = v24;
  if ( v22 <= 0 || v24 <= 0 )
  {
    v29 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2003304309, 0x80u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 56LL))(a4, 93LL) )
  {
    v34 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v34);
    v26 = (**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v39);
    v38 = 44;
    v37 = "DWM Scratch Rendertarget (tree effect layer)";
    v27 = CExternalLayer::CreateBitmap(&v37, &v35, v40, v26, 1, &v34);
    v29 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x6Eu, 0LL);
    }
    else
    {
      v30 = operator new(0x120uLL);
      if ( v30 )
        v8 = CTreeEffectLayer::CTreeEffectLayer(v30, &v35, v36, v34, a3, a6, LODWORD(v9));
      *a7 = v8;
      *(_QWORD *)(v8 + 256) = a4;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v34);
  }
  else
  {
    v29 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024809, 0x7Bu, 0LL);
  }
  return v29;
}
