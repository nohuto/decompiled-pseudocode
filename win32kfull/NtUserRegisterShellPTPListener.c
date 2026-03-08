/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C00F1C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 *     _RegisterShellPTPListener @ 0x1C00F1D18 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  int v13; // ecx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( !a2 || (v9 = *(_QWORD *)(v7 + 40), *(char *)(v9 + 20) >= 0) && *(char *)(v9 + 19) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        v11 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == v11 )
        {
          v6 = RegisterShellPTPListener(v7, a2);
          goto LABEL_10;
        }
      }
      UserSetLastError(87);
      v13 = 87;
    }
    else
    {
      v13 = 5;
    }
    UserSetLastError(v13);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
