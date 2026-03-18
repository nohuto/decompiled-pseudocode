/*
 * XREFs of NtUserOpenDesktop @ 0x1C006B290
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C006737C (_OpenDesktop.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1, unsigned int a2, int a3)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v14; // eax
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (HANDLE *)&v15);
  if ( v8 < 0 )
  {
    v14 = RtlNtStatusToDosError(v8);
    UserSetLastError(v14);
  }
  else
  {
    v5 = v15;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v5;
}
