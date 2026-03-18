/*
 * XREFs of NtUserLockSetForegroundWindow @ 0x1C01D60A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x1C01ADD10 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 */

_BOOL8 __fastcall NtUserLockSetForegroundWindow(unsigned int a1)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = _LockSetForegroundWindow(a1) != 0;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
