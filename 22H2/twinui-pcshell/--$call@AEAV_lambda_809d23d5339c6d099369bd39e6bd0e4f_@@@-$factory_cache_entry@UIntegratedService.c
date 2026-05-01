/*
 * XREFs of ??$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@Z @ 0x180106DCC
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@winrt@@YA?AUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009E8A0 (--$get_activation_factory@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@Win.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?IsEdgeUninstallable@?$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A7C24 (-IsEdgeUninstallable@-$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoli.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

char winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<_lambda_809d23d5339c6d099369bd39e6bd0e4f_ &>()
{
  char result; // al
  __int64 v1; // rbx
  char IsEdgeUninstallable; // bl
  __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v5[2] = &qword_180650288;
  _InterlockedIncrement64(&qword_180650288);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_809d23d5339c6d099369bd39e6bd0e4f_>'::`2'::factory )
  {
    result = winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsEdgeUninstallable(&`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_809d23d5339c6d099369bd39e6bd0e4f_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180650288);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650288);
    v5[0] = L"WindowsUdk.System.Profile.IntegratedServicesGeographicRegionPolicies";
    v5[1] = 68LL;
    winrt::param::hstring::hstring(string, (__int64)v5);
    winrt::get_activation_factory<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>(
      &v3,
      (__int64 *)string);
    v1 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v3, &v4);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    if ( v1 )
    {
      v5[3] = &qword_180650288;
      _InterlockedIncrement64(&qword_180650288);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_809d23d5339c6d099369bd39e6bd0e4f_>'::`2'::factory,
              v3,
              0LL) )
      {
        v3 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650290);
      }
      IsEdgeUninstallable = winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsEdgeUninstallable(&`winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_809d23d5339c6d099369bd39e6bd0e4f_>'::`2'::factory);
      _InterlockedDecrement64(&qword_180650288);
    }
    else
    {
      IsEdgeUninstallable = winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsEdgeUninstallable(&v3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v3);
    return IsEdgeUninstallable;
  }
  return result;
}
