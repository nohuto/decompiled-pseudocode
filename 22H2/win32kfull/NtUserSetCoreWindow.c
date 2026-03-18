/*
 * XREFs of NtUserSetCoreWindow @ 0x1C00AD610
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028D5C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00AD698 (SetWindowSubtreeCoreWindowStatus.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  struct tagWND *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v12 = 0LL;
  LOBYTE(v5) = ValidateHWNDND(a1, &v12);
  if ( v5 )
  {
    if ( a2 )
    {
      v6 = v12;
      *((_DWORD *)v12 + 80) |= 0x1000u;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 25724LL);
      v6 = v12;
      *((_DWORD *)v12 + 80) &= ~0x1000u;
    }
    SetWindowSubtreeCoreWindowStatus(v6, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
