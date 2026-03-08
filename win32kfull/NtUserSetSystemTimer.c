/*
 * XREFs of NtUserSetSystemTimer @ 0x1C01DDCF0
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v8 = SetSystemTimer(v6, a2, a3, 0, 0);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
