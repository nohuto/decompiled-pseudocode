/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C01D6BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetWindowIcon @ 0x1C01E48BC (_GetWindowIcon.c)
 */

__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 WindowIcon; // rbx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  WindowIcon = 0LL;
  if ( v4 )
  {
    if ( a2 <= 2 )
      WindowIcon = GetWindowIcon(v4, a2);
    else
      UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v5);
  return WindowIcon;
}
