/*
 * XREFs of ??$get_activation_factory@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIPackageCatalogStatics@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x180119D14
 * Callers:
 *     ??$call@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?AUPackageCatalog@ApplicationModel@Windows@2@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@Z @ 0x180119788 (--$call@AEAV_lambda_012ba66bd771075c52d904e15f0e6430_@@@-$factory_cache_entry@UPackageCatalog@Ap.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009143A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009181D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::ApplicationModel::IPackageCatalogStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::ApplicationModel::IPackageCatalogStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::ApplicationModel::IPackageCatalogStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
