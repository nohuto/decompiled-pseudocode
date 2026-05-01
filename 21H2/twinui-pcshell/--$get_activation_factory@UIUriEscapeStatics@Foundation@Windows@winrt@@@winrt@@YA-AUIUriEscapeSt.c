/*
 * XREFs of ??$get_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIUriEscapeStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B0F24
 * Callers:
 *     ??$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@Z @ 0x1800B0D28 (--$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IUriEscapeStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::IUriEscapeStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::IUriEscapeStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
