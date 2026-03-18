/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C01FAAB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01E418C (_OpenThreadDesktop.c)
 */

HANDLE __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  HANDLE v6; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  HANDLE v14; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, &v14);
  if ( v9 >= 0 )
  {
    v6 = v14;
  }
  else
  {
    v11 = RtlNtStatusToDosError(v9);
    UserSetLastError(v11, v12);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
