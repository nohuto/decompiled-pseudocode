/*
 * XREFs of ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x18019FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18020AA34 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 */

__int64 __fastcall CInputManager::s_OnReceiveInputThreadMessage(
        void *a1,
        const struct EdgyDetectedParams *a2,
        int a3,
        const char *a4)
{
  CManipulation *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 56 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      158LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\inputmanager.cpp",
      a4);
  if ( *(_QWORD *)a2 )
  {
    v4 = *(CManipulation **)(*(_QWORD *)a2 + 16LL);
    if ( v4 )
      CManipulation::OnEdgyDetected(v4, a2);
  }
  return 0LL;
}
