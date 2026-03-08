/*
 * XREFs of NtUserLockSetForegroundWindow @ 0x1C01D70D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x1C01AEF00 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 */

_BOOL8 __fastcall NtUserLockSetForegroundWindow(unsigned int a1)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = _LockSetForegroundWindow(a1) != 0;
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
