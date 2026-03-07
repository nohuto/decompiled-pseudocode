__int64 __fastcall GetCharDimensions(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rcx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  int TextMetricsW; // ebx
  __int128 v11; // xmm2
  __m128i v12; // xmm1
  __int64 v13; // xmm0_8
  __int128 v14; // xmm3
  unsigned int v15; // ebx
  __int64 DPIServerInfo; // rax
  __int128 v18; // [rsp+38h] [rbp-49h] BYREF
  __m128i v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int128 v21; // [rsp+78h] [rbp-9h] BYREF
  __m128i v22; // [rsp+88h] [rbp+7h]
  __int128 v23; // [rsp+98h] [rbp+17h]
  __int64 v24; // [rsp+A8h] [rbp+27h]
  unsigned int v25; // [rsp+B0h] [rbp+2Fh]
  __int64 v26; // [rsp+F0h] [rbp+6Fh] BYREF

  v7 = GreTextInitialized();
  if ( !v7 )
    goto LABEL_12;
  memset_0(&v21, 0, 0x44uLL);
  v9 = SGDGetSessionState(v8);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)&v18, *(struct Gre::Full::SESSION_GLOBALS **)(v9 + 32));
  TextMetricsW = GrepGetTextMetricsW(a1, &v21, 1027LL);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)&v18);
  v11 = v21;
  v12 = v22;
  v13 = v24;
  v14 = v23;
  v6 = v25;
  v20 = v24;
  v18 = v21;
  v19 = v22;
  if ( TextMetricsW )
  {
    v15 = v19.m128i_u32[1];
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(v6);
    LODWORD(v6) = *(_DWORD *)(DPIServerInfo + 96);
    v11 = *(_OWORD *)(DPIServerInfo + 40);
    v13 = *(_QWORD *)(DPIServerInfo + 88);
    v14 = *(_OWORD *)(DPIServerInfo + 72);
    v19 = *(__m128i *)(DPIServerInfo + 56);
    v20 = v13;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
    v18 = v11;
    if ( !v19.m128i_i32[1] )
      v15 = 8;
    v19.m128i_i32[1] = v15;
    v12 = v19;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v11;
    *(__m128i *)(a2 + 16) = v12;
    *(_OWORD *)(a2 + 32) = v14;
    *(_QWORD *)(a2 + 48) = v13;
    *(_DWORD *)(a2 + 56) = v6;
  }
  if ( a3 )
    *a3 = v18;
  if ( v7
    && (v20 & 0x100000000000000LL) != 0
    && (v26 = 0LL,
        (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 52LL, &v26)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * (int)v26) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * (int)v26) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v15;
  }
}
