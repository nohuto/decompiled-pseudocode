__int64 __fastcall NtUserSetProcessDefaultLayout(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87);
    v4 = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v6 = v3 & CurrentProcessWin32Process;
    }
    *(_DWORD *)(v6 + 816) = a1;
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
