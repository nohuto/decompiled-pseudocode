/*
 * XREFs of ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1801F0C48
 * Callers:
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F0E44 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CTreeEffectLayer::GetTransformToLayerSpace(__int64 a1, D2D1::Matrix3x2F *a2)
{
  float v2; // xmm1_4
  int v3; // eax
  __m128i v4; // xmm0
  int v5; // eax
  __int64 v6; // r9
  _DWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  float v9; // [rsp+30h] [rbp-38h]
  float v10; // [rsp+34h] [rbp-34h]
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v12; // [rsp+48h] [rbp-20h]
  float v13; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(float *)(a1 + 280);
  v3 = *(_DWORD *)(a1 + 16);
  v8[1] = 0;
  v8[2] = 0;
  v11 = *(_OWORD *)&_xmm;
  v4 = _mm_cvtsi32_si128(-v3);
  v5 = *(_DWORD *)(a1 + 20);
  *(float *)v8 = v2;
  v12 = _mm_cvtepi32_ps(v4).m128_u32[0];
  *(float *)&v8[3] = v2;
  v13 = (float)-v5;
  v9 = 0.0 - (float)(v2 * 0.0);
  v10 = v9;
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&v11, (const struct D2D1::Matrix3x2F *)v8);
  return v6;
}
