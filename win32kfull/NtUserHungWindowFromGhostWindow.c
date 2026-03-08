/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C00EEB20
 * Callers:
 *     <none>
 * Callees:
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00A1FC8 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = (const struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v4 )
  {
    v7 = _HungWindowFromGhostWindow(v4);
    if ( v7 )
      v6 = *(_QWORD *)v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
