/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C0080B34
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00809B0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C0080AF8 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, char a2, int a3)
{
  __m128i v5; // xmm1
  int v6; // r8d
  unsigned int v7; // ecx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(__m128i *)Feedback::GetStore(v9, a1);
  v6 = ~(1 << a2) & (_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | (0x10000 << a2));
  v7 = (1 << a2) | v6;
  if ( !a3 )
    v7 = v6;
  InternalSetProp(v5.m128i_i64[0], (unsigned __int16)gatomFeedbackSettings, v7, 5LL);
  return 1LL;
}
