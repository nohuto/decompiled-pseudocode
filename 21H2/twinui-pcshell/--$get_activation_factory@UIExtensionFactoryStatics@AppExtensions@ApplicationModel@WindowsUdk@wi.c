/*
 * XREFs of ??$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180119E0C
 * Callers:
 *     ??$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@Z @ 0x180119A70 (--$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
