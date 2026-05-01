/*
 * XREFs of _TitleBarController::OnViewRecovered_::_1_::catch$2 @ 0x1802F7A3C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TitleBarController::OnViewRecovered_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xF6,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
    a4);
  return 0LL;
}
