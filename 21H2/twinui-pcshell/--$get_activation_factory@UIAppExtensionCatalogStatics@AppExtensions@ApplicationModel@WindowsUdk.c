/*
 * XREFs of ??$get_activation_factory@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180260DF8
 * Callers:
 *     ??$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@Z @ 0x18004D514 (--$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     ??$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@Z @ 0x1803C8BBC (--$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  signed int ActivationFactory_0; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::value,
                            (__int64)&v6);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
