__int64 NtUserDisableProcessWindowsGhosting()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x8000000u;
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
