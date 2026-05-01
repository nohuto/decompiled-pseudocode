/*
 * XREFs of ??$?0V_lambda_26d3ef13f760514ffe3067a0565e182b_@@@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@V_lambda_26d3ef13f760514ffe3067a0565e182b_@@@Z @ 0x180101DA0
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x180102FA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180102FA0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x180105310 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_180105310.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[1] = a2;
  *((_DWORD *)v5 + 4) = 1;
  *v5 = &winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_26d3ef13f760514ffe3067a0565e182b_>::`vftable';
  *a1 = v5;
  return a1;
}
