/*
 * XREFs of _StartUI::StartRegHelpers::PrecreateStartMenuConfigRegKey_::_1_::catch$3 @ 0x1800CC316
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartUI::StartRegHelpers::PrecreateStartMenuConfigRegKey_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x42,
    (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartRegHelpers.h",
    a4);
  return 0LL;
}
