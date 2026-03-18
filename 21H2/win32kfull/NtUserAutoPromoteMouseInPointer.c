/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C01F1560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00AD354 (IsMiPEnabledForThread.c)
 *     SetMiPPromotion @ 0x1C01DCFDC (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  if ( IsMiPEnabledForThread(gptiCurrent) && (v4 = (_DWORD *)*((_QWORD *)v3 + 164)) != 0LL && (v5 = 1LL, (*v4 & 1) != 0) )
  {
    SetMiPPromotion(v3, a1);
  }
  else
  {
    UserSetLastError(5LL, v2);
    v5 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
