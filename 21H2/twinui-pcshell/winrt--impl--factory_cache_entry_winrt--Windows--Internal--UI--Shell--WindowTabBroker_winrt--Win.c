/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc__&_ @ 0x1800E5E70
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800EFA40 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800E69E4 (--$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA-A.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc____(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string[4]; // [rsp+40h] [rbp-30h] BYREF

  v6 = a2;
  _InterlockedIncrement64(&qword_180650268);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory )
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
      a2,
      &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180650268);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650268);
    v7[0] = L"Windows.Internal.UI.Shell.WindowTabBroker";
    v7[1] = 41LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
    if ( v3 )
    {
      _InterlockedIncrement64(&qword_180650268);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650270);
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
        a2,
        &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory);
      _InterlockedDecrement64(&qword_180650268);
    }
    else
    {
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(a2, &v5);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
