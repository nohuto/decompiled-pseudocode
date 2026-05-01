/*
 * XREFs of ?GetCurrentLocaleLanguage@ShellFeedsExperienceHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109A3C
 * Callers:
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109994 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::GetCurrentLocaleLanguage(__int64 a1)
{
  LANGID ThreadUILanguage; // ax
  int LocaleInfoW; // eax
  WCHAR *v4; // rdx
  WCHAR LCData[88]; // [rsp+30h] [rbp-C8h] BYREF

  memset_0(LCData, 0, 0xAAuLL);
  ThreadUILanguage = GetThreadUILanguage();
  LocaleInfoW = GetLocaleInfoW(ThreadUILanguage, 0x5Cu, LCData, 85);
  v4 = (WCHAR *)&szAgent;
  if ( LocaleInfoW )
    v4 = LCData;
  std::wstring::wstring(a1, v4);
  return a1;
}
