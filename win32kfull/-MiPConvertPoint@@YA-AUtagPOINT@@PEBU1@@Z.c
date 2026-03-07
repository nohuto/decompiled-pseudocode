struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1)
{
  __m128i v2; // xmm7
  __m128i v3; // xmm6
  int v4; // eax
  int v5; // eax
  __m128i v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h]

  v2 = *(__m128i *)MiPGetPhysicalRect(&v7);
  v3 = *GetScreenRect(&v7);
  v4 = _mm_cvtsi128_si32(v3);
  LODWORD(v8) = EngMulDiv(
                  a1->x - v4,
                  _mm_cvtsi128_si32(_mm_srli_si128(v2, 8)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)) - v4);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  HIDWORD(v8) = EngMulDiv(
                  a1->y - v5,
                  _mm_cvtsi128_si32(_mm_srli_si128(v2, 12)),
                  _mm_cvtsi128_si32(_mm_srli_si128(v3, 12)) - v5);
  return (struct tagPOINT)v8;
}
