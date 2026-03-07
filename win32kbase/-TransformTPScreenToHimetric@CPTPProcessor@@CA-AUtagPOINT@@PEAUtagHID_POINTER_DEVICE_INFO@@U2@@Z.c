struct tagPOINT __fastcall CPTPProcessor::TransformTPScreenToHimetric(__m128i *a1, struct tagPOINT a2)
{
  __m128i v2; // xmm1
  LONG y; // rbx^4
  __int64 v5; // rdi
  unsigned __int64 v6; // xmm0_8
  __int64 v8; // [rsp+30h] [rbp+8h]

  v2 = a1[10];
  y = a2.y;
  v5 = a1[10].m128i_i64[0];
  v6 = _mm_srli_si128(v2, 8).m128i_u64[0];
  LODWORD(v8) = EngMulDiv(a2.x - v2.m128i_i32[0], a1[11].m128i_i32[2], v6 - v2.m128i_i32[0]);
  HIDWORD(v8) = EngMulDiv(y - HIDWORD(v5), a1[11].m128i_i32[3], HIDWORD(v6) - HIDWORD(v5));
  return (struct tagPOINT)v8;
}
