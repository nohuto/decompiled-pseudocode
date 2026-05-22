/*
 * XREFs of ?SetInteractionObject@ShellGesturesTarget@@UEAAJI@Z @ 0x18017EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn ShellGesturesTarget::SetInteractionObject(
        ShellGesturesTarget *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    74LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturestarget.cpp",
    a4);
  JUMPOUT(0x18017EEDALL);
}
