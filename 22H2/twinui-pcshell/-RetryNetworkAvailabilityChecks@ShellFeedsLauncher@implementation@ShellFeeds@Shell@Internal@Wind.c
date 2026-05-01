/*
 * XREFs of ?RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x180104E04
 * Callers:
 *     ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_be8a6f579aab40e35446f4addbd39028_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1801026B0 (-Invoke@-$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_la.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x180104230 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+148h] [rbp+10h] BYREF

  v4 = operator new(0x108uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
