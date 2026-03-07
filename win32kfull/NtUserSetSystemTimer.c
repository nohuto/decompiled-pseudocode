__int64 __fastcall NtUserSetSystemTimer(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v8 = SetSystemTimer(v6, a2, a3, 0, 0);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
