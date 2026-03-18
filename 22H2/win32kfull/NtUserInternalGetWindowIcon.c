/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C01D5BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetWindowIcon @ 0x1C01E380C (_GetWindowIcon.c)
 */

__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
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
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return WindowIcon;
}
