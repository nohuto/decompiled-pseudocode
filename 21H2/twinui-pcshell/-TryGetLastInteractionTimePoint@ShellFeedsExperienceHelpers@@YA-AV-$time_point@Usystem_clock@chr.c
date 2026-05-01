/*
 * XREFs of ?TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@XZ @ 0x1800B7E14
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78D4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?FileTime2TimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@PEAU_FILETIME@@@Z @ 0x1800B2B48 (-FileTime2TimePoint@ShellFeedsExperienceHelpers@@YA-AV-$time_point@Usystem_clock@chrono@std@@V-$.c)
 *     ?TryGetLastInteractionDate@ShellFeedsExperienceHelpers@@YA_NPEAU_SYSTEMTIME@@@Z @ 0x1800B7CC0 (-TryGetLastInteractionDate@ShellFeedsExperienceHelpers@@YA_NPEAU_SYSTEMTIME@@@Z.c)
 */

unsigned __int64 *__fastcall ShellFeedsExperienceHelpers::TryGetLastInteractionTimePoint(
        unsigned __int64 *a1,
        struct _SYSTEMTIME *a2)
{
  struct _FILETIME FileTime; // [rsp+20h] [rbp-28h] BYREF
  SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

  SystemTime = 0LL;
  if ( ShellFeedsExperienceHelpers::TryGetLastInteractionDate((ShellFeedsExperienceHelpers *)&SystemTime, a2)
    && SystemTimeToFileTime(&SystemTime, &FileTime) )
  {
    ShellFeedsExperienceHelpers::FileTime2TimePoint(a1, &FileTime);
  }
  else
  {
    *a1 = 0x8000000000000000uLL;
  }
  return a1;
}
