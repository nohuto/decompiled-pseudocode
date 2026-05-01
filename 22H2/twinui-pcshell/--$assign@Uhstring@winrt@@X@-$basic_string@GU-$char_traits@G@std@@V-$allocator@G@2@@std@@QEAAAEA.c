/*
 * XREFs of ??$assign@Uhstring@winrt@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x180264D9C
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3ABC (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803CCC98 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256C24 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

char *__fastcall std::wstring::assign<winrt::hstring,void>(char *a1, HSTRING *a2)
{
  PCWSTR v4[3]; // [rsp+20h] [rbp-18h] BYREF

  winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v4);
  return std::wstring::assign(a1, v4[0], (unsigned __int64)v4[1]);
}
