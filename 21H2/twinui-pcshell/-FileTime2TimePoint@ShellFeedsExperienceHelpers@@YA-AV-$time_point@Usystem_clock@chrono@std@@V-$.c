/*
 * XREFs of ?FileTime2TimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@PEAU_FILETIME@@@Z @ 0x1800B2B48
 * Callers:
 *     ?TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@XZ @ 0x1800B7E14 (-TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA-AV-$time_point@Usystem_clock@chr.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

unsigned __int64 *__fastcall ShellFeedsExperienceHelpers::FileTime2TimePoint(unsigned __int64 *a1, const FILETIME *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  SystemTime = 0LL;
  if ( FileTimeToSystemTime(a2, &SystemTime) )
  {
    *(FILETIME *)&SystemTime.wYear = *a2;
    v5 = (*(_QWORD *)&SystemTime.wYear / 0x2710uLL * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
    v4 = 10000
       * (*(_QWORD *)&SystemTime.wYear / 0x2710uLL
        - 1000 * ((v5 + ((*(_QWORD *)&SystemTime.wYear / 0x2710uLL - v5) >> 1)) >> 9))
       + 10000000 * (*(_QWORD *)&SystemTime.wYear / 0x989680uLL - 0x2B6109100LL);
  }
  else
  {
    v4 = 0x8000000000000000uLL;
  }
  *a1 = v4;
  return a1;
}
