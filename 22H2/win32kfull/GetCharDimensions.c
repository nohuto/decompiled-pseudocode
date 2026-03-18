/*
 * XREFs of GetCharDimensions @ 0x1C007A270
 * Callers:
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0078DC8 (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C008A010 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     CreateScaledFont @ 0x1C01BF458 (CreateScaledFont.c)
 * Callees:
 *     GreTextInitialized @ 0x1C007A410 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C007DC34 (-GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall GetCharDimensions(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  int TextMetricsW; // ebx
  __int128 v14; // xmm2
  __m128i v15; // xmm1
  __int64 v16; // xmm0_8
  __int128 v17; // xmm3
  unsigned int v18; // ebx
  __int64 DPIServerInfo; // rax
  __int128 v21; // [rsp+38h] [rbp-49h] BYREF
  __m128i v22; // [rsp+48h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int128 v24; // [rsp+78h] [rbp-9h] BYREF
  __m128i v25; // [rsp+88h] [rbp+7h]
  __int128 v26; // [rsp+98h] [rbp+17h]
  __int64 v27; // [rsp+A8h] [rbp+27h]
  unsigned int v28; // [rsp+B0h] [rbp+2Fh]
  __int64 v29; // [rsp+F0h] [rbp+6Fh] BYREF

  v10 = GreTextInitialized();
  if ( !v10 )
    goto LABEL_12;
  memset_0(&v24, 0, 0x44uLL);
  v12 = SGDGetSessionState(v11);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)&v21, *(struct Gre::Full::SESSION_GLOBALS **)(v12 + 32));
  TextMetricsW = GrepGetTextMetricsW(a1, &v24, 1027LL);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)&v21);
  v14 = v24;
  v15 = v25;
  v16 = v27;
  v17 = v26;
  v7 = v28;
  v23 = v27;
  v21 = v24;
  v22 = v25;
  if ( TextMetricsW )
  {
    v18 = v22.m128i_u32[1];
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(v7, v6, v8, v9);
    LODWORD(v7) = *(_DWORD *)(DPIServerInfo + 96);
    v14 = *(_OWORD *)(DPIServerInfo + 40);
    v16 = *(_QWORD *)(DPIServerInfo + 88);
    v17 = *(_OWORD *)(DPIServerInfo + 72);
    v22 = *(__m128i *)(DPIServerInfo + 56);
    v23 = v16;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
    v21 = v14;
    if ( !v22.m128i_i32[1] )
      v18 = 8;
    v22.m128i_i32[1] = v18;
    v15 = v22;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v14;
    *(__m128i *)(a2 + 16) = v15;
    *(_OWORD *)(a2 + 32) = v17;
    *(_QWORD *)(a2 + 48) = v16;
    *(_DWORD *)(a2 + 56) = v7;
  }
  if ( a3 )
    *a3 = v21;
  if ( v10
    && (v23 & 0x100000000000000LL) != 0
    && (v29 = 0LL,
        (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 52LL, &v29)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * (int)v29) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * (int)v29) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v18;
  }
}
