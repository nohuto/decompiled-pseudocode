/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C01F71C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01E987C (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v8 = PtiFromThreadId(a2);
    if ( v8 )
    {
      v6 = ValidatePwndDesktop(v7, v8);
    }
    else
    {
      v14 = 0LL;
      v13 = 0LL;
      if ( (int)GetConsoleDesktop(a2, v12, &v13, &v14) < 0 )
        UserSetLastError(87LL, v9, v10);
      else
        LOBYTE(v6) = *(_QWORD *)(v7 + 24) == v13;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
