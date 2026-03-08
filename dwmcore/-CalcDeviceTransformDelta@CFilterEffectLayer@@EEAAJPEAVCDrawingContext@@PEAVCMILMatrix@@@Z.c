/*
 * XREFs of ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801F0F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800CA0D4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_1800CA0D4.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffectLayer::CalcDeviceTransformDelta(
        CFilterEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm4
  __m128i v4; // xmm1
  __m128i v5; // xmm3
  __m128i v6; // xmm2
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // r9
  __int128 v11; // xmm0
  _OWORD v13[4]; // [rsp+20h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+74h] [rbp+2Bh]
  float v17; // [rsp+78h] [rbp+2Fh]
  float v18; // [rsp+7Ch] [rbp+33h]
  float v19; // [rsp+80h] [rbp+37h]
  float v20; // [rsp+84h] [rbp+3Bh]
  float v21; // [rsp+88h] [rbp+3Fh]
  float v22; // [rsp+8Ch] [rbp+43h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v19 = _mm_cvtepi32_ps(v4).m128_f32[0];
  v20 = _mm_cvtepi32_ps(v6).m128_f32[0];
  v17 = _mm_cvtepi32_ps(v3).m128_f32[0];
  v18 = _mm_cvtepi32_ps(v5).m128_f32[0];
  v21 = v17 + v19;
  v22 = v18 + v20;
  CMILMatrix::InferAffineMatrix((CMILMatrix *)v13);
  v7 = v13[1];
  v8 = v14;
  v9 = v13[2];
  *(_OWORD *)v10 = v13[0];
  *(_OWORD *)(v10 + 16) = v7;
  v11 = v13[3];
  *(_OWORD *)(v10 + 32) = v9;
  *(_OWORD *)(v10 + 48) = v11;
  *(_DWORD *)(v10 + 64) = v8;
  return 0LL;
}
