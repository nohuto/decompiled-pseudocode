/*
 * XREFs of ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800AB37C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800AAD18 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x1800AC628 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 */

void __fastcall KeyframeSequence::AddKeyframe(
        KeyframeSequence *this,
        unsigned int a2,
        float a3,
        struct KeyframeValue *a4,
        struct KeyframeInterpolation *a5)
{
  float v5; // xmm2_4
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // ecx
  float v10; // xmm1_4
  __m128 v11; // xmm2
  __m128 v12; // rt1
  float v13; // [rsp+38h] [rbp+10h]

  v5 = a3 * 1000.0;
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v9 = (int)v5;
    v10 = v5;
    v11 = 0LL;
    v11.m128_f32[0] = (float)v9 - v10;
    v12.m128_f32[0] = FLOAT_N0_5;
    v7 = v9 - _mm_cmple_ss(v11, v12).m128_u32[0];
  }
  else
  {
    v13 = v5 + 6291456.25;
    v7 = (int)(LODWORD(v13) << 10) >> 11;
  }
  v8 = 3LL * a2;
  *(_DWORD *)(*((_QWORD *)this + 13) + 24LL * a2) = v7;
  Microsoft::WRL::ComPtr<KeyframeValue>::operator=(*((_QWORD *)this + 13) + 8LL + 24LL * a2, a4);
  Microsoft::WRL::ComPtr<KeyframeValue>::operator=(*((_QWORD *)this + 13) + 8 * (v8 + 2), a5);
  *((_BYTE *)this + 140) |= 4u;
}
