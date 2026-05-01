/*
 * XREFs of __lambda_1f4f68820907753b977dd0769491499a_::operator()_::_1_::catch$13 @ 0x1802F5E8C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_1f4f68820907753b977dd0769491499a_::operator()_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x282,
                            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                            a4);
  return 0LL;
}
