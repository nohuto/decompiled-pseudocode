/*
 * XREFs of NtUserSetCoreWindow @ 0x1C0012C70
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0013D1C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00322D8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct tagWND *v7; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  v7 = 0LL;
  if ( (unsigned int)ValidateHWNDND(a1, &v7) )
  {
    SetOrClrWF(a2, v7, 56065LL, 1LL);
    SetWindowSubtreeCoreWindowStatus(v7, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
