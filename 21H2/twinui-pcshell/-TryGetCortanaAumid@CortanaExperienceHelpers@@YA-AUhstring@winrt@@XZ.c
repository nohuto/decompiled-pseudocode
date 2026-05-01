/*
 * XREFs of ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18004D404
 * Callers:
 *     ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x18004D258 (-IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180262904 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?IsCortanaApp@@YA_NPEAUIApplicationView@@@Z @ 0x180450F0C (-IsCortanaApp@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@Z @ 0x18004D514 (--$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_WindowsCreateStringReference @ 0x180091442 (WINRT_WindowsCreateStringReference.c)
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x18009C240 (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-AUhstr.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ @ 0x180261C44 (-CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CortanaExperienceHelpers::TryGetCortanaAumid(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF

  v7 = a1;
  LODWORD(v6) = 1;
  WINRT_WindowsCreateStringReference(L"com.microsoft.windows.app.cortana", 0x21u, &hstringHeader, &string);
  v8[0] = &string;
  v8[1] = &v6;
  winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_722bf15f14af49770b27fb8f87b12f2a_ &>(
    v2,
    &v7,
    v8);
  v8[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 72LL))(v7, v8);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  v4 = v8[0];
  v6 = v8[0];
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(a1, &v6);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  if ( !*a1 )
    CortanaProactiveTelemetry::CortanaStoreApp_AppNotFoundWithExpectedExtension();
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return a1;
}
