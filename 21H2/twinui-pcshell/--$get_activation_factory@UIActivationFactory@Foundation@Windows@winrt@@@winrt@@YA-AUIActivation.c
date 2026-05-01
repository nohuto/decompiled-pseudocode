/*
 * XREFs of ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009E848
 * Callers:
 *     ??$call@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUPackageManager@Deployment@Management@Windows@2@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@Z @ 0x18009E2F4 (--$call@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x1800C1A28 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 *     ??$call@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@?$factory_cache_entry@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@Z @ 0x180133444 (--$call@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@-$factory_cache_entry@ULogoLoader@LogoLo.c)
 *     ??$call@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@?$factory_cache_entry@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@Z @ 0x1801335BC (--$call@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@-$factory_cache_entry@ULogoOptions@LogoL.c)
 *     ??$call@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@?$factory_cache_entry@UXmlDocument@Dom@Xml@Data@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?AUXmlDocument@Dom@Xml@Data@Windows@2@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@Z @ 0x180146F60 (--$call@AEAV_lambda_73467e1889e99e6893efd5fb947c491d_@@@-$factory_cache_entry@UXmlDocument@Dom@X.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(*a2, (__int64)L"5", (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(*a2, (__int64)L"5", (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
