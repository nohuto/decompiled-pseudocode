/*
 * XREFs of ?RenderTargetRectToDesktopRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018D0B4
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018C710 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18003E07C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

char __fastcall CDDisplayRenderTarget::RenderTargetRectToDesktopRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  char v4; // al
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  char result; // al
  _BYTE v9[64]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+60h] [rbp-48h]
  float v11[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v12; // [rsp+80h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a1 + 11209);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v10 = 0;
  v12 = 0LL;
  v11[0] = (float)*(int *)a3;
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 8));
  LODWORD(v11[1]) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)*(int *)(a3 + 12);
  LODWORD(v11[2]) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v11[3] = *(float *)v5.m128i_i32;
  CMILMatrix::SetToInverse((CMILMatrix *)v9, (const struct CMILMatrix *)(a1 + 18312 + (v4 != 0 ? 0x44 : 0)));
  result = CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (__int64)v11, (float *)&v12);
  *a4 = v12;
  return result;
}
