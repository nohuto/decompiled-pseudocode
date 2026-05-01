/*
 * XREFs of ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x180115DE8
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801073BC (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?AUConnectionProfile@Connectivity@Networking@Windows@2@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@Z @ 0x1801089C4 (--$call@AEAV_lambda_c33160ded50b557154f45d43ca471d98_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1804D6220 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable(ShellFeedsAvailabilityHelpers *this)
{
  int v1; // ebx
  __int64 v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v1 = 0;
    v6 = 0;
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_c33160ded50b557154f45d43ca471d98_ &>(
      (__int64)this,
      &v9);
    v8 = 0LL;
    if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v9, &v8) )
    {
      v2 = (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v8);
      winrt::check_hresult(v2);
      v1 = v8;
      v6 = v8;
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96,
      (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      v3);
    v1 = v6;
  }
  return ((v1 - 1) & 0xFFFFFFFD) == 0;
}
