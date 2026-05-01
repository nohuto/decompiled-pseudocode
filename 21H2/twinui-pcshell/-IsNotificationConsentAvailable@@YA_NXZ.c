/*
 * XREFs of ?IsNotificationConsentAvailable@@YA_NXZ @ 0x18014A254
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUToastNotifier@Notifications@UI@Windows@2@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@Z @ 0x18014725C (--$call@AEAV_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_@@@-$factory_cache_entry@UToastNotification.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x180261164 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool IsNotificationConsentAvailable(void)
{
  __int64 v0; // rcx
  unsigned int v1; // eax
  bool v2; // bl
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING *v6; // [rsp+48h] [rbp-20h] BYREF

  winrt::param::hstring::hstring(string, L"Windows.SystemToast.PinConsent");
  v6 = string;
  winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_fe7b26eb9f2806abaf98c7a558f1eaf2_ &>(
    v0,
    (__int64)&v4,
    &v6);
  v1 = (*(__int64 (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)v4 + 64LL))(v4, &v6);
  winrt::check_hresult(v1);
  v2 = (_DWORD)v6 == 0;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  return v2;
}
