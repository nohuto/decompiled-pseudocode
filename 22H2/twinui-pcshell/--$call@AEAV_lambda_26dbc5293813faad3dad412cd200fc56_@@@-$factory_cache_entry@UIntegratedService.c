/*
 * XREFs of ??$call@AEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@Z @ 0x18009E170
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@SA@XZ @ 0x1800A803C (-IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Prof.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@winrt@@YA?AUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009E8A0 (--$get_activation_factory@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@Win.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?IsWebSearchProvidersThirdPartyExtensionsEnabled@?$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A800C (-IsWebSearchProvidersThirdPartyExtensionsEnabled@-$consume_WindowsUdk_System_Profile_IIntegrated.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
char winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<_lambda_26dbc5293813faad3dad412cd200fc56_ &>()
{
  char result; // al
  __int64 v1; // rbx
  __int64 IsWebSearchProvidersThirdPartyExtensionsEnabled; // rbx
  signed __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v5[2] = &qword_180650888;
  _InterlockedIncrement64(&qword_180650888);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_26dbc5293813faad3dad412cd200fc56_>'::`2'::factory )
  {
    result = winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsWebSearchProvidersThirdPartyExtensionsEnabled(&`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_26dbc5293813faad3dad412cd200fc56_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180650888);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650888);
    v5[0] = L"WindowsUdk.System.Profile.IntegratedServicesGeographicRegionPolicies";
    v5[1] = 68LL;
    winrt::param::hstring::hstring(string, (__int64)v5);
    winrt::get_activation_factory<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>(
      &v3,
      string);
    v1 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v3, &v4);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    if ( v1 )
    {
      v5[3] = &qword_180650888;
      _InterlockedIncrement64(&qword_180650888);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_26dbc5293813faad3dad412cd200fc56_>'::`2'::factory,
              v3,
              0LL) )
      {
        v3 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650890);
      }
      LOBYTE(IsWebSearchProvidersThirdPartyExtensionsEnabled) = winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsWebSearchProvidersThirdPartyExtensionsEnabled(&`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_26dbc5293813faad3dad412cd200fc56_>'::`2'::factory);
      _InterlockedDecrement64(&qword_180650888);
    }
    else
    {
      IsWebSearchProvidersThirdPartyExtensionsEnabled = (unsigned __int8)winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsWebSearchProvidersThirdPartyExtensionsEnabled(&v3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v3);
    return IsWebSearchProvidersThirdPartyExtensionsEnabled;
  }
  return result;
}
