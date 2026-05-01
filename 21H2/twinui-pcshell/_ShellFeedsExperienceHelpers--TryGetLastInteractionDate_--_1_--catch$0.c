/*
 * XREFs of _ShellFeedsExperienceHelpers::TryGetLastInteractionDate_::_1_::catch$0 @ 0x1800B7DD7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::TryGetLastInteractionDate_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x2AD,
    (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\ShellFeedsExperienceHelpers.h",
    a4);
  return 0LL;
}
