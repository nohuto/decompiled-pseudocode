__int64 __fastcall PixelAlign(float a1, int a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // rt1
  float v5; // [rsp+8h] [rbp+8h]

  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3 = 0LL;
    v3.m128_f32[0] = (float)(int)a1 - a1;
    v4.m128_f32[0] = FLOAT_N0_5;
    result = (int)a1 - _mm_cmple_ss(v3, v4).m128_u32[0];
  }
  else
  {
    v5 = a1 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v5) << 10) >> 11);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - (float)(int)result) & _xmm) > 0.00390625 )
  {
    if ( a2 )
      return CFloatFPU::CeilingSat(a1);
    else
      return CFloatFPU::FloorSat(a1);
  }
  return result;
}
