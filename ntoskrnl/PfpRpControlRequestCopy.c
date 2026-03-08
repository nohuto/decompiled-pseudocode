/*
 * XREFs of PfpRpControlRequestCopy @ 0x1407DF940
 * Callers:
 *     PfpRpControlRequest @ 0x1407DFB68 (PfpRpControlRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpControlRequestCopy(__m128i *Src, unsigned int a2, __m128i **a3, __m128i *Pool2, char a5)
{
  char *v7; // rcx
  __m128i v8; // xmm6
  __int64 v9; // xmm7_8
  unsigned __int16 epi16; // ax
  unsigned __int64 v11; // rcx
  size_t v12; // rbx
  __m128i v16; // [rsp+38h] [rbp-80h]

  if ( a5 && a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = &Src->m128i_i8[a2];
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < (char *)Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v8 = *Src;
  v16 = *Src;
  v9 = Src[1].m128i_i64[0];
  if ( (unsigned __int16)_mm_cvtsi128_si32(*Src) != 3 )
    return (unsigned int)-1073741811;
  epi16 = _mm_extract_epi16(v8, 1);
  if ( epi16 >= 4u )
    return (unsigned int)-1073741811;
  if ( epi16 == 1 )
  {
    v16.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    if ( v16.m128i_i32[1] )
      return (unsigned int)-1073741811;
    v16.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    if ( v16.m128i_i32[2] )
      return (unsigned int)-1073741811;
    v16.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    if ( __PAIR64__(v16.m128i_u32[3], 0) != (unsigned int)v9 )
      return (unsigned int)-1073741811;
  }
  v11 = 8 * (v16.m128i_u32[3] + (unsigned __int64)(unsigned int)v9)
      - ((8 * (v16.m128i_i8[4] + v16.m128i_i8[8]) + 23) & 7)
      + 8 * (v16.m128i_u32[1] + (unsigned __int64)v16.m128i_u32[2])
      + 31;
  if ( v11 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v12 = (unsigned int)v11;
  if ( (unsigned int)v11 != (unsigned __int64)a2 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( (unsigned int)v11 <= 0x28uLL
         || (Pool2 = (__m128i *)ExAllocatePool2(256LL, (unsigned int)v11, 1129473616LL)) != 0LL )
  {
    memmove(Pool2, Src, v12);
    *Pool2 = v8;
    Pool2[1].m128i_i64[0] = v9;
    *a3 = Pool2;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
}
