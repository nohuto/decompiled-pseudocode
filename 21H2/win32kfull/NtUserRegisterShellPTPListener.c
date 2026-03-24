/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0132B90
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003C638 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _RegisterShellPTPListener @ 0x1C0132C58 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( !a2 || (v11 = *(_QWORD *)(v7 + 40), *(char *)(v11 + 20) >= 0) && *(char *)(v11 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v9) )
        {
          v6 = RegisterShellPTPListener(v7, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v8, v10);
      v13 = 87LL;
    }
    else
    {
      v13 = 5LL;
    }
    UserSetLastError(v13, v8, v10);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
