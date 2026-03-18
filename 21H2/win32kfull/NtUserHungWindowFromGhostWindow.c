/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C0104300
 * Callers:
 *     <none>
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C01043E4 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = (__int64 *)HungWindowFromGhostWindow(v4);
    if ( v7 )
      v6 = *v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
