/*
 * XREFs of __lambda_f27b60bae871d07517fb334ba178f733_::operator()_::_1_::catch$13 @ 0x180354282
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_f27b60bae871d07517fb334ba178f733_::operator()_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xCE,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           a4);
  return 0LL;
}
