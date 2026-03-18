/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1C005EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C005F03C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct tagWND *v10; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = (const struct tagWND *)ValidateHwnd(a1);
  v9 = 0LL;
  if ( v4 )
  {
    v10 = _GhostWindowFromHungWindow(v4);
    if ( v10 )
      v9 = *(_QWORD *)v10;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
