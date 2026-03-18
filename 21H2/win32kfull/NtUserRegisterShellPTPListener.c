/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C011DBA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     _RegisterShellPTPListener @ 0x1C011DC64 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( !a2 || (v10 = *(_QWORD *)(v7 + 40), *(char *)(v10 + 20) >= 0) && *(char *)(v10 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v9) )
        {
          v6 = RegisterShellPTPListener(v7, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v8);
      v12 = 87LL;
    }
    else
    {
      v12 = 5LL;
    }
    UserSetLastError(v12, v8);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
