/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F05C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FCAC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800C3320 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180283D20 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int CachedEffectNoRef; // eax
  __int64 v10; // rcx
  __m128 *v11; // rax
  __int64 v12; // rdx
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm7
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  __int64 (__fastcall ***v19)(_QWORD, struct D2D_RECT_F *); // rcx
  struct ID2D1Effect *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  struct ID2D1Effect *v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+44h] [rbp-BCh]
  __int128 v38; // [rsp+54h] [rbp-ACh]
  int v39; // [rsp+64h] [rbp-9Ch]
  struct D2D_RECT_F v40; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v41[15]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int32 v42; // [rsp+12Ch] [rbp+2Ch]
  __int32 v43; // [rsp+130h] [rbp+30h]
  unsigned __int32 v44; // [rsp+134h] [rbp+34h]
  unsigned __int32 v45; // [rsp+138h] [rbp+38h]
  unsigned __int32 v46; // [rsp+13Ch] [rbp+3Ch]

  v34 = 0LL;
  v39 = 0;
  v4 = (__int64 *)*((_QWORD *)this + 1);
  v37 = 0LL;
  v38 = 0LL;
  v5 = *v4;
  v35 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v5 + 72))(v4, &v35, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v33 = 52;
    goto LABEL_19;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 5) + 16LL, 0LL, &v34);
  v8 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CachedEffectNoRef, 0x37u, 0LL);
    goto LABEL_20;
  }
  v36 = 10;
  *(_QWORD *)&v37 = 0x1FF000000LL;
  v6 = CDrawingContext::PushRenderOptionsInternal((__int64)a2, 0LL, (const struct MilRenderOptions *)&v36, 1);
  v8 = v6;
  if ( v6 < 0 )
  {
    v33 = 70;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v33, 0LL);
    goto LABEL_20;
  }
  v11 = (__m128 *)*((_QWORD *)this + 15);
  v12 = *((_QWORD *)this + 1);
  v13 = v11[4];
  v14 = v11[5];
  v15 = v11[9];
  v16 = v11[6];
  v17 = v11[7];
  v18 = v11[8];
  v41[0] = v13.m128_i32[0];
  v41[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v41[4] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  v41[8] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v41[11] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  v41[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  v41[14] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  v41[5] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v41[7] = v16.m128_i32[0];
  v41[10] = v17.m128_i32[0];
  v41[13] = v18.m128_i32[0];
  v43 = v15.m128_i32[0];
  v44 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v45 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v46 = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v41[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  v41[6] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v41[9] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  v41[12] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  v42 = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  v19 = (__int64 (__fastcall ***)(_QWORD, struct D2D_RECT_F *))(v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 12LL));
  if ( *(_DWORD *)((**v19)(v19, &v40) + 4) == 3 )
  {
    v42 = 0;
    v46 = (unsigned int)FLOAT_1_0;
  }
  v20 = v34;
  v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v34 + 72LL))(
          v34,
          0LL,
          0LL,
          v41,
          80);
  v8 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x6Fu, 0LL);
  }
  else
  {
    LODWORD(v34) = 2;
    v23 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v20 + 72LL))(
            v20,
            1LL,
            0LL,
            &v34,
            4);
    v8 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x72u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v20 + 112LL))(
        v20,
        0LL,
        v35,
        1LL);
      if ( g_LockAndReadLayer )
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        v26 = *(int *)(*(_QWORD *)(v25 + 8) + 16LL) + v25 + 8;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v26 + 24LL))(
          v26,
          -(__int64)(a2 != 0LL) & ((unsigned __int64)a2 + 24));
      }
      v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v40.left = 0.0;
      v40.top = 0.0;
      LODWORD(v40.right) = _mm_cvtepi32_ps(v27).m128_u32[0];
      v29 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      LODWORD(v40.bottom) = _mm_cvtepi32_ps(v28).m128_u32[0];
      *(float *)v28.m128i_i32 = (float)*((int *)this + 5);
      LODWORD(v34) = _mm_cvtepi32_ps(v29).m128_u32[0];
      HIDWORD(v34) = v28.m128i_i32[0];
      v30 = CDrawingContext::FillEffect(a2, v20, &v40, (const struct D2D_POINT_2F *)&v34, 1);
      v8 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x8Cu, 0LL);
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(
        v20,
        0LL,
        0LL,
        1LL);
    }
  }
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_20:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v35);
  return v8;
}
