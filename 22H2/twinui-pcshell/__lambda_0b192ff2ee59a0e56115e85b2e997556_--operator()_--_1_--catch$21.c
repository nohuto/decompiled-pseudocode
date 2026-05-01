/*
 * XREFs of __lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()_::_1_::catch$21 @ 0x1804BA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BD970 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()_::_1_::catch_21(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x60,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
    a4);
  return 0LL;
}
