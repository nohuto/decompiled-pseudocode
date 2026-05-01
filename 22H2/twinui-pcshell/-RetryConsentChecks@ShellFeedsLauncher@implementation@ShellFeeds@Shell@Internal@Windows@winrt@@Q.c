/*
 * XREFs of ?RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1801041CC
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x1801051A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_1801051A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x180102CCC (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+1E8h] [rbp+10h] BYREF

  v4 = operator new(0x1B0uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
