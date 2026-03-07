__int64 __fastcall CKeyframeAnimation::SetInitialDelay(CKeyframeAnimation *this, float a2)
{
  int v2; // eax
  __m128 v3; // xmm2
  __m128 v4; // rt1
  unsigned int v5; // ebx
  float v7; // [rsp+48h] [rbp+10h]

  if ( (LODWORD(a2) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3 = 0LL;
    v3.m128_f32[0] = (float)(int)a2 - a2;
    v4.m128_f32[0] = FLOAT_N0_5;
    v2 = (int)a2 - _mm_cmple_ss(v3, v4).m128_u32[0];
  }
  else
  {
    v7 = a2 + 6291456.25;
    v2 = (int)(LODWORD(v7) << 10) >> 11;
  }
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 123) = 0;
    v5 = 0;
    *((_DWORD *)this + 122) = v2;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0xCFCu, 0LL);
  }
  return v5;
}
