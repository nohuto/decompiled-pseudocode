/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F1670
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18000EF44 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rdi
  __m128i v4; // xmm0
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  _DWORD v17[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = (unsigned __int64)a2 + 24;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v17[0] = 0;
  v17[1] = 0;
  v17[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v17[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( g_LockAndReadLayer )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v8 = *(int *)(*(_QWORD *)(v7 + 8) + 16LL) + v7 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(
      v8,
      v3 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x68u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
    v13 = *((_QWORD *)this + 1);
    if ( v13 )
      v13 += *(int *)(*(_QWORD *)(v13 + 8) + 16LL) + 8LL;
    v14 = CDrawingContext::DrawBitmapRealization(
            (__int64)a2,
            v13,
            (__int64)v17,
            (__int64)this + 120,
            v12 != 0,
            0,
            (int)FLOAT_1_0);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x6Eu, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v11;
}
