/*
 * XREFs of ??$call@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?AUToastNotification@Notifications@UI@Windows@2@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@Z @ 0x1801470D8
 * Callers:
 *     ??0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z @ 0x1801479E4 (--0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@winrt@@YA?AUIToastNotificationFactory@Notifications@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180147474 (--$get_activation_factory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@winrt@@YA-.c)
 *     ?CreateToastNotification@?$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotification@Notifications@UI@Windows@3@AEBUXmlDocument@Dom@Xml@Data@73@@Z @ 0x1801494B0 (-CreateToastNotification@-$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNot.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>::call<_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF

  v7 = a2;
  v8[2] = &qword_180650348;
  _InterlockedIncrement64(&qword_180650348);
  if ( `winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory,_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
      &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory,_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180650348);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650348);
    v8[0] = L"Windows.UI.Notifications.ToastNotification";
    v8[1] = 42LL;
    winrt::param::hstring::hstring(string, (__int64)v8);
    winrt::get_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationFactory>(&v10, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v10, &v7);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    if ( v5 )
    {
      v8[3] = &qword_180650348;
      _InterlockedIncrement64(&qword_180650348);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory,_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_>'::`2'::factory,
              v10,
              0LL) )
      {
        v10 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650350);
      }
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
        &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory,_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180650348);
    }
    else
    {
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
        &v10,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
  }
  return a2;
}
