/*
 * XREFs of ?IsFeedsAvailable@ShellFeedsExperienceHelpers@@YAJPEAE@Z @ 0x1800B5A6C
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78D4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B5608 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::IsFeedsAvailable(
        ShellFeedsExperienceHelpers *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int ShellFeedsRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  ShellFeedsRegKey = ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
                       (ShellFeedsExperienceHelpers *)L"IsFeedsAvailable",
                       &v8,
                       a3);
  v5 = ShellFeedsRegKey;
  if ( ShellFeedsRegKey == -2147024894 )
  {
    *(_BYTE *)this = 0;
  }
  else
  {
    if ( ShellFeedsRegKey < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x240,
        (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\ShellFeedsExperienceHelpers.h",
        (const char *)(unsigned int)ShellFeedsRegKey);
      return v5;
    }
    *(_BYTE *)this = v8 == 1;
  }
  return 0LL;
}
