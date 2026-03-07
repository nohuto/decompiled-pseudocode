__int64 __fastcall NtUserGetClipboardViewer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  struct tagWINDOWSTATION *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = CheckClipboardAccess(v3);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)*((_QWORD *)v4 + 13);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
