/*
 * XREFs of _ImpersonateDdeClientWindow @ 0x1C021CC24
 * Callers:
 *     NtUserImpersonateDdeClientWindow @ 0x1C01FD8F0 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021AC58 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImpersonateDdeClientWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *DdeConv; // rax
  __int64 v3; // rcx
  int v4; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8

  DdeConv = FindDdeConv(a1, a2);
  if ( !DdeConv )
    return 0LL;
  v3 = *((_QWORD *)DdeConv + 11);
  if ( !v3 )
    return 0LL;
  v4 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(v3 + 16), KeGetCurrentThread());
  if ( v4 < 0 )
  {
    v5 = RtlNtStatusToDosError(v4);
    UserSetLastError(v5, v6, v7);
    return 0LL;
  }
  return 1LL;
}
