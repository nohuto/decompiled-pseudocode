__int64 __fastcall GetCIEPrims(__m128i *a1, _DWORD *a2, __int64 a3, int a4)
{
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // r9
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  __int64 result; // rax
  __m128i v14; // xmm2
  __int64 v15; // xmm1_8

  if ( !a1 )
    goto LABEL_2;
  v14 = *a1;
  v6 = a1[2].m128i_u16[4];
  v15 = a1[2].m128i_i64[0];
  v9 = _mm_cvtsi128_si32(*a1);
  if ( (unsigned __int16)(v9 - 10) > 0x1F36u
    || (v10 = v14.m128i_i64[0], (unsigned __int16)(v14.m128i_i16[1] - 10) > 0x212Au)
    || (unsigned __int16)(v14.m128i_i16[3] - 10) > 0x1F36u
    || (v7 = v14.m128i_u16[4], (unsigned __int16)(v14.m128i_i16[4] - 10) > 0x212Au)
    || (v8 = v14.m128i_u64[1], (unsigned __int16)(v14.m128i_i16[6] - 10) > 0x1F36u)
    || (unsigned __int16)(v14.m128i_i16[7] - 10) > 0x212Au
    || (v12 = WORD2(v15), (unsigned __int16)(WORD2(v15) - 10) > 0x1F36u)
    || (v11 = HIWORD(v15), (unsigned __int16)(HIWORD(v15) - 10) > 0x212Au)
    || (unsigned __int16)(v6 - 2500) > 0xE09Cu )
  {
LABEL_2:
    v6 = 10000;
    v7 = WORD4(HT_CIE_SRGB);
    v8 = *((_QWORD *)&HT_CIE_SRGB + 1);
    v9 = HT_CIE_SRGB;
    v10 = HT_CIE_SRGB;
    v11 = 3290;
    v12 = 3127;
  }
  if ( a4 )
  {
    v12 = 6254 - v12;
    v11 = 6580 - v11;
  }
  *a2 = 100 * v9;
  a2[1] = 100 * WORD1(v10);
  a2[2] = 100 * HIWORD(v10);
  a2[3] = 100 * v7;
  a2[4] = 100 * WORD2(v8);
  a2[5] = 100 * HIWORD(v8);
  a2[6] = 100 * v12;
  result = v6;
  a2[7] = 100 * v11;
  a2[8] = 100 * v6;
  return result;
}
