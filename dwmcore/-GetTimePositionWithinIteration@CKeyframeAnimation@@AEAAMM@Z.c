/*
 * XREFs of ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180236760
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BAF68 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     fmod_0 @ 0x180117734 (fmod_0.c)
 */

float __fastcall CKeyframeAnimation::GetTimePositionWithinIteration(CKeyframeAnimation *this, float a2)
{
  float result; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  int v5; // ebx
  __m128 v6; // xmm2
  __m128 v7; // rt1

  if ( a2 == 0.0 )
    return 0.0;
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
  result = fmod_0(a2, (double)v5);
  if ( result == 0.0 )
    return (float)v5;
  return result;
}
