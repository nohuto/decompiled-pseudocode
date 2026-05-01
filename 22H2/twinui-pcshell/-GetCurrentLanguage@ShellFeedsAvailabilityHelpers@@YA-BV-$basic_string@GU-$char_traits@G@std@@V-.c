/*
 * XREFs of ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109994
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801073BC (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108D88 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetCurrentLocaleLanguage@ShellFeedsExperienceHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109A3C (-GetCurrentLocaleLanguage@ShellFeedsExperienceHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std.c)
 *     ?GetCurrentUILanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109AD8 (-GetCurrentUILanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EC80 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsAvailabilityHelpers::GetCurrentLanguage(__int64 a1, __int64 a2)
{
  __int64 CurrentUILanguage; // rax
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF

  ShellFeedsExperienceHelpers::GetCurrentLocaleLanguage(a1, a2);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    CurrentUILanguage = ShellFeedsAvailabilityHelpers::GetCurrentUILanguage(v5);
    std::wstring::operator=(a1, CurrentUILanguage);
    std::wstring::_Tidy_deallocate(v5);
  }
  return a1;
}
