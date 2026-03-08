/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C01D9D80
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C023336C (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  tagWND *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = (tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)RealChildWindowFromPoint(v4);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
