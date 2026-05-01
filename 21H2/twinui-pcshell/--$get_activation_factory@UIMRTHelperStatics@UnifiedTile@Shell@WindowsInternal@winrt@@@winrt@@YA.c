/*
 * XREFs of ??$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA?AUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@0@AEBUhstring@param@0@@Z @ 0x180133F4C
 * Callers:
 *     ??$call@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@Z @ 0x180133898 (--$call@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@-$factory_cache_entry@UMRTHelper@Unified.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  result = a1;
  *a1 = v6;
  return result;
}
