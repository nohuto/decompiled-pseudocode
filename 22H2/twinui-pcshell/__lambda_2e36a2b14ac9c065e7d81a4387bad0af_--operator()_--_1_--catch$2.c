/*
 * XREFs of __lambda_2e36a2b14ac9c065e7d81a4387bad0af_::operator()_::_1_::catch$2 @ 0x18038F4C9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_2e36a2b14ac9c065e7d81a4387bad0af_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x88,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
                           a4);
  return 0LL;
}
