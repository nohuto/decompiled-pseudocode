/*
 * XREFs of ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1802365A8
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D27C0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BAF68 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CKeyframeAnimation::AdjustAllKeyframeTime(CKeyframeAnimation *this, float a2)
{
  __int64 v2; // r10
  float v3; // xmm0_4
  float v4; // xmm0_4
  int v5; // eax
  __m128 v6; // xmm2
  __m128 v7; // rt1
  __int64 v8; // r8
  __int64 i; // r9
  __int64 v10; // rdx

  v3 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6 = 0LL;
    v6.m128_f32[0] = (float)(int)v3 - v3;
    v7.m128_f32[0] = FLOAT_N0_5;
    v5 = (int)v3 - _mm_cmple_ss(v6, v7).m128_u32[0];
  }
  else
  {
    v4 = v3 + 6291456.25;
    v5 = (int)(LODWORD(v4) << 10) >> 11;
  }
  v8 = *(_QWORD *)(v2 + 392);
  for ( i = 0LL; (int)i < *(_DWORD *)(v8 + 112); v8 = *(_QWORD *)(v2 + 392) )
  {
    v10 = 3 * i;
    i = (unsigned int)(i + 1);
    *(_DWORD *)(*(_QWORD *)(v8 + 104) + 8 * v10) = (int)(float)((float)*(int *)(*(_QWORD *)(v8 + 104) + 8 * v10)
                                                              * (float)(a2 / (float)v5));
    *(_BYTE *)(v8 + 140) |= 4u;
  }
}
