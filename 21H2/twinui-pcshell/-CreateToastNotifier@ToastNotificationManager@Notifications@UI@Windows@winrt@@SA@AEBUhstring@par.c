/*
 * XREFs of ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x180149588
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUToastNotifier@Notifications@UI@Windows@2@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@Z @ 0x18014725C (--$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@-$factory_cache_entry@UToastNotification.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_ &>(
    (__int64)a1,
    (__int64)a1,
    &v4);
  return a1;
}
