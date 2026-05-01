/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::catch$30 @ 0x180156BA2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::catch_30(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 240) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 1192),
                            (void *)0x168,
                            (unsigned int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                            a4);
  return 0LL;
}
