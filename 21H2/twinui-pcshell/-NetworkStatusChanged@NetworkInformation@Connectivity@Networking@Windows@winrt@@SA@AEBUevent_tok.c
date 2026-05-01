/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUevent_token@5@@Z @ 0x1801028F8
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x180104510 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180104510.c)
 * Callees:
 *     ??$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAAXAEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@Z @ 0x1801020D0 (--$call@AEAV_lambda_43fb67edc03a13e09baac6523e5cae48_@@@-$factory_cache_entry@UNetworkInformatio.c)
 */

__int64 __fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(
        const struct winrt::event_token *a1)
{
  const struct winrt::event_token *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_43fb67edc03a13e09baac6523e5cae48_ &>(
           (__int64)a1,
           &v2);
}
