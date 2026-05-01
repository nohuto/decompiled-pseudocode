/*
 * XREFs of _XamlAllUpViewHost::Initialize_::_1_::catch$27 @ 0x1803731FE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlAllUpViewHost::Initialize_::_1_::catch_27(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 240) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 232),
                            (void *)0xD7,
                            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                            a4);
  return 0LL;
}
