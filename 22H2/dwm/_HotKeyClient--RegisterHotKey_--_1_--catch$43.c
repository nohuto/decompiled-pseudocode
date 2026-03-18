/*
 * XREFs of _HotKeyClient::RegisterHotKey_::_1_::catch$43 @ 0x14000B355
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14000B784 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HotKeyClient::RegisterHotKey_::_1_::catch_43(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)a2,
                           a3,
                           a4);
  return 0LL;
}
