/*
 * XREFs of PspValidateMitigationOptions @ 0x14060DEFC
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationOptions @ 0x1406B0A94 (PspReadIFEOMitigationOptions.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  int v2; // eax
  char *v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // xmm1_8
  __int64 v9; // r10
  __m128i v10; // xmm0
  int v11; // r8d
  __m128i v13; // [rsp+0h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-50h]
  _DWORD v15[3]; // [rsp+20h] [rbp-40h]
  char v16; // [rsp+2Ch] [rbp-34h] BYREF
  __m128i si128; // [rsp+3Ch] [rbp-24h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v15[0] = 0;
  v2 = 9;
  v15[1] = 1;
  v15[2] = 2;
  v5 = &v16;
  v6 = 4LL;
  do
  {
    *(_DWORD *)v5 = v2++;
    v5 += 4;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  v8 = a1[1].m128i_i64[0];
  v9 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v18 = 32;
  v10 = *a1;
  v11 = 39;
  v13 = *a1;
  v19 = 33;
  v20 = 38;
  v14 = v8;
  while ( a2
       || (((unsigned __int64)v13.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 4) == 0 )
  {
    if ( (unsigned int)v9 < 0xE && v15[v9] == v7 )
    {
      v9 = (unsigned int)(v9 + 1);
    }
    else if ( (((unsigned __int64)v13.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 0xF) == 3 )
    {
      return 3221225485LL;
    }
    if ( (unsigned int)++v7 >= 0x27 )
    {
      v13 = v10;
      v14 = v8;
      while ( (((unsigned __int64)v13.m128i_i64[(unsigned __int64)(unsigned int)(4 * v11) >> 6] >> ((4 * v11) & 0x3F)) & 0xF) == 0 )
      {
        if ( (unsigned int)++v11 >= 0x30 )
        {
          if ( ((_mm_srli_si128(v10, 8).m128i_u64[0] >> 12) & 3) != 0 )
            return 3221225485LL;
          return 0LL;
        }
      }
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
