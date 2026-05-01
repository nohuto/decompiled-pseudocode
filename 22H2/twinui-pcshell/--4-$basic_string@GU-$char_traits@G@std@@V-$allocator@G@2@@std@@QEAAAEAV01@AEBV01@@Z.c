/*
 * XREFs of ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EC80
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3ABC (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109994 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??4path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011B73C (--4path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BAA0 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180120FCC (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

char *__fastcall std::wstring::operator=(char *a1, char *a2)
{
  unsigned __int64 v3; // r8

  if ( a1 != a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    std::wstring::assign(a1, a2, v3);
  }
  return a1;
}
