/*
 * XREFs of ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_be8a6f579aab40e35446f4addbd39028_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180102820
 * Callers:
 *     <none>
 * Callees:
 *     ?RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x180104F74 (-RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 */

__int64 winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_be8a6f579aab40e35446f4addbd39028_>::Invoke()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
