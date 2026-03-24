/*
 * XREFs of GetCharDimensions @ 0x1C00E3078
 * Callers:
 *     xxxSetNCFonts @ 0x1C00E2938 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E2FD0 (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E4EE0 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     FinalUserInit @ 0x1C00E4FC8 (FinalUserInit.c)
 *     CreateScaledFont @ 0x1C01E9E50 (CreateScaledFont.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C00E31F8 (GreTextInitialized.c)
 *     GreGetTextMetricsW @ 0x1C00E3244 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rcx
  int v7; // r14d
  int TextMetricsW; // eax
  __int128 v9; // xmm2
  __m128i v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm3
  unsigned int v13; // esi
  __int64 DPIServerInfo; // rax
  int v16; // [rsp+38h] [rbp-49h]
  __m128i v17; // [rsp+48h] [rbp-39h]
  char v18; // [rsp+6Fh] [rbp-12h]
  _OWORD v19[5]; // [rsp+78h] [rbp-9h] BYREF
  struct _POINTL v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v7 = GreTextInitialized();
  if ( !v7 )
    goto LABEL_12;
  memset(v19, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v19);
  v9 = v19[0];
  v10 = (__m128i)v19[1];
  v11 = *(_QWORD *)&v19[3];
  v12 = v19[2];
  v6 = DWORD2(v19[3]);
  v18 = BYTE7(v19[3]);
  v16 = v19[0];
  if ( TextMetricsW )
  {
    v13 = DWORD1(v19[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(v6);
    LODWORD(v6) = *(_DWORD *)(DPIServerInfo + 96);
    v9 = *(_OWORD *)(DPIServerInfo + 40);
    v11 = *(_QWORD *)(DPIServerInfo + 88);
    v12 = *(_OWORD *)(DPIServerInfo + 72);
    v17 = *(__m128i *)(DPIServerInfo + 56);
    v18 = HIBYTE(v11);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v16 = v9;
    if ( !v17.m128i_i32[1] )
      v13 = 8;
    v17.m128i_i32[1] = v13;
    v10 = v17;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v9;
    *(__m128i *)(a2 + 16) = v10;
    *(_OWORD *)(a2 + 32) = v12;
    *(_QWORD *)(a2 + 48) = v11;
    *(_DWORD *)(a2 + 56) = v6;
  }
  if ( a3 )
    *a3 = v16;
  if ( v7
    && (v18 & 1) != 0
    && (v20 = 0LL,
        (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v20, 1)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v20.x) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v20.x) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v13;
  }
}
