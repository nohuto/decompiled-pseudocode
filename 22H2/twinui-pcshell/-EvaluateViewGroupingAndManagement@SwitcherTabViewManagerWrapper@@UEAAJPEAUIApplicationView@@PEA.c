/*
 * XREFs of ?EvaluateViewGroupingAndManagement@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x180371250
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::EvaluateViewGroupingAndManagement(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    23LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x18037126ALL);
}
