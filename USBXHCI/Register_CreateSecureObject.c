__int64 __fastcall Register_CreateSecureObject(__int64 a1)
{
  __m128i *v1; // rdx
  __int64 v3; // rcx
  unsigned __int16 v4; // si
  __m128i v5; // xmm0
  bool v6; // si
  bool v7; // r14
  int v8; // edi
  int v9; // edx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  GUID v13[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  v1 = *(__m128i **)(a1 + 8);
  v11 = 0LL;
  LODWORD(v12) = 0;
  v3 = v1[7].m128i_i64[0];
  v4 = _mm_srli_si128(v1[21], 8).m128i_u16[0];
  v5 = v1[21];
  v15 = 0LL;
  v6 = (v4 & 0x4000) == 0LL;
  v14 = 0LL;
  LODWORD(v14) = 7;
  memset(v13, 0, sizeof(v13));
  v7 = (_mm_srli_si128(v5, 8).m128i_u16[0] & 0x2000) == 0LL;
  *((_QWORD *)&v14 + 1) = v1[38].m128i_i64[1];
  BYTE2(v15) = v7;
  BYTE1(v15) = v6;
  LOBYTE(v15) = v1[21].m128i_i64[0] & 1;
  v8 = SecureChannel_SendRequestSynchronously(v3, v13, 56, (__int64)&v11, 16);
  if ( v8 >= 0 )
  {
    v9 = v11;
    if ( (int)v11 >= 0 )
    {
      *(_QWORD *)(a1 + 128) = v12;
      *(_BYTE *)(a1 + 136) = v6;
      *(_BYTE *)(a1 + 137) = v7;
    }
    else
    {
      v8 = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          6,
          72,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v11);
      }
    }
  }
  return (unsigned int)v8;
}
