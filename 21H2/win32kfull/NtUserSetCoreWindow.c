/*
 * XREFs of NtUserSetCoreWindow @ 0x1C009AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C009CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rcx
  __int64 v8; // rcx
  struct tagWND *v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v10 = 0LL;
  if ( ValidateHWNDND(a1, &v10) )
  {
    if ( a2 )
    {
      v7 = v10;
      *((_DWORD *)v10 + 80) |= 0x1000u;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v7 = v10;
      *((_DWORD *)v10 + 80) &= ~0x1000u;
    }
    SetWindowSubtreeCoreWindowStatus(v7, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
