/*
 * XREFs of NtUserOpenDesktop @ 0x1C000F170
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C000F208 (_OpenDesktop.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  ULONG v6; // eax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = OpenDesktop(a1, (__int64)&v7);
  if ( v3 < 0 )
  {
    v6 = RtlNtStatusToDosError(v3);
    UserSetLastError(v6);
  }
  else
  {
    v1 = v7;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v1;
}
