/*
 * XREFs of PspHardenMitigationOptions @ 0x140791198
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PspHardenMitigationOptions(__m128i *a1)
{
  __int64 v2; // xmm2_8
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // xmm1_8
  unsigned __int8 v6; // cl
  char v7; // al
  __m128i v8; // [rsp+20h] [rbp-20h]

  v2 = a1[1].m128i_i64[0];
  v3 = a1->m128i_i64[0];
  v4 = a1->m128i_i64[0] - PspHardenedMitigationOptionsMap;
  v8 = *a1;
  if ( a1->m128i_i64[0] == (_QWORD)PspHardenedMitigationOptionsMap )
  {
    v5 = _mm_srli_si128(*a1, 8).m128i_u64[0];
    v4 = v5 - *((_QWORD *)&PspHardenedMitigationOptionsMap + 1);
    if ( v5 == *((_QWORD *)&PspHardenedMitigationOptionsMap + 1) )
      v4 = a1[1].m128i_i64[0] - qword_140D1F428;
  }
  if ( v4 )
  {
    v6 = (unsigned __int8)*a1;
    if ( (v8.m128i_i8[0] & 3) != 1 )
    {
      v3 = v3 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      v8.m128i_i64[0] = v3;
      v6 = v3;
    }
    if ( (BYTE1(v3) & 3) != 3 )
    {
      v3 |= 0x300uLL;
      v8.m128i_i64[0] = v3;
      v6 = v3;
    }
    if ( ((v3 >> 12) & 3) != 1 )
    {
      v3 = v3 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
      v8.m128i_i64[0] = v3;
      v6 = v3;
    }
    if ( ((v6 >> 4) & 3) != 1 )
    {
      v3 = v3 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      v8.m128i_i64[0] = v3;
    }
    if ( (BYTE2(v3) & 3) != 1 )
    {
      v3 = v3 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
      v8.m128i_i64[0] = v3;
    }
    v7 = (v3 >> 20) & 3;
    if ( v7 != 1 && v7 != 2 && (((unsigned __int64)PspSystemMitigationOptions >> 20) & 3) != 2 )
      v8.m128i_i64[0] = v3 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
    *a1 = v8;
    a1[1].m128i_i64[0] = v2;
  }
}
