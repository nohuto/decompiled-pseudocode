/*
 * XREFs of ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1801B2910
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn CConnection::PostMessageToClient(
        CConnection *this,
        const struct UCE_RDP_HEADER *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    45LL,
    (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\engine\\Connection.h",
    a4);
}
