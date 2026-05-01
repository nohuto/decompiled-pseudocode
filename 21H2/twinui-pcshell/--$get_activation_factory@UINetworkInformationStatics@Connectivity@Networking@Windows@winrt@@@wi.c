/*
 * XREFs of ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1801022D8
 * Callers:
 *     ??$call@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?AUevent_token@2@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@Z @ 0x180101F50 (--$call@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     ??$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAAXAEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@Z @ 0x1801020D0 (--$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     ??$call@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?AUConnectionProfile@Connectivity@Networking@Windows@2@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@Z @ 0x180108B34 (--$call@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@-$factory_cache_entry@UNetworkInformatio.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18009145A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009183D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)&v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  *a1 = v6;
  return a1;
}
