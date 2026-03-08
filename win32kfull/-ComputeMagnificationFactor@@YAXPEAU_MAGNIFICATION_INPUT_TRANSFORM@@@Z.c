/*
 * XREFs of ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01F7C48
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

void __fastcall ComputeMagnificationFactor(__m128i *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // xmm0_8

  v1 = a1[1].m128i_i64[0];
  v2 = a1->m128i_i64[0];
  v3 = _mm_srli_si128(a1[1], 8).m128i_u64[0];
  v4 = _mm_srli_si128(*a1, 8).m128i_u64[0];
  a1[2].m128i_i32[2] = (((int)v3 - (int)v1) << 8) / (int)(v4 - a1->m128i_i64[0]);
  a1[2].m128i_i32[3] = ((HIDWORD(v3) - HIDWORD(v1)) << 8) / (HIDWORD(v4) - HIDWORD(v2));
}
