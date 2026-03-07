void __fastcall EXFORMOBJ::vGetCoefficient(__m128i **this, struct _XFORML *a2)
{
  __m128i *v2; // rax
  __int32 v4; // ecx
  float v5; // xmm1_4
  FLOATL v6; // xmm0_4
  __m128i v7; // xmm3
  FLOATL v8; // xmm1_4
  float v9; // xmm0_4
  __m128i v10; // [rsp+0h] [rbp-30h]
  __m128i v11; // [rsp+0h] [rbp-30h]
  __m128i v12; // [rsp+10h] [rbp-20h]

  v2 = *this;
  v4 = (*this)[2].m128i_i32[0];
  if ( (v4 & 8) != 0 )
  {
    v10 = *v2;
    v5 = COERCE_FLOAT(v2->m128i_i64[1]);
    v12 = v2[1];
    v6 = COERCE_FLOAT(HIDWORD(v2->m128i_i64[0])) * 0.0625;
    a2->eM11 = COERCE_FLOAT(*v2) * 0.0625;
    a2->eM12 = v6;
    a2->eM21 = v5 * 0.0625;
    a2->eM22 = *(float *)&v10.m128i_i32[3] * 0.0625;
    a2->eDx = *(float *)v12.m128i_i32 * 0.0625;
    *(float *)&v2 = *(float *)&v12.m128i_i32[1] * 0.0625;
  }
  else
  {
    if ( (v4 & 0x10) == 0 )
    {
      LODWORD(a2->eM11) = v2->m128i_i32[0];
      LODWORD(a2->eM12) = (*this)->m128i_i32[1];
      LODWORD(a2->eM21) = (*this)->m128i_i32[2];
      LODWORD(a2->eM22) = (*this)->m128i_i32[3];
      LODWORD(a2->eDx) = (*this)[1].m128i_i32[0];
      LODWORD(a2->eDy) = (*this)[1].m128i_i32[1];
      return;
    }
    v7 = v2[1];
    v11 = *v2;
    v8 = COERCE_FLOAT(v2->m128i_i64[1]) * 16.0;
    LODWORD(v9) = HIDWORD(v2->m128i_i64[0]);
    a2->eM11 = COERCE_FLOAT(*v2) * 16.0;
    LODWORD(a2->eDx) = _mm_cvtsi128_si32(v7);
    a2->eM12 = v9 * 16.0;
    a2->eM21 = v8;
    a2->eM22 = *(float *)&v11.m128i_i32[3] * 16.0;
    v2 = (__m128i *)HIDWORD(v7.m128i_i64[0]);
  }
  LODWORD(a2->eDy) = (_DWORD)v2;
}
