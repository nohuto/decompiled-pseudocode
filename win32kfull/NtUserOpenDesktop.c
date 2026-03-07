__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v5; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  ULONG v11; // eax
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v12);
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11);
  }
  else
  {
    v5 = v12;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
