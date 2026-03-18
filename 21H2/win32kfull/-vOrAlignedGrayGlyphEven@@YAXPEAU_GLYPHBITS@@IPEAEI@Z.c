/*
 * XREFs of ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C00DE020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r11
  unsigned __int8 *v5; // r10
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int8 *v10; // r9
  unsigned __int64 v11; // r8
  const __m128i *v12; // rdx
  __m128i *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  __m128i v16; // xmm1
  signed __int64 v17; // rdx

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = a2;
    v8 = a4;
    v9 = (unsigned int)(a1->sizlBitmap.cx + 1) >> 1;
    do
    {
      v10 = &v5[v9];
      v11 = v9;
      v12 = (const __m128i *)aj;
      v13 = (__m128i *)v5;
      v14 = 0LL;
      if ( v5 > &v5[v9] )
        v11 = 0LL;
      if ( v11 >= 0x40 && (v5 > &aj[v11 - 1] || &v5[v11 - 1] < aj) )
      {
        v15 = (unsigned int)v11 & 0xFFFFFFC0;
        do
        {
          v14 += 64LL;
          *v13 = _mm_or_si128(_mm_loadu_si128(v12), _mm_loadu_si128(v13));
          v13[1] = _mm_or_si128(_mm_loadu_si128(v12 + 1), _mm_loadu_si128(v13 + 1));
          v13[2] = _mm_or_si128(_mm_loadu_si128(v12 + 2), _mm_loadu_si128(v13 + 2));
          v16 = _mm_loadu_si128(v12 + 3);
          v12 += 4;
          v13[3] = _mm_or_si128(v16, _mm_loadu_si128(v13 + 3));
          v13 += 4;
        }
        while ( v14 < v15 );
      }
      if ( v13 < (__m128i *)v10 )
      {
        v17 = (char *)v12 - (char *)v13;
        do
        {
          v13->m128i_i8[0] |= v13->m128i_u8[v17];
          v13 = (__m128i *)((char *)v13 + 1);
        }
        while ( v13 < (__m128i *)v10 );
      }
      v5 += v8;
      aj += v7;
    }
    while ( v5 < v6 );
  }
}
