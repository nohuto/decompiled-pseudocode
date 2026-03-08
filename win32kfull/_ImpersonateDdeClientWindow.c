/*
 * XREFs of _ImpersonateDdeClientWindow @ 0x1C01FD6B0
 * Callers:
 *     NtUserImpersonateDdeClientWindow @ 0x1C01D5F70 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01FAB6C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImpersonateDdeClientWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *DdeConv; // rax
  __int64 v3; // rcx
  int v4; // eax
  ULONG v5; // eax

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
    UserSetLastError(v5);
    return 0LL;
  }
  return 1LL;
}
