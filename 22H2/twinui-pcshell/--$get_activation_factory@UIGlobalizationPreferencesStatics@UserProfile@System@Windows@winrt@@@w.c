/*
 * XREFs of ??$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUIGlobalizationPreferencesStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x180108CB4
 * Callers:
 *     ??$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@Z @ 0x180108B3C (--$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@-$factory_cache_entry@UGlobalizationPref.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009143A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009181D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
