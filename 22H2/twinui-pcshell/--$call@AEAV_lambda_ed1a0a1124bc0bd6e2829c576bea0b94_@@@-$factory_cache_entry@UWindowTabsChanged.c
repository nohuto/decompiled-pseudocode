/*
 * XREFs of ??$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@Z @ 0x1800E5E38
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800ECC08 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$?RAEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@AEBUIWindowTabsChangedEventArgsFactory@23456@@Z @ 0x1800E3BE8 (--$-RAEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@_lambda_ed1a0a1124.c)
 *     ??$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800E6964 (--$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@.c)
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@3@_K@Z @ 0x1800E8BF4 (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowT.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD **a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = a2;
  v9[2] = &qword_180650FB8;
  _InterlockedIncrement64(&qword_180650FB8);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory,_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_>'::`2'::factory )
  {
    _lambda_ed1a0a1124bc0bd6e2829c576bea0b94_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory const &>(
      a3,
      a2);
    _InterlockedDecrement64(&qword_180650FB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650FB8);
    v9[0] = L"Windows.Internal.UI.Shell.WindowTabsChangedEventArgs";
    v9[1] = 52LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_180650FB8;
      _InterlockedIncrement64(&qword_180650FB8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory,_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650FC0);
      }
      _lambda_ed1a0a1124bc0bd6e2829c576bea0b94_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory const &>(
        a3,
        a2);
      _InterlockedDecrement64(&qword_180650FB8);
    }
    else
    {
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
        &v7,
        a2,
        **a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
