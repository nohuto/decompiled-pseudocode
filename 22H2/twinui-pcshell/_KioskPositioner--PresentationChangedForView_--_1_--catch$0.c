/*
 * XREFs of _KioskPositioner::PresentationChangedForView_::_1_::catch$0 @ 0x18044C1E5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KioskPositioner::PresentationChangedForView_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x2A5,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  return 0LL;
}
