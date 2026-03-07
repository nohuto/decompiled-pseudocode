__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 && GetTopLevelWindow(v4) )
    v6 = *(_QWORD *)GetTopLevelWindow(v7);
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
