/*
 * XREFs of NtUserSetSystemTimer @ 0x1C0202B50
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C002CAB8 (_SetSystemTimer.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v10 = SetSystemTimer(v6, a2, a3, 0, 0);
    else
      UserSetLastError(5LL, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
