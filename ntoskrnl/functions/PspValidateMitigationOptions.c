__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  char *v2; // r8
  int v3; // eax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // xmm1_8
  int v9; // edx
  __int64 v10; // r10
  __m128i v11; // xmm0
  int v12; // ecx
  __m128i v14; // [rsp+0h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-50h]
  _DWORD v16[3]; // [rsp+20h] [rbp-40h]
  char v17; // [rsp+2Ch] [rbp-34h] BYREF
  __m128i si128; // [rsp+3Ch] [rbp-24h]
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]

  v16[0] = 0;
  v2 = &v17;
  v3 = 9;
  v16[1] = 1;
  v16[2] = 2;
  v6 = 4LL;
  do
  {
    *(_DWORD *)v2 = v3++;
    v2 += 4;
    --v6;
  }
  while ( v6 );
  v7 = 40;
  v8 = a1[1].m128i_i64[0];
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = 0LL;
  v19 = 32;
  v11 = *a1;
  v14 = *a1;
  v20 = 33;
  v15 = v8;
  while ( a2
       || (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(unsigned int)(4 * v9) >> 6] >> ((4 * v9) & 0x3F)) & 4) == 0 )
  {
    if ( (unsigned int)v10 < 0xD && v16[v10] == v9 )
    {
      v10 = (unsigned int)(v10 + 1);
    }
    else if ( (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(unsigned int)(4 * v9) >> 6] >> ((4 * v9) & 0x3F)) & 0xF) == 3 )
    {
      return 3221225485LL;
    }
    if ( (unsigned int)++v9 >= 0x28 )
    {
      v14 = v11;
      v15 = v8;
      while ( (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 0xF) == 0 )
      {
        if ( (unsigned int)++v7 >= 0x30 )
        {
          v12 = ((_mm_srli_si128(v11, 8).m128i_u64[0] >> 12) & 3) - 1;
          if ( v12 && (unsigned int)(v12 - 1) >= 2 )
            return 0LL;
          return 3221225485LL;
        }
      }
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
