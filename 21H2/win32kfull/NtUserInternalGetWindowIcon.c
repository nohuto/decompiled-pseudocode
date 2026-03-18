/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C0150510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetWindowIcon @ 0x1C0150580 (_GetWindowIcon.c)
 */

__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 WindowIcon; // rbx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  WindowIcon = 0LL;
  if ( v4 )
  {
    if ( a2 > 2 )
      UserSetLastError(87LL, v5);
    else
      WindowIcon = GetWindowIcon(v4, a2);
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowIcon;
}
