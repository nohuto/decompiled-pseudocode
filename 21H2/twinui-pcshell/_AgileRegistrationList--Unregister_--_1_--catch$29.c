/*
 * XREFs of _AgileRegistrationList::Unregister_::_1_::catch$29 @ 0x1801C43A9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C02B8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AgileRegistrationList::Unregister_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x31,
                           (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           a4);
  return 0LL;
}
