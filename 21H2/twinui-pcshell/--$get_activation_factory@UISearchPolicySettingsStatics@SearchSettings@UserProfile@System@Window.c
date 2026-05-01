/*
 * XREFs of ??$get_activation_factory@UISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@winrt@@YA?AUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009E938
 * Callers:
 *     ??$call@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@Z @ 0x18009E46C (--$call@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@-$factory_cache_entry@USearchPolicySetti.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
