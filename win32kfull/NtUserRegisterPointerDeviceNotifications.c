__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+44h] [rbp+1Ch]

  v12 = -1;
  v11 = 0x2000;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == v9 )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, &v11) )
      {
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 9LL);
        UserSetLastError(5);
      }
      else
      {
        v6 = RegisterPointerDeviceNotifications(v7, a2);
      }
    }
    else
    {
      v6 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
