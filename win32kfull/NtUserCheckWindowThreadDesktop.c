/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C01CE770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01BFCC8 (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    v9 = PtiFromThreadId(v3);
    if ( v9 )
    {
      v7 = ValidatePwndDesktop(v8, v9);
    }
    else
    {
      v13 = 0LL;
      v12 = 0LL;
      if ( (int)GetConsoleDesktop(v3, v11, &v12, &v13) < 0 )
        UserSetLastError(87);
      else
        LOBYTE(v7) = *(_QWORD *)(v8 + 24) == v12;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
