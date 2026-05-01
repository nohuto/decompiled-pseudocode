/*
 * XREFs of ?TryWriteFeedsDeviceEnterpriseStatus@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x180106854
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x1801051A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_1801051A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus$_InitCoro$1 @ 0x180105EE8 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--TryWriteFeedsDe.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xD8uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
