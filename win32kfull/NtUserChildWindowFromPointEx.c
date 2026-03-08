/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C0147500
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C01489CA (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWND *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)ChildWindowFromPointEx(v4);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
