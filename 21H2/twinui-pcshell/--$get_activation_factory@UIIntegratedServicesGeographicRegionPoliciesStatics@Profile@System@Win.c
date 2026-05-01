/*
 * XREFs of ??$get_activation_factory@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@winrt@@YA?AUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009E8C0
 * Callers:
 *     ??$call@AEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@Z @ 0x18009E190 (--$call@AEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@-$factory_cache_entry@UIntegratedService.c)
 *     ??$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@Z @ 0x180106F3C (--$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@-$factory_cache_entry@UIntegratedService.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
