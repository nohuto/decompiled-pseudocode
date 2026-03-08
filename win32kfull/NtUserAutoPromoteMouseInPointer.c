/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0147140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00D7F08 (IsMiPEnabledForThread.c)
 *     SetMiPPromotion @ 0x1C0144240 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  struct tagTHREADINFO *v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  if ( IsMiPEnabledForThread(gptiCurrent) && (v3 = (_DWORD *)*((_QWORD *)v2 + 169)) != 0LL && (v4 = 1LL, (*v3 & 1) != 0) )
  {
    SetMiPPromotion(v2, a1);
  }
  else
  {
    UserSetLastError(5);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
