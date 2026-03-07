__int64 __fastcall NtUserSetCoreWindow(HWND a1, int a2)
{
  __int64 v4; // rdi
  struct tagWND *v5; // rcx
  __int64 v6; // rcx
  struct tagWND *v8; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)ValidateHWNDND(a1, &v8) )
  {
    if ( a2 )
    {
      v5 = v8;
      *((_DWORD *)v8 + 80) |= 0x1000u;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 25862LL);
      v5 = v8;
      *((_DWORD *)v8 + 80) &= ~0x1000u;
    }
    SetWindowSubtreeCoreWindowStatus((__int64)v5, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
