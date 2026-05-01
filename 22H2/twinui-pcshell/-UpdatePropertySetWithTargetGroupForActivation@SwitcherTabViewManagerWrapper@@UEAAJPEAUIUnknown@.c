/*
 * XREFs of ?UpdatePropertySetWithTargetGroupForActivation@SwitcherTabViewManagerWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1803781D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::UpdatePropertySetWithTargetGroupForActivation(
        SwitcherTabViewManagerWrapper *this,
        struct IUnknown *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    25LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x1803781EALL);
}
