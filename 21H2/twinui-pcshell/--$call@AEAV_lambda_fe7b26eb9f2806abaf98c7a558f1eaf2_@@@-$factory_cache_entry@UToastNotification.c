/*
 * XREFs of ??$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUToastNotifier@Notifications@UI@Windows@2@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@Z @ 0x18014725C
 * Callers:
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x180149588 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x18014A254 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@winrt@@YA?AUIToastNotificationManagerStatics@Notifications@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180147508 (--$get_activation_factory@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@win.c)
 *     ?CreateToastNotifier@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotifier@Notifications@UI@Windows@3@AEBUhstring@param@3@@Z @ 0x18014951C (-CreateToastNotifier@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToast.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_ &>(
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
  v8[2] = &qword_180650328;
  _InterlockedIncrement64(&qword_180650328);
  if ( `winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics,_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
      &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics,_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180650328);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650328);
    v8[0] = L"Windows.UI.Notifications.ToastNotificationManager";
    v8[1] = 49LL;
    winrt::param::hstring::hstring(string, (__int64)v8);
    winrt::get_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>(&v10, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v10, &v7);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    if ( v5 )
    {
      v8[3] = &qword_180650328;
      _InterlockedIncrement64(&qword_180650328);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics,_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_>'::`2'::factory,
              v10,
              0LL) )
      {
        v10 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650330);
      }
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
        &`winrt::impl::call_factory<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics,_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180650328);
    }
    else
    {
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
        &v10,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
  }
  return a2;
}
