/*
 * XREFs of GetCharDimensions @ 0x1C00C40F8
 * Callers:
 *     ValidateExternalLogFont @ 0x1C00C3544 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00EF7F8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     CreateScaledFont @ 0x1C01E4B98 (CreateScaledFont.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C00C4278 (GreTextInitialized.c)
 *     GreGetTextMetricsW @ 0x1C00C42C4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  int TextMetricsW; // eax
  __int128 v10; // xmm2
  __m128i v11; // xmm1
  __int64 v12; // xmm0_8
  __int128 v13; // xmm3
  unsigned int v14; // esi
  __int64 DPIServerInfo; // rax
  int v17; // [rsp+38h] [rbp-49h]
  __m128i v18; // [rsp+48h] [rbp-39h]
  char v19; // [rsp+6Fh] [rbp-12h]
  _OWORD v20[5]; // [rsp+78h] [rbp-9h] BYREF
  struct _POINTL v21; // [rsp+F0h] [rbp+6Fh] BYREF

  v8 = GreTextInitialized();
  if ( !v8 )
    goto LABEL_12;
  memset(v20, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v20);
  v10 = v20[0];
  v11 = (__m128i)v20[1];
  v12 = *(_QWORD *)&v20[3];
  v13 = v20[2];
  v7 = DWORD2(v20[3]);
  v19 = BYTE7(v20[3]);
  v17 = v20[0];
  if ( TextMetricsW )
  {
    v14 = DWORD1(v20[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(v7, v6);
    LODWORD(v7) = *(_DWORD *)(DPIServerInfo + 96);
    v10 = *(_OWORD *)(DPIServerInfo + 40);
    v12 = *(_QWORD *)(DPIServerInfo + 88);
    v13 = *(_OWORD *)(DPIServerInfo + 72);
    v18 = *(__m128i *)(DPIServerInfo + 56);
    v19 = HIBYTE(v12);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
    v17 = v10;
    if ( !v18.m128i_i32[1] )
      v14 = 8;
    v18.m128i_i32[1] = v14;
    v11 = v18;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v10;
    *(__m128i *)(a2 + 16) = v11;
    *(_OWORD *)(a2 + 32) = v13;
    *(_QWORD *)(a2 + 48) = v12;
    *(_DWORD *)(a2 + 56) = v7;
  }
  if ( a3 )
    *a3 = v17;
  if ( v8
    && (v19 & 1) != 0
    && (v21 = 0LL,
        (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v21, 1)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v21.x) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v21.x) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v14;
  }
}
