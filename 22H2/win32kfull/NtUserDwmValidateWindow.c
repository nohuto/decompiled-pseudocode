/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C004FCC0
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C004FEC0 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a2;
  Object = 0LL;
  EnterSharedCrit();
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v3, &Object, v11, v12) >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process && *ProcessWin32Process )
        LOBYTE(v2) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v7 + 24)) != 0;
      else
        UserSetLastError(5LL);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v2;
}
