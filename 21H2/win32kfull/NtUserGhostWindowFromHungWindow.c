/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1C003B550
 * Callers:
 *     <none>
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C003B5B0 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v2 )
  {
    v8 = (__int64 *)GhostWindowFromHungWindow(v2, v3, v5, v6);
    if ( v8 )
      v7 = *v8;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
