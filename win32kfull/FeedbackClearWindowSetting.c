/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01AED8C
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C0100C70 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C0100E50 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1, char a2)
{
  __m128i *Store; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  Store = (__m128i *)Feedback::GetStore(v5, a1);
  InternalSetProp(
    Store->m128i_i64[0],
    LOWORD(WPP_MAIN_CB.SecurityDescriptor),
    _mm_cvtsi128_si32(_mm_srli_si128(*Store, 8)) & (unsigned int)~(65537 << a2),
    5u);
  return 1LL;
}
