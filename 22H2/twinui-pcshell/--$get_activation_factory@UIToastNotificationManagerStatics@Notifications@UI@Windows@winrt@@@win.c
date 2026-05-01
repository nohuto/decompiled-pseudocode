/*
 * XREFs of ??$get_activation_factory@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@winrt@@YA?AUIToastNotificationManagerStatics@Notifications@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180147398
 * Callers:
 *     ??$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUToastNotifier@Notifications@UI@Windows@2@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@Z @ 0x1801470EC (--$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@-$factory_cache_entry@UToastNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     RoGetActivationFactory_0 @ 0x18009143A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009181D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  result = a1;
  *a1 = v6;
  return result;
}
