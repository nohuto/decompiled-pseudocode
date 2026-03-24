/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C0133FA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C0134074 (_RegisterPointerDeviceNotifications.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+44h] [rbp+1Ch]

  v13 = -1;
  v12 = 0x2000;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v5 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v5 + 424) == CurrentProcessWin32Process )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v12) )
      {
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 9LL);
        UserSetLastError(5LL, v10, v11);
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
