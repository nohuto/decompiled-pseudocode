/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F9FE8
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F99E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C012EC44 (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C01AC13C (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 */

void __fastcall xxxSendMousePromotion(const struct tagMOUSE_PROMOTION_ENTRY *a1)
{
  __int64 v2; // rcx

  KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Mouse::InjectInput();
  v2 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)gptCursorAsync == (_DWORD)v2 )
    v2 = *((unsigned int *)a1 + 3);
  if ( (*((_DWORD *)a1 + 11) & 2) != 0 )
    Enforced(v2);
  Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage();
  SynthesizeMouseInput(0LL);
}
