/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@3@_K@Z @ 0x1800E8BF4
 * Callers:
 *     ??$?RAEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@AEBUIWindowTabsChangedEventArgsFactory@23456@@Z @ 0x1800E3BE8 (--$-RAEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@_lambda_ed1a0a1124.c)
 *     ??$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@Z @ 0x1800E5E38 (--$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, a3, &v7);
  winrt::check_hresult(v5);
  *a2 = v7;
  return a2;
}
