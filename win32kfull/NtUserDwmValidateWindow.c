__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = (int)a2;
  Object = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( ValidateHwnd(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v4, &Object, v10, v11) >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process && *ProcessWin32Process )
        LOBYTE(v3) = GetDesktopView(ProcessWin32Process) != 0;
      else
        UserSetLastError(5);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v3;
}
