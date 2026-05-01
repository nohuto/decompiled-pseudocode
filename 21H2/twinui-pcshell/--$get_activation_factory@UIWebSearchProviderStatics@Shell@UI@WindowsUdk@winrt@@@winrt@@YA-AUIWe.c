/*
 * XREFs of ??$get_activation_factory@UIWebSearchProviderStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIWebSearchProviderStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009EA28
 * Callers:
 *     ??$call@AEAV_lambda_d5b7b20726ec0640acae711c2d58920e_@@@?$factory_cache_entry@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@UIWebSearchProviderStatics@2345@@impl@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_d5b7b20726ec0640acae711c2d58920e_@@@Z @ 0x18009E5E4 (--$call@AEAV_lambda_d5b7b20726ec0640acae711c2d58920e_@@@-$factory_cache_entry@UWebSearchProvider.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
