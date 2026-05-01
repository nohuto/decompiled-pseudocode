/*
 * XREFs of _ActivationHints::AddHint_::_1_::catch$54 @ 0x180439A22
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ActivationHints::AddHint_::_1_::catch_54(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           a4);
  return 0LL;
}
