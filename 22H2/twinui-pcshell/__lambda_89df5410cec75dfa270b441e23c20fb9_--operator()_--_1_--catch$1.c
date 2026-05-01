/*
 * XREFs of __lambda_89df5410cec75dfa270b441e23c20fb9_::operator()_::_1_::catch$1 @ 0x1802F610F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_89df5410cec75dfa270b441e23c20fb9_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x108,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
    a4);
  return 0LL;
}
