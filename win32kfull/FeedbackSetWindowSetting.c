/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C0100DCC
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C0100C70 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C0100E50 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, char a2, int a3)
{
  __m128i v5; // xmm1
  int v6; // r8d
  unsigned int v7; // ecx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(__m128i *)Feedback::GetStore(v9, a1);
  v6 = ~(1 << a2) & (_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | (0x10000 << a2));
  v7 = (1 << a2) | v6;
  if ( !a3 )
    v7 = v6;
  InternalSetProp(v5.m128i_i64[0], LOWORD(WPP_MAIN_CB.SecurityDescriptor), v7, 5LL);
  return 1LL;
}
