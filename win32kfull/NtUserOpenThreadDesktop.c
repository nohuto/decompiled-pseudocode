__int64 __fastcall NtUserOpenThreadDesktop(int a1, int a2, int a3, int a4)
{
  __int64 v6; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  ULONG v12; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v13[0] = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, v13);
  if ( v9 < 0 )
  {
    v12 = RtlNtStatusToDosError(v9);
    UserSetLastError(v12);
  }
  else
  {
    v6 = v13[0];
  }
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
