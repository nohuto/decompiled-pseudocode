/*
 * XREFs of _XamlAltTabViewHost::Initialize_::_1_::catch$28 @ 0x180381869
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C02B8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlAltTabViewHost::Initialize_::_1_::catch_28(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 208) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0xA5,
                            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                            a4);
  return 0LL;
}
