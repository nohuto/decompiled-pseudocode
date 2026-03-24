/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C01FF7F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01E9438 (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  HANDLE v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  HANDLE v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v15);
  if ( v9 >= 0 )
  {
    v4 = v15;
  }
  else
  {
    v11 = RtlNtStatusToDosError(v9);
    UserSetLastError(v11, v12, v13);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
