__int64 __fastcall NtUserRegisterLPK(int a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *(_DWORD *)(CurrentProcessWin32Process + 752) = a1;
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
