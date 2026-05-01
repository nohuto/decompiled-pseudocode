/*
 * XREFs of ??$?RAEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@AEBUIWindowTabsChangedEventArgsFactory@23456@@Z @ 0x1800E3D58
 * Callers:
 *     ??$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@Z @ 0x1800E5FA8 (--$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@3@_K@Z @ 0x1800E8D64 (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowT.c)
 */

__int64 __fastcall _lambda_ed1a0a1124bc0bd6e2829c576bea0b94_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory const &>(
        _QWORD **a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
    &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory,_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_>'::`2'::factory,
    a2,
    **a1);
  return a2;
}
