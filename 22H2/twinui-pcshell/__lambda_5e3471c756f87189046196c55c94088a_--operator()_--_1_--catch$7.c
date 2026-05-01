/*
 * XREFs of __lambda_5e3471c756f87189046196c55c94088a_::operator()_::_1_::catch$7 @ 0x18036D15F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_5e3471c756f87189046196c55c94088a_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x35,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
    a4);
  return 0LL;
}
